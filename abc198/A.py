# -*- coding: utf-8 -*-


def solve(N):
    if N <= 1:
        return 0
    return N - 1


def main():
    N = int(input())
    print(solve(N))


if __name__ == '__main__':
    main()
