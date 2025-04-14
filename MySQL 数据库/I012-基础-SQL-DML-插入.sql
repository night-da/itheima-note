use itcast;

-- 给指定字段添加数据
-- insert into 表名 (字段名1, 字段名2, ...) values (值1, 值2, ...);
insert into employee (id, workno, name, gender, age, idcard, entrydate) values (1, '1', 'Itcast', '男', 10, '123456789012345678', '2000-01-01');

select * from employee;

-- 给全部字段添加数据
-- insert into 表名 values (值1, 值2, ...);
insert into employee values (2, '2', '张无忌', '男', 18, '123456789012345670', '2005-01-01');

-- 批量添加数据
-- insert into 表名 (字段名1, 字段名2, ...) values (值1, 值2, ...), (值1, 值2, ...), (值1, 值2, ...);
-- insert into 表名 values (值1, 值2, ...), (值1, 值2, ...), (值1, 值2, ...);
insert into employee values (3, '3', '韦一笑', '男', 38, '123456789712345670', '2005-01-01'), (4, '4', '赵敏', '女', 18, '123456759712345670', '2005-01-01');