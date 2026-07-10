-- Write your query below
select s.seller_name from seller s where s.seller_id NOT IN (select seller_id
from orders where sale_date>= '2020-01-01' AND sale_Date<='2020-12-31')
order by s.seller_name;