# Write your MySQL query statement below
Select Employee.name, Bonus.bonus from  Employee 
Left Join Bonus On Employee.empid = Bonus.empid
where bonus<1000 OR bonus IS NULL