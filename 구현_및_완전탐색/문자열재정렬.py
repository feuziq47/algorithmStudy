data = input()
result = []
value =0

for x in data:
    if x.isalpha():
        result.append(x)
    else:
        value += int(x)

result.sort()

if value != 0:
    result.append(str(value))

# join 함수를 이용하면 구분자로 나눌수 있다
print(''.join(result))