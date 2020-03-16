# -*- coding: utf-8 -*-


def solve(h):
    if len(h) == 1:
        return h[0]
    elif len(h) == 0:
        return 0

    r = 0
    m = min(h)
    if m > 0:
        #すべての要素からmを引く
        for i in range(len(h)):
            h[i] -= m
        r += m

    # 0で区切る
    start = 0
    for i in range(len(h)):
        if i < start:
            continue
        if h[i] == 0:
            r += solve(h[start:i])
            start = i + 1
    r += solve(h[start:])
    return r


    start = 0
    r = 0
    for i in range(len(h)):
        if h[i] == 0:
            c = sorted(h[:i], reverse=True)[0]
            return c + solve(h[i:])
    else:
        sorted(h, reverse=True)[0]
    print(i)
    return r

if __name__ == '__main__':
    N = int(input())
    h = list(map(int, input().split()))

    c = solve(h)
    print(c)
