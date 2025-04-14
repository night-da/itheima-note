use itcast;

-- select 字段列表 from 表名 [where 条件] group by 分组字段名 [having 分组后过滤条件];

-- 1. 根据性别分组，统计男性员工和女性员工的数量
select gender, count(*) from emp group by gender;

-- 2. 根据性别分组，统计男性员工和女性员工的平均年龄
select gender, avg(age) from emp group by gender;

-- 3. 查询年龄小于 45 的员工，并根据工作地址分组，获取员工大于等于 3 的工作地址
select workaddress, count(*) address_count from emp where age < 45 group by workaddress having count(*) >= 3;