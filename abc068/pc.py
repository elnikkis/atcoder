# -*- coding: utf-8 -*-

import sys

line = input()
N, M = map(int, line.split())

from_to = {}
for i in range(M):
    line = input()
    line = line.rstrip()
    ai, bi = map(int, line.split())

    l = from_to.get(ai, list())
    l.append(bi)
    from_to[ai] = l

#print(from_to)

next_lands = from_to.get(1, list())
if not next_lands:
    print('IMPOSSIBLE')

for n in next_lands:
    goals = from_to.get(n, list())
    if N in goals:
        print('POSSIBLE')
        break
else:
    print('IMPOSSIBLE')
