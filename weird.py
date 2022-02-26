def sol():
  n = int(input())
  ns = []
  while n != 1:
    ns.append(n)
    if n % 2 == 0:
      n /= 2
      ns.append(n)
      if n == 1:
        break
      else:
        if n % 2 == 0:
          n /= 2
          ns.append(n)
        else:
          n = (n * 3) + 1
    elif n % 2 != 0:
      n = (n * 3) + 1
      ns.append(n)
      if n == 1:
        break
      else:
        if n % 2 == 0:
          n /= 2
          ns.append(n)
        else:
          n = (n * 3) + 1
  ns_ = []
  for i in range(len(ns)-1):
    if ns[i] == ns[i+1]:
      continue
    else:
      ns_.append(ns[i])
  ns_.append(1)
  print(' '.join([str(int(x)) for x in ns_]))
  
sol()
