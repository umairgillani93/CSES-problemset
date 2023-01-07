h = 14
arr = [1, 2, 3, 4, 5, 6, 7]
s = 0
half_v = []
other_half = []
for i in range(len(arr)):
    if s != h:
        s += arr[i]
        half_v.append(arr[i])

    else:
        other_half.append(arr[i])

print(half_v)
print(other_half)
    
