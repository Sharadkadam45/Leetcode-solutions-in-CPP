SELECT MAX(salary) AS SecondHighestSalary 
from Employee
where salary!=(SELECT MAX(salary) from Employee);