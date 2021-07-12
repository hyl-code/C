#include<stdio.h>
#include<string.h>
//引用数据库Mysql头文件
#include<winsock.h>
#include<mysql.h>
int borrow(int status, int bid);

int borrow(int status, int bid) {
	char sql[200];
	MYSQL *pconn = mysql_init(0);

	if (!mysql_real_connect(pconn, "localhost", "root", "h17399983373.", "bookmanager", 0, 0, 0))
	{
		printf("连接失败，错误为:%s\n", mysql_error(pconn));
	}
	else
	{
		printf("连接成功!\n");
	}

	if (mysql_query(pconn, "set names gbk"))
	{
		printf("编码错误,错误为%s\n", mysql_error(pconn));
	} 

	sprintf(sql, "select status from bookinfo where bid = '%d'",bid);
	mysql_query(pconn, sql);
	
	MYSQL_RES *res = mysql_store_result(pconn);
	MYSQL_ROW row = mysql_fetch_row(res);
	int num = atoi(row[0]);
	return num;

}

int main(void)
{
	char uname[20];
	char upassword[20];
	int uidentity = 0;
	int flag = 1;
	int tmp;
	int bid;
	int a;
	int status;
	char bname[20];
	char bauthor[20];

	MYSQL *pconn = mysql_init(0);
	//连接数据库(初始化数据信息, 链接地址, 账号, 密码, 数据库名称)

	if (!mysql_real_connect(pconn, "localhost", "root", "h17399983373.", "bookmanager", 0, 0, 0))
	{
		printf("连接失败，错误为:%s\n", mysql_error(pconn));
	}
	else
	{
		printf("连接成功!\n");
	}

	//解决初始化编码问题
	if (mysql_query(pconn, "set names gbk"))
	{
		printf("编码错误,错误为%s\n", mysql_error(pconn));
	}

	printf("欢迎使用图书管理系统！\n");
	
	if (mysql_query(pconn, "select* from bookinfo")) {
		printf("查询失败，错误为：%s\n", mysql_error(pconn));
	}

	printf("编号\t\t书名\t\t作者\t\t状态\n");

	//用一个容器来接受查询的结果
	MYSQL_RES *res = mysql_store_result(pconn);
	//利用游标概念去读取数组,读取的是每一行的数据
	//MYSQL_ROW r = mysql_fetch_row(res);
	//循环读出每条数据
	MYSQL_ROW row;
	while (row = mysql_fetch_row(res)){
		printf("%s\t\t", row[0]);
		printf("%s\t\t", row[1]);
		printf("%s\t\t", row[2]);
		printf("%s\n", row[3]);
	}

	while (flag) {
		printf("请输入用户名：");
		scanf("%s", &uname);
		printf("请输入密码:");
		scanf("%s", &upassword);
		char sql[200];
		sprintf(sql, "select uname,upassword from users where uname = '%s' and upassword = '%s'", uname, upassword);
		mysql_query(pconn,sql);
		MYSQL_RES *res = mysql_store_result(pconn);
		MYSQL_ROW row;
		if(row = mysql_fetch_row(res)){
			printf("登录成功！\n");
			sprintf(sql, "select uidentity from users where uname = '%s' and upassword = '%s'", uname, upassword);
			mysql_query(pconn,sql);
			MYSQL_RES *res = mysql_store_result(pconn);
			MYSQL_ROW row = mysql_fetch_row(res);
			int num = atoi(row[0]);
			if (num == 0){
				printf("欢迎管理员登陆！\n");
				while (flag) {
					printf("请输入您要执行的操作的序号：（1.添加图书 2.修改图书 3.删除图书 4.查询图书 5.退出系统）");
					scanf("%d", &tmp);
					if (tmp > 5 || tmp < 1) {
						printf("您输入的操作序号有误，请重新输入。\n");
					}
					switch (tmp) {
					case 1: {
						printf("请输入您要添加的图书信息：（书名 作者 状态）\n");
						scanf("%s", &bname);
						scanf("%s", &bauthor);
						scanf("%d", &status);

						char sql[200];
						sprintf(sql, "insert into bookinfo VALUES (null,'%s','%s','%s')", bname, bauthor, status);
						if (mysql_query(pconn, sql)) {
							printf("添加失败,错误为：%s\n", mysql_error(pconn));
						}
						else {
							printf("添加成功！\n");
						}
						break;
					}
					case 2: {
						printf("请输入您要修改的图书序号：");
						scanf("%d", &bid);
						printf("请输入您修改后的图书信息：(书名 作者 状态)\n");
						scanf("%s %s %d", &bname, &bauthor, &status);
						char sql[200];
						sprintf(sql, "UPDATE bookinfo SET bname='%s',bauthor='%s',status='%d' WHERE bid ='%d'", bname, bauthor, status, bid);
						if (mysql_query(pconn, sql)) {
							printf("修改失败!\n");
						}
						else {
							printf("修改成功！\n");
						}
						break;
					}
					case 3: {
						printf("请输入您要删除的图书序号：");
						scanf("%d", &bid);
						char sql[200];
						sprintf(sql, "delete from bookinfo where bid='%d'", bid);
						if (mysql_query(pconn, sql)) {
							printf("删除失败！\n");
						}
						else {
							printf("删除成功！\n");
						}
						break;
					}
					case 4: {
						printf("请输入您要查询的图书序号：");
						scanf("%d", &bid);
						sprintf(sql, "select* from bookinfo where bid = '%d'", bid);
						if (mysql_query(pconn, sql)) {

						}
						MYSQL_RES *res = mysql_store_result(pconn);
						MYSQL_ROW row;
						if (row = mysql_fetch_row(res)) {
							for (int i = 0; i < 4; i++)
							{
								printf("%s\t", row[i]);
							}
							printf("\n");
						}else{
							printf("查询失败，该书不存在。\n");
						}
						break;
					}
					case 5: {
						flag = 0;
						printf("系统已退出!\n");
						break;
					}
					}
				}
			}
			else{
				printf("欢迎会员登陆！\n");
				int tag = 0;
				while (tag != 4) {
					printf("请输入您要执行的操作的序号(1.借阅图书， 2.归还图书，3.查询图书，4.退出系统)：");
					scanf("%d", &tag);
					if (tag > 4 || tag < 1) {
						printf("您输入的操作序号有误，请重新输入。\n");
					}
					switch (tag) {
					case 1:
						printf("请输入借阅图书编号：");
						scanf("%d", &bid);
						char sql[200];
						status = 0;
						sprintf(sql, "select* from bookinfo where bid = '%d' and status = '%d'", bid, status);
						a = borrow(status, bid);
						switch (a) {
						case 1:
							printf("借阅失败，该书已被借阅。\n");
							break;
						case 0:
							char sql[200];
							status = 1;
							printf("借阅成功，记得归还哦！\n");
							sprintf(sql, "update bookinfo set status = '%d' where bid = '%d'",status, bid);
							mysql_query(pconn, sql);
							break;
						}
						break;
					case 2:
						printf("请输入归还图书编号：");
						scanf("%d", &bid);
						status = 1;
						sprintf(sql, "select * from bookinfo where bid = '%d' and status = '%d'", bid, status);
						a = borrow(status, bid);
						switch (a) {
						case 0:
							printf("归还失败，该书未被借阅。\n");
							break;
						case 1:
							char sql[200];
							status = 0;
							printf("归还成功，谢谢配合！\n");
							sprintf(sql, "update bookinfo set status = '%d' where bid = '%d'", status, bid);
							mysql_query(pconn, sql);
							break;
						}
						break;
					case 3:
						printf("请输入您要查询的图书序号：");
						scanf("%d", &bid);
						sprintf(sql, "select* from bookinfo where bid = '%d'", bid);
						if (mysql_query(pconn, sql)) {
							
						}
						MYSQL_RES *res = mysql_store_result(pconn);
						MYSQL_ROW row;
						if (row = mysql_fetch_row(res)) {
							for (int i = 0; i < 4; i++)
							{
								printf("%s\t", row[i]);
							}
							printf("\n");
						}
						else {
							printf("查询失败，该书不存在。\n");
						}
						break;
					}
				exit:	;
				}
				printf("系统已退出。");
			}
			flag = 0;
		}else{
		printf("用户名或密码错误。\n");
		}
	}

	system("pause");

}