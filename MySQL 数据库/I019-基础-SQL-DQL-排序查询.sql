use itcast;

-- select 字段列表 from 表名 order by 字段1 排序方式1, 字段2 排序方式2;

-- 1. 根据年龄对公司的员工进行升序排序
select * from emp order by age;

select * from emp order by age desc;

-- 2. 根据入职时间，对员工进行降序排序
select * from emp order by entrydate desc;

-- 3. 根据年龄对公司的员工进行升序排序，年龄相同，再按照入职时间进行降序排序
select * from emp order by age, entrydate desc;