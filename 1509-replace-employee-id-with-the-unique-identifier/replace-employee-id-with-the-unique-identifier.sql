select e.name as name , eu.unique_id as unique_id 
from employees e
left join EmployeeUNI eu 
on e.id = eu.id  
