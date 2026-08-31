# Write your MySQL query statement below
select s1.user_id , IFNULL(round(sum(action='confirmed')/count(*),2),0) as confirmation_rate
from signups as s1
left join Confirmations  c
on s1.user_id = c.user_id
group by s1.user_id 