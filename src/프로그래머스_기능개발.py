from collections import deque

def solution(progresses, speeds):
    answer = []
    q = deque(progresses)
    sq = deque(speeds)
    uptime = []
    count =0
    
    # 각 기능 구현에 걸리는 시간을 구한다
    while q:
        prog = q.popleft()
        speed = sq.popleft()
        count=0
        prog = 100- prog
        el = prog // speed
        if prog % speed:
            el+=1
        uptime.append(el)
            
    # 각 배포마다 배포되는 기능의 수 세기
    for i,d in enumerate(uptime):
        if i==0 or d>curr:
            curr=d
            answer.append(1)
        else:
            answer[-1]+=1
  
    return answer
