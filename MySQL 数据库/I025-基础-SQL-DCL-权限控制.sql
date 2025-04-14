use mysql;

-- 查询权限
-- show grants for '用户名'@'主机名';
show grants for 'heima'@'%';

-- 授予权限
-- grant 权限列表 on 数据库名.表名 to '用户名'@'主机名';
grant all on itcast.* to 'heima'@'%';

-- 撤销权限
-- revoke 权限列表 on 数据库名.表名 from '用户名'@'主机名';
revoke all on itcast.* from 'heima'@'%';