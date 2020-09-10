from collections import deque
# 낮은 번호부터 증식 -> 큐에 작은 번호부터 삽입

n, k = map(int, input().split())
graph = []
data = []

for i in range(n):
    graph.append(list(map(int, input().split())))
    for j in range(n):
        if graph[i][j] != 0:
            # 해당 위치가 0이 아니면, (바이러스 종류, 시간, x, y) 값 삽입
            data.append((graph[i][j], 0, i, j))
# 낮은 번호가 먼저 증식하므로 정렬 후 큐로 옮긴다
data.sort()
q = deque(data)

S, X, Y = map(int, input().split())

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

while q:
    virus, s, x, y = q.popleft()
    if s == S:
        break
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if 0<=nx and nx<n and 0<=ny and ny<n:
            if graph[nx][ny] == 0:
                graph[nx][ny]=virus
                q.append((virus, s+1, nx, ny))

print(graph[X-1][Y-1])