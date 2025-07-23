SELECT e.name as Employee 
from Employee e
JOIN Employee m
ON e.managerId =m.ID
where e.salary>m.salary;
