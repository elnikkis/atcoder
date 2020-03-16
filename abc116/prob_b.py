# -*- coding: utf-8 -*-

if __name__ == '__main__':
    s = int(input())

    i = 1
    n = s
    prev = set()
    while True:
        prev.add(n)
        i += 1
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
        if n in prev:
            break
    print(i)
