def sol():
    v = [
        [1,2,9,10,25],
        [4,3,8,11,24],
        [5,6,7,12,23],
        [16,15,14,13,22],
        [17,18,19,20,21]
        ]

    t = int(input())
    for _ in range(t):
        y, x = list(map(int, input()))
        print(y, x)

if __name__ == '__main__':
    print(sol())


