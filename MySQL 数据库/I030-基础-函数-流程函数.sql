use itcast;

-- if(value, t, f)
-- 如果 value 为 true，则返回 t，否则返回 f
select if(true, 'Ok', 'Error');

-- ifnull(value1, value2)
-- 如果 value1 不为空，返回 value1，否则返回 value2
select ifnull('OK', 'Default');

select ifnull('', 'Default');

select ifnull(null, 'Default');

-- case when [vall] then [res1] else [default] end
-- 如果 vall 为 true，返回 res1，... 否则返回 default 默认值

-- 需求：查询 emp 表的员工姓名和工作地址 (北京 / 上海 -> 一线城市， 其他 -> 二线城市)
select name,
       (case workaddress when '北京' then '一线城市' when '上海' then '一线城市' else '二线城市' end) as '工作地址'
from emp;

-- case [expr] when [vall] then [res1] ... else [default] end
-- 如果 expr 的值等于 vall，返回 res1，... 否则返回 default 默认值

-- 案例：统计班级各个学员的成绩，展示的规则如下：
-- >= 85. 展示优秀
-- >= 60. 展示及格
-- 否则，展示不及格

create table score(
                      id int comment 'ID',
                      name varchar(20) comment '姓名',
                      math int comment '数学',
                      english int comment '英语',
                      chinese int comment '语文'
) comment '学院成绩表';

insert into score(id, name, math, english, chinese) values(1, 'Tom', 67, 88, 95), (2, 'Rose', 23, 66, 98), (3, 'Jack', 56, 98, 76);

select
    id,
    name,
    (case when math >= 85 then '优秀' when math >= 60 then '及格' else '不及格' end) '数学',
    (case when english >= 85 then '优秀' when english >= 60 then '及格' else '不及格' end) '英语',
    (case when chinese >= 85 then '优秀' when chinese >= 60 then '及格' else '不及格' end) '语文'
from score;