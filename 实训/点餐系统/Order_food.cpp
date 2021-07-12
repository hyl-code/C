#include<stdio.h>
#include<string.h>
#include<winsock.h>
#include<mysql.h>

void insert(int num[50], int mid) {
	char sql[200];
	MYSQL *pconn = mysql_init(0);

	mysql_real_connect(pconn, "localhost", "root", "h17399983373.", "menu", 0, 0, 0);

	if (mysql_query(pconn, "set names gbk"))
	{
		printf("编码错误,错误为%s\n", mysql_error(pconn));
	}

	sprintf(sql, "select * from menuinfo where mid = '%d'", mid);
	mysql_query(pconn, sql);
	MYSQL_RES *res = mysql_store_result(pconn);
	MYSQL_ROW row = mysql_fetch_row(res);
	if (num[mid] < 1) {
		num[mid]++;
		sprintf(sql, "insert into list VALUES (null,'%s','%s', '%d')", row[1], row[2], num[mid]);
	}
	else {
		num[mid]++;
		sprintf(sql, "update list set lnum = '%d' where lname = '%s'", num[mid], row[1]);
	}
	if (mysql_query(pconn, sql)) {
		printf("出错啦！\n");
		num[mid]--;
	}
	else {
		printf("添加成功！\n");
	}
}

