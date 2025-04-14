use itcast;

-- DML-修改数据
-- update 表名 set 字段名1 = 值1, 字段名2 = 值2, ... [where 条件];

-- 修改 id 为 1 的数据，将 name 修改为 itheima
update employee set name = 'itheima' where id = 1;

-- 修改 id 为 1 的数据，将 name 修改为 '小昭'，gender 修改为 '女'
update employee set name = '小昭', gender = '女' where id = 1;

-- 将所有员工入职日期修改为 2008-01-01
update employee set entrydate = '2008-01-01' where id > 0;

-- DML-删除数据
-- delete from 表名 [where 条件];

-- 删除 gender 为 '女' 的员工
delete from employee where gender = '女';

-- 删除所有员工
delete from employee where id > 0;