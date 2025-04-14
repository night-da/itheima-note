use itcast;

-- concat 字符串拼接
select concat('Hello', ' MySQL');

-- lower 将字符串全部转为小写
select lower('Hello');

-- upper 将字符串全部转为大写
select upper('Hello');

-- lpad(str, n, pad)
-- 左填充，用字符串 pad 对 str 的左边进行填充，达到 n 个字符串长度
select lpad('01', 5, '-');

-- rpad(str, n, pad)
-- 右填充，用字符串 pad 对 str 的右边进行填充，达到 n 个字符串长度
select rpad('01', 5, '-');

-- trim 去掉字符串头部和尾部的空格
select trim(' Hello  MySQL ');

-- substring(str, start, len)
-- start 从 1 开始
-- 返回从字符串 str 从 start 位置起的 len 个长度的字符串
select substring('Hello MySQL', 1, 5);

-- 1. 由于业务需求变更，企业员工的工号，统一为 5 位数，目前不足 5 位数的全部在前面补 0。比如：1 号员工的工号应该为 00001
update emp set workno = lpad(workno, 5, '0') where id > 0;