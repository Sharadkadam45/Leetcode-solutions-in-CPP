SELECT c.name as Customers
from Customers c
LEFT JOIN Orders o
ON o.customerId =c.id
where o.customerId IS NULL;