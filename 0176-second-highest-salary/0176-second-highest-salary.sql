# Write your MySQL query statement below
select (
    select salary
    from (
        select salary, dense_rank() over (order by salary desc) salRank 
        from Employee
    ) as rankedEmployee
    where salRank = 2
    limit 1
) as SecondHighestSalary;
