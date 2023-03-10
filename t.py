import os
import sys

def fact(n):
    fact = 1
    for i in range(1, n + 1):
        fact *= i

    return fact

assert fact(4) == 24
def sol():
    n = int(input())
    fact_ = fact(n)

    fact_str = str(fact_)
    cnt = 0 

    for item in fact_str[::-1]:
        if item == '0':
            cnt += 1
        else:
            break

    return cnt 


if __name__ == '__main__':
    print(sol())
