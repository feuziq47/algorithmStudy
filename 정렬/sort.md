## 선택정렬

- 원소를 하나씩 선택하여 올바른 위치로 이동

```python
array = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]
for i in range(len(array)):
    min_index = i
    for j in range(i+1, len(array)):
        if array[min_index] > array[j]:
            min_index = j
    array[i], array[min_index] = array[min_index], array[i]

print(array)
```
- 시간복잡도  
N + (N-1) + ... + 2 -> O(N^2)  

## 삽입정렬
- 처리되지 않은 데이터를 하나씩 골라 적절한 위치로 삽입
```python
array = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]
for i in range(1, len(array)):
    for j in range(i, 0, -1):
        if array[j] < array[j-1]:
            array[j], array[j-1] = array[j-1], array[j]
        else:
            break
print(array)
```
- 시간복잡도
O(N^2) / 거의 정렬된 상태(최선의 상태)이면 O(N)  

## 퀵정렬
- 기준 데이터(pivot)를 설정하고 기준보다 큰 데이터와 작은 데이터의 위치를 바꾸는 방법
- pivot은 일반적으로 첫 번째 데이터로 설정 -> 라이브러리 상에서는 pivot을 정하는 알고리즘이 따로 존재
- 일반적으로 가장 많이 사용되는 정렬 알고리즘
```python
array = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]

def quick_sort(array, start, end):
    if start >= end:
        return
    pivot = start
    left = start+1
    right = end
    while(left <= right):
        # 피벗보다 큰 데이터를 찾을때까지 반복
        while (left <= end and array[left] <= array[pivot]):
            left+=1
        # 피벗보다 작은 데이터를 찾을때까지 반복
        while (right > start and array[right] >= array[pivot]):
            right-=1
        if(left>right):
            # 엇갈렸음녀 작은 데이터와 피벗을 교체
            array[right], array[pivot] = array[pivot], array[right]
        else:
            # 엇갈리지 않았다면 작은 데이터와 큰 데이터를 교체
            array[left], array[right] = array[right], array[left]
    
    # 분할 이후 왼쪽 부분과 오른쪽 부분에서 퀵소트를 재귀적으로 실행
    quick_sort(array, start, right-1)
    quick_sort(array, right+1, end)

quick_sort(array, 0, len(array)-1)
print(array)
```
- List comprehension 이용
```python
# 파이썬의 장점을 살린 방식
array = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]
def quick_sort(array):
    # 리스트가 하나 이하의 원소만을 담고 있다면 종료
    if len(array) <= 1:
        return array

    pivot = array[0] # 피벗은 첫 번째 원소
    tail = array[1:] # 피벗을 제외한 리스트

    left_side = [x for x in tail if x <= pivot] # 분할된 왼쪽 부분
    right_side = [x for x in tail if x > pivot] # 분할된 오른쪽 부분

    # 분할 이후 왼쪽 부분과 오른쪽 부분에서 각각 정렬을 수행하고, 전체 리스트를 반환
    return quick_sort(left_side) + [pivot] + quick_sort(right_side)

print(quick_sort(array))
```
- 시간복잡도  
평균 : O(NlogN)  
최악 : O(N^2) <- 이미 정렬된 상태일 때  