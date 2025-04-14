use itcast;

-- 1. 查询年龄为 20, 21, 22, 23 岁的女性员工信息
select * from emp where gender = '女' and age in(20, 21, 22, 23);

-- 2. 查询性别为 '男'，并且年龄在 20-40 岁 (含) 以内的姓名为三个字的员工
select * from emp where gender = '男' and (age between 20 and 40) and name like '___';

-- 3. 统计员工表中，年龄小于 60 岁的，男性员工和女性员工的人数
select gender, count(*) from emp where age < 60 group by gender;

-- 4. 查询所有年龄小于等于 35 岁员工的姓名和年龄，并对查询结果按年龄升序排序，如果年龄相同按入职时间降序排序
select name, age from emp where age <= 35 order by age, entrydate desc;

-- 5. 查询性别为 '男'，且年龄在 20-40 岁 (含) 以内的前 5 个员工信息，对查询的结果按年龄升序排序，如果年龄相同按入职时间升序排序
select * from emp where gender = '男' and (age between 20 and 40) order by age, entrydate limit 5;