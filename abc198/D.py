# -*- coding: utf-8 -*-

'''
TLEする
'''

import itertools


def check(d, s1, s2, s3):
    # n1 = int(''.join([str(d[c]) for c in s1]))
    # n2 = int(''.join([str(d[c]) for c in s2]))
    # n3 = int(''.join([str(d[c]) for c in s3]))

    l1 = len(s1)
    n1 = sum(d[c]*10**(l1-i-1) for i, c in enumerate(s1))
    l2 = len(s2)
    n2 = sum(d[c]*10**(l2-i-1) for i, c in enumerate(s2))
    l3 = len(s3)
    n3 = sum(d[c]*10**(l3-i-1) for i, c in enumerate(s3))

    # print(n1, s1, n2, s2, n3, s3)
    if 10**(len(s1)-1) > n1 or 10**(len(s2)-1) > n2 or 10**(len(s3)-1) > n3:
        # print('no')
        return None

    if n1 + n2 == n3:
        return (n1, n2, n3)
    else:
        return None


def main():
    s1 = input()
    s2 = input()
    s3 = input()

    alphabet = set(itertools.chain(s1, s2, s3))
    if len(alphabet) > 10:
        print('UNSOLVABLE')
        return

    # 検証すべき解空間
    space = itertools.permutations(range(10), len(alphabet))

    for answer in space:
        if len(set(answer)) != len(answer):
            continue
        d = dict(zip(alphabet, answer))
        result = check(d, s1, s2, s3)
        # print(d)
        if result:
            for s in result:
                print(s)
            break
        pass
    else:
        print('UNSOLVABLE')


if __name__ == '__main__':
    main()
