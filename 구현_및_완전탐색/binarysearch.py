def binary_search(array, target, start, end):
    while start <= end:
        mid = (start + end) // 2
        # 목표를 찾았을 때
        if array[mid]==target:
            return mid
        # 목표가 중간 값보다 작을 떄, 왼쪽을 찾음
        elif array[mid]>target:
            end = mid - 1
        # 목표가 중간 값보다 클 때, 오른쪽을 찾음
        else:
            start = mid +1
    return None

target = 13
array = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19]

result = binary_search(array, target, 0 , len(array)-1)

if result == None:
    print(None)
else:
    print(result+1)
