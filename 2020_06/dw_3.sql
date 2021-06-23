SELECT p.id ID, p.name NAME, COUNT(c.place_name) as '예약 가능 일수'
FROM place p
LEFT JOIN c_table c
ON p.id=c.place_id
GROUP BY p.id
ORDER BY p.name;