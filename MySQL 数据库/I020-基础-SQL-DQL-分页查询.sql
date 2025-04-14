use itcast;

-- select 字段列表 from 表名 limit 起始索引, 查询记录数;

-- 1. 查询第 1 页员工数据，每页展示 10 条记录
select * from emp limit 0, 10;

select * from emp limit 10;

-- 2. 查询第 2 页员工数据，每页展示 10 条记录
select * from emp limit 10, 10;