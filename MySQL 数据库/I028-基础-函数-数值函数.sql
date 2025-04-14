-- ceil(x) 向上取整
select ceil(1.1);

-- floor(x) 向下取整
select floor(1.9);

-- mod(x, y) 返回 x / y 的模
select mod(7, 4);

-- rand() 返回 0 ~ 1 内的随机数
select rand();

-- round(x, y) 求参数 x 的四舍五入的值，保留 y 位小数
select round(2.344, 2);

-- 案例：通过数据库的函数，生成一个六位数的随机验证码
select lpad(round(rand() * 1000000, 0), 6, '0');