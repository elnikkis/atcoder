# -*- coding: utf-8 -*-
import math

def main():
    R, X, Y = map(int, input().rstrip().split(' '))
    eps = 10**-8

    d = math.sqrt(X*X + Y*Y)
    answer = math.ceil((d / R) - eps)
    if d != R and d < R:
        answer += 1
    print(answer)


if __name__ == '__main__':
    main()
