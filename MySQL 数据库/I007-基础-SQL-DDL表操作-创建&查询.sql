use itcast;

-- 查询当前数据库所有表
show tables;

-- DDL-表操作-创建
-- create table 表名(
--     字段1 字段1类型 [comment 字段1注释],
--     字段2 字段2类型 [comment 字段2注释],
--     ......
--     字段n 字段n类型 [comment 字段n注释]
-- ) [comment 表注释];
create table tb_user(
                        id     int         comment '编号',
                        name   varchar(50) comment '姓名',
                        age    int         comment '年龄',
                        gender varchar(1)  comment '性别'
) comment '用户表';

-- 查询表结构
-- desc 表名;
desc tb_user;

-- 查询指定表的建表语句
-- show create table 表名;
show create table tb_user;