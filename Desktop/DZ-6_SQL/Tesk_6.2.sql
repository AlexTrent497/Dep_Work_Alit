-- Выведите только четные числа от 1 до 10. 
-- Пример: 2,4,6,8,10 
-- аргумент фуекции верхний предел последовательности
drop FUNCTION evenNum;
DELIMITER //
CREATE FUNCTION evenNum (largestNum int)
returns varchar(100)
deterministic
BEGIN 
 declare n1 INT default largestNum;
 declare res VARCHAR (100) default 2;
 declare temp INT default 4;
 IF (n1 >= 2 ) then
  WHILE temp <= n1 do 
   set res = concat (res, ', ', temp);
   set temp = temp + 2;
  end while;
 ELSE
  set res = "нет четных чисел от 1 до вашего числа";
 end if;
return res;
END//
DELIMITER ;

select evenNum(22);