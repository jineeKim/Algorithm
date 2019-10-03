#include <stdio.h>
#include <queue>
using namespace std;
int w, h;
int a[100][100];
int d[100][100];
int dx[] = { 1,-1,0,0,1,1,-1,-1 };
int dy[] = { 0,0,1,-1,1,-1,1,-1 };
void bfs(int x, int y, int cnt) {
	queue <pair<int, int >> q;
	q.push(make_pair(x, y));
	d[x][y] = cnt;
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();

		for (int i = 0; i < 8; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (0 <= nx && nx < w && 0 <= ny && ny < h) {
				if (a[nx][ny] == 1 && d[nx][ny] == 0) {
					q.push(make_pair(nx, ny));
					d[nx][ny] = cnt;
				}
			}
			
		}
	}
}
int main() {
	while (true) {
		scanf("%d %d", &h, &w);
		if (w == 0 && h == 0)
			return 0;
		for (int i = 0; i < w; i++) {
			for (int j = 0; j < h; j++) {
				scanf("%d", &a[i][j]);
				d[i][j] = 0;
			}
		}
		int cnt = 0;
		for (int i = 0; i < w; i++) {
			for (int j = 0; j < h; j++) {
				if (a[i][j] == 1 && d[i][j] == 0) {
					bfs(i, j, ++cnt);
				}
			}
		}

		printf("%d\n", cnt);
	}

	return 0;
}