-- Создайте функцию, которая принимает кол-во сек и формат их в кол-во дней часов. 
-- Пример: 123456 ->'1 days 10 hours 17 minutes 36 seconds '

drop function timeConv;
DELIMITER //
CREATE FUNCTION timeConv (tim int)
returns varchar(100)
deterministic
BEGIN 
declare sec1 INT default tim;
declare res varchar (100);
declare temp int;
if tim > 86400 then
set temp = FLOOR(tim/86400);
set res = concat(temp,  'days ');
set tim = tim - 86400*temp;
set temp = FLOOR(tim/3600);
set res = concat (res, temp,'hours ');
set tim = tim-temp*3600;
set temp = FLOOR(tim/60);
set res = concat(res, temp, 'minutes ');
set tim = tim-temp*60;
set res = concat(res, tim, 'sec');
return res;

else
set res = 'число секунд не должно быть менее 86400';
end if;
 return res;
END//
DELIMITER ;

select timeConv(123456);