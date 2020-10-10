## reduce
- 리스트를 순회하며 특정 처리를 해줄 때 사용된다.
- 함수형 프로그래밍  

`reduce(func, iterable_data[, init_data])`
```python
def reduce(function, iterable, initializer=None):
  it = iter(iterable)
  if initializer is None:
    value = next(it)
  else:
    value = initializer
  for element in it:
    value = function(value, element)
  return value
```


- 사용 예
```python
# reduce 함수를 사용하려면 functools 내장 모듈을 import 해야함
from functools import reduce
# reduce를 사용할 때, 집계 함수는 lambda 함수를 많이 사용한다.
users = [
  {'mail': 'gregorythomas@gmail.com', 'name': 'Brett Holland', 'sex': 'M', 'age': 73},
  {'mail': 'hintoncynthia@hotmail.com', 'name': 'Madison Martinez', 'sex': 'F', 'age': 29},
  {'mail': 'wwagner@gmail.com', 'name': 'Michael Jenkins', 'sex': 'M', 'age': 51},
  {'mail': 'daniel79@gmail.com', 'name': 'Karen Rodriguez', 'sex': 'F', 'age': 32},
  {'mail': 'ujackson@gmail.com', 'name': 'Amber Rhodes', 'sex': 'F', 'age': 42}
]
print(reduce(lambda acc, cur: acc + cur['age'], users, 0))
# 227
```
