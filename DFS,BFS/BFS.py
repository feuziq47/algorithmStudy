from collections import deque

def bfs(graph, start, visited):
  # deque 라이브러리를 이용한 큐 구현
  queue = deque([start])
  # 현재 노드를 방문 처리
  visited[start] = True
  while queue:
    v = queue.popleft()
    # something to do
    
    # 아직 방문하지 않은 인접 원소들을 큐에 삽입
    for i in graph[v]:
      if not visited[i]:
        queue.append(i)
        visited[i] = True

# 그래프는 2차원 리스트를 표현
graph = [
  [],
  [2, 3, 8],
  [1, 4, 5],
  [3, 5],
  [3, 4],
  [7],
  [2, 6, 8],
  [1, 7]
]

visited = [False] * 9

bfs(graph, 1, visited)