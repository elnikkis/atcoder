# -*- coding: utf-8 -*-


if __name__ == '__main__':
    s = input()
    a, b, c = map(int, s.split())
    maxvalue = max([a, b, c])

    r = 1
    for i in [a, b, c]:
        if i != maxvalue:
            r *= i
    print(r // 2)
