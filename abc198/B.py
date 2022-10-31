# -*- coding: utf-8 -*-


def is_kaibun(s):
    if len(s) <= 1:
        return True

    if s[0] != s[-1]:
        return False

    return is_kaibun(s[1:-1])


def solve(N):
    while N % 10 == 0 and N > 0:
        N = N // 10

    if is_kaibun(str(N)):
        return 'Yes'
    else:
        return 'No'


def main():
    N = int(input())
    print(solve(N))


if __name__ == '__main__':
    main()