int main(void) {
	int flag = 1;
	char uname[20];
	char upassword[20];
	int mid;
	char mname[30];
	float mprice;
	int lid;
	char lname[30];
	float lprice;
	int lnum;
	int num[50] = { 0 };
	int income;

	MYSQL *pconn = mysql_init(0);


	mysql_real_connect(pconn, "localhost", "root", "h17399983373.", "menu", 0, 0, 0);

	if (mysql_query(pconn, "set names gbk"))
	{
		printf("编码有错误为：%s\n", mysql_error(pconn));
	}

	printf("欢迎光临摩尔餐厅！\n本店菜单如下：\n");
	if (mysql_query(pconn, "select * from menuinfo")) {
		printf("出错了！");
	}
	printf("编号\t\t菜名\t\t\t价格\n");
	MYSQL_RES *res = mysql_store_result(pconn);
	MYSQL_ROW row;
	while (row = mysql_fetch_row(res))
	{
		for (int i = 0; i < 3; i++)
		{
			printf("%s\t\t", row[i]);
		}
		printf("\n");
	}

	while (flag) {
		printf("请输入用户名：");
		scanf("%s", &uname);
		printf("请输入密码:");
		scanf("%s", &upassword);
		char sql[200];
		sprintf(sql, "select uname,upassword from userinfo where uname = '%s' and upassword = '%s'", uname, upassword);
		mysql_query(pconn, sql);
		MYSQL_RES *res = mysql_store_result(pconn);
		MYSQL_ROW row;
		if (row = mysql_fetch_row(res)) {
			printf("登录成功！\n");
			sprintf(sql, "select utag from userinfo where uname = '%s' and upassword = '%s'", uname, upassword);
			mysql_query(pconn, sql);
			MYSQL_RES *res = mysql_store_result(pconn);
			MYSQL_ROW row = mysql_fetch_row(res);
			int num = atoi(row[0]);
			if (num == 0) {
				printf("欢迎店主登陆！\n");
				int tmp = 0;
				while (tmp != 5) {
					printf("请输入您要执行的操作序号：（1.增加菜品 2.删除菜品 3.修改菜品 4.查询菜品 5.退出系统）");
					scanf("%d", &tmp);
					if (tmp > 5 || tmp < 1) {
						printf("您输入的操作序号有误，请重新输入。\n");
					}
					switch (tmp) {
					case 1: {
						printf("请输入您要添加的菜品信息：（菜名 价格）\n");
						scanf("%s", &mname);
						scanf("%f", &mprice);

						char sql[200];
						sprintf(sql, "insert into menuinfo VALUES (null,'%s','%f')", mname, mprice);
						if (mysql_query(pconn, sql)) {
							printf("添加失败,错误为：%s\n", mysql_error(pconn));
						}
						else {
							printf("添加成功！\n");
						}
						break;
					}
					case 2: {
						printf("请输入您要删除的菜品序号：");
						scanf("%d", &mid);
						char sql[200];
						sprintf(sql, "delete from menuinfo where mid = '%d'", mid);
						if (mysql_query(pconn, sql)) {
							printf("删除失败！\n");
						}
						else {
							printf("删除成功！\n");
						}
						break;
					}
					case 3: {
						printf("请输入您要修改的菜品序号：");
						scanf("%d", &mid);
						printf("请输入您修改后的菜品信息：(菜名 价格)\n");
						scanf("%s %f", &mname, &mprice);
						char sql[200];
						sprintf(sql, "UPDATE menuinfo SET mname='%s',mprice='%f' WHERE mid ='%d'", mname, mprice, mid);
						if (mysql_query(pconn, sql)) {
							printf("修改失败!\n");
						}
						else {
							printf("修改成功！\n");
						}
						break;
					}
					case 4: {
						printf("请输入您要查询的菜品序号：");
						scanf("%d", &mid);
						printf("编号\t\t菜名\t\t价格\n");
						sprintf(sql, "select * from menuinfo where mid = '%d'", mid);
						if (mysql_query(pconn, sql)) {

						}
						MYSQL_RES *res = mysql_store_result(pconn);
						MYSQL_ROW row;
						if (row = mysql_fetch_row(res)) {
							for (int i = 0; i < 4; i++)
							{
								printf("%s\t\t", row[i]);
							}
							printf("\n");
						}
						else {
							printf("查询失败，该菜品不存在。\n");
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
			else {
				printf("欢迎客户登录！\n");
				int tag = 0;
				int num[50] = { 0 };
				float sum = 0;
				mysql_query(pconn, "truncate table list");
				while (tag != 4) {
					printf("请输入您要执行的操作的序号(1.点菜 2.取消点菜 3.查看账单  4.退出点餐)：");
					scanf("%d", &tag);
					if (tag > 4 || tag < 1) {
						printf("您输入的操作序号有误，请重新输入。\n");
					}
					switch (tag) {
					case 1:
						printf("请输入需要点的菜的序号：");
						scanf("%d", &mid);
						insert(num, mid);
						break;
					case 2:
						printf("请输入要取消的菜的序号：");
						scanf("%d", &lid);
						if (num[mid] == 1) {
							sprintf(sql, "delete from list where lid='%d'", lid);
							if (mysql_query(pconn, sql)) {
								printf("出错了！\n");
							}
							else {
								printf("删除成功,请继续点餐！\n");
							}
						}
						else if (num[mid] > 1) {
							num[mid]--;
							sprintf(sql, "update list set lnum = '%d' where lid = '%d'", num[mid], lid);
							mysql_query(pconn, sql);
							printf("删除成功,请继续点餐！\n");
						}
						else {
							printf("您没有点过该菜哦！\n");
						}
						break;
					case 3:
						if (mysql_query(pconn, "select * from list")) {
							printf("出错了！");
						}
						MYSQL_RES *res = mysql_store_result(pconn);
						MYSQL_ROW row;
						sum = 0;
						printf("您的账单如下：\n");
						printf("编号\t\t菜名\t\t\t价格\t\t数量\n");
						while (row = mysql_fetch_row(res))
						{
							for (int i = 0; i < 4; i++)
							{
								printf("%s\t\t", row[i]);
							}
							sum += atof(row[2]) * atoi(row[3]);
							printf("\n");
						}
						printf("\t\t\t\t\t\t\t\t总计为：%.2f\n", sum);
						break;
					}
				}
				printf("一共消费%.2f元，欢迎下次光临！\n", sum);
			}
			flag = 0;
		}
		else {
			printf("用户名或密码错误。\n");
		}
	}
	system("pause");
}