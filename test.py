h = 14
s = 0
first = []
second = []
arr = [1, 2, 3, 4, 5, 6, 7]
arr = arr[::-1]

for i in range(len(arr)):
    s += arr[i]
    if (s > h):
        second.append(arr[i])
        s -= arr[i]
    else:
        first.append(arr[i])

print(s)
print(first)
print(second)


