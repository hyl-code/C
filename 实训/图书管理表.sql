create  table users
(
  uid int primary key auto_increment not null,
	uname varchar (20) unique not null,
	upassword int not null,
	uidentity int not null 
) ;

INSERT INTO `users` VALUES (1, 'tom', 123, 0);
INSERT INTO `users` VALUES (2, 'wang', 1234, 1);
INSERT INTO `users` VALUES (3, 'jerry', 3457, 1);
INSERT INTO `users` VALUES (4, 'windy', 4568, 1);
INSERT INTO `users` VALUES (5, 'jim', 3415, 1);
INSERT INTO `users` VALUES (6, 'wugi', 6625, 1);
INSERT INTO `users` VALUES (7, 'minnie', 3419, 1);
INSERT INTO `users` VALUES (8, 'marry', 7777, 1);
INSERT INTO `users` VALUES (9, 'alice', 0, 1);
INSERT INTO `users` VALUES (10, 'jark', 8888, 1);
INSERT INTO `users` VALUES (11, 'kop', 5667, 1);

create table bookinfo
(
 bid int primary key auto_increment not null,
 bname varchar(20) unique not null,
 bauthor varchar(20) ,
 status int default 0 
 )engine=innodb default charset=utf8;
 select *from bookinfo

INSERT INTO `bookinfo` VALUES (1, '西游记', '吴承恩', 1);
INSERT INTO `bookinfo` VALUES (2, '红楼梦', '曹雪芹', 0);
INSERT INTO `bookinfo` VALUES (3, '三国志', '罗贯中', 0);
INSERT INTO `bookinfo` VALUES (4, '水浒传', '施耐庵', 0);
INSERT INTO `bookinfo` VALUES (5, '西游', '唐僧', 0);