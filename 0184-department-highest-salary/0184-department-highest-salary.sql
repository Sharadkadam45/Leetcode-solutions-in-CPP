SELECT d.name as Department , e.name as Employee ,e.salary as Salary 
from Employee e
LEFT JOIN Department d
ON e.departmentId=d.id
where (e.departmentId,e.salary) IN
 (
    SELECT departmentId , MAX(salary) from Employee
    GROUP BY departmentId
 )
 