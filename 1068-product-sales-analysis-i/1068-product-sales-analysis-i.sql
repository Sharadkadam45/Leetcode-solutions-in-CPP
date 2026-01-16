# Write your MySQL query statement below
SELECT p.product_name , s.year,s.price 
FROM Sales s
JOIN Product p
ON 
P.product_id=S.product_id;