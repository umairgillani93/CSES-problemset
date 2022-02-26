def sol():
  N = int(input())
  nums = sorted([int(x) for x in input().split()])
  cnt = 1
  if nums[0] != cnt:
    return cnt
  for i in nums:
    if cnt == i:
      cnt += 1
    else:
      return cnt

print(sol())
