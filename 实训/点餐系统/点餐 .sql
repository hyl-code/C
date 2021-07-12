create table menuinfo
(
mid int primary key auto_increment,
mname varchar(100) unique not null,
mprice float not null
)ENGINE=INNODB DEFAULT CHARSET =utf8;

insert into menuinfo values(null,'奇异炸冰虾',26.68)
insert into menuinfo values(null,'摩摩蛋包饭',29.60)
insert into menuinfo values(null,'牛奶鱼群汤',45.90)
insert into menuinfo values(null,'毛毛菇炒蛋',20.80)
insert into menuinfo values(null,'烧烤拉姆',12.90)
insert into menuinfo values(null,'香煎鳕鱼',32.90)
insert into menuinfo values(null,'仙桃鲜虾卷',22.90)
insert into menuinfo values(null,'茄块狗鱼片',23.70)
insert into menuinfo values(null,'月亮酸奶蛋糕',25.30)
insert into menuinfo values(null,'咕唧蛋挞',15.76)
insert into menuinfo values(null,'蛋黄肉粽',25.50)
insert into menuinfo values(null,'水煮大闸蟹',46.00)
insert into menuinfo values(null,'阳光酥油肉松',36.40)

create table userinfo
(
uid int primary key auto_increment,
uname varchar(20) unique not null,
upassword int not null,
utag int 
)ENGINE=INNODB DEFAULT CHARSET =utf8;


insert into userinfo values(null,'klaw',1277,0)
insert into userinfo values(null,'momogongzhu',1260,1)
insert into userinfo values(null,'nike',1187,1)
insert into userinfo values(null,'lock',935,1)
insert into userinfo values(null,'alex',744,1)
insert into userinfo values(null,'huashen',7729,1)
insert into userinfo values(null,'tangmi',4481,1)
insert into userinfo values(null,'qianqian',4388,1)
insert into userinfo values(null,'puti',2826,1)


create table list
(
lid int primary key auto_increment,
lname varchar(100) not null,
lprice float not null,
lnum int not null
)
