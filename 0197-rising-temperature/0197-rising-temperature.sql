# Write your MySQL query statement below
SELECT W1.id 
FROM Weather W1
JOIN 
Weather w2
ON DATEDIFF(W1.recordDate ,W2.recordDate )=1
where W1.temperature > W2.temperature ;