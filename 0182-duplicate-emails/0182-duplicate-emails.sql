select email AS Email
from Person
GROUP BY email 
HAVING COUNT(*)>1;
