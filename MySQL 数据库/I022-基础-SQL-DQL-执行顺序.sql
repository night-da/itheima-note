use itcast;

-- 编写顺序：select, from, where, group by, having, order by, limit
-- 执行顺序：from, where, group by, having, select, order by, limit

-- 查询年龄大于 15 的员工姓名，年龄，并根据年龄进行升序排序
select name, age from emp where age > 15 order by age;