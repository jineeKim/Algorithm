/* 댓글 가장 많이 단 순위 1~3위의 이름 (내가 작성한 게시글의 댓글도 모두 포함) 많은 순으로 정렬 */
SELECT u.name, COUNT(c.contents) AS cnt
FROM USERS u
JOIN COMMENTS c
ON u.ID = c.user_id
GROUP BY u.id
ORDER BY cnt DESC, u.name DESC
LIMIT 3;
