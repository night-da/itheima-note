use itcast;

-- curdate() 返回当前日期
select curdate();

-- curtime() 返回当前时间
select curtime();

-- now() 返回当前日期和时间
select now();

-- year(date) 获取指定 date 的年份
select year(now());

-- month(date) 获取指定 date 的月份
select month(now());

-- day(date) 获取指定 date 的日期
select day(now());

-- date_add(date, interval exprtype) 返回一个日期 / 时间值加上一个时间间隔 expr 后的时间值
select date_add(now(), interval 70 year);

-- datediff(date1, date2) 返回起始时间 date1 和结束时间 date2 之间的天数
select datediff('2021-10-01', '2021-12-01');

-- 案例：查询所有员工的入职天数，并根据入职天数倒序排序
select name, datediff(curdate(), entrydate) as 'entrydays' from emp order by entrydays desc;