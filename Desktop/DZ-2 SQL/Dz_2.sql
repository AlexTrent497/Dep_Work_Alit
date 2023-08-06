CREATE TABLE sales (
	id INT NOT NULL AUTO_INCREMENT PRIMARY KEY, 
	order_date DATE NOT NULL,
	order_cnt INT NOT NULL);

INSERT sales(order_date, order_cnt) 
VALUES 	("2021-01-01", 150), 
		("2021-01-02", 250), 
		("2021-01-03", 25), 
		("2021-01-04", 450), 
		("2021-01-05", 60);
				
SELECT * FROM sales;

SELECT id, order_date,
CASE 
	WHEN order_cnt < 100 THEN 'Маленький заказ'
	WHEN order_cnt >= 100 AND order_cnt <= 300 THEN 'Средний заказ'
	ELSE 'Большой заказ'
END AS bucket
FROM sales;



CREATE TABLE orders (
	orderid INT NOT NULL AUTO_INCREMENT PRIMARY KEY, 
	employeeid VARCHAR(3) NOT NULL,
	amount FLOAT(8,2) NOT NULL,
	orderstatus VARCHAR(20) NOT NULL);

INSERT orders(employeeid, amount, orderstatus) 
VALUES 	("e03", 15.00, 'OPEN'),
		("e01", 25.50, 'OPEN'),
		("e05", 100.70, 'CLOSED'),
		("e02", 22.18, 'OPEN'),
		("e04", 9.50, 'CANCELLED'),
		("e04", 99.99, 'OPEN');

SELECT * FROM orders;				