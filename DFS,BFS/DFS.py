
def dfs(grpah, v, visited):
  visited[v] = True
  # something to do

  # 현재 노드와 연결된 다른 노드를 재귀적으로 방문
  for i in graph[v]:
    if not visited[i]:
      dfs(graph, i, visited)

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

dfs(graph, 1, visited)