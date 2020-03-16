# -*- coding: utf-8 -*-

def score(dt):
    k = len(set([d[1] for d in dt]))
    return sum([d[0] for d in dt]) + k*k, k


if __name__ == '__main__':
    N, K = map(int, input().split())
    #t = []
    #d = []
    dt = []
    for i in range(N):
        ti, di = map(int, input().split())
        dt.append((di, ti))
        #t.append(ti)
        #d.append(di)

    dt.sort(reverse=True) # 昇順ソート

    table = [0] * N

    maximum, k_max = score(dt[:K])
    table[k_max] = maximum

    for i in range(k, N):
        x = set([d[1] for d in dt[:K-choose]]
        choose = k_max - i
        K - choose
        dt[:i]

    # 末尾からn個の別の種類の寿司を探す
    for i in range(k, N):


    print(max(table))
