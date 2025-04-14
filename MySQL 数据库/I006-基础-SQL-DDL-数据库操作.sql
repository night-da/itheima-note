-- 查询所有数据库
show databases;

-- 创建
-- create database [if not exists] 数据库名 [default charset 字符集] [collate 排序规则];
create database itcast;

create database if not exists itcast;

create database if not exists test;

create database itheima default charset utf8mb4;

-- 删除
-- drop database [if exists] 数据库名;
drop database test;

drop database if exists test;

-- 使用
-- use 数据库名;
use itcast;

-- 查询当前数据库
select database();