# coding=UTF-8

import sys
import math
import time


def eprint(*args, **kwargs):
	print(*args, file=sys.stderr, **kwargs)
	exit(84)


def nCr(n,r):
    if r > n:
        eprint("R must be strickly superior to N")
    f = math.factorial
    return f(n) // f(r) // f(n-r)


def binomial(val):
    start = time.time()
    x = val / 8 / 3600
    total = 0
    get = 1
    p = 3500
    print("Binomial distribution:")
    for n in range(51):
        if n == 0:
            get = pow((1 - x), p)
        else:
             get *= (p + 1 - n) / n * x / (1 - x)
        if n <= 25:
            total += get
        print("{n} -> {get:0.3f}".format(n=n, get=get), end="")
        if (n + 1) % 6 == 0:
            print()
        elif n != 50:
            print(end="\t")
    print()
    total = (1 - total) * 100
    print("overload: {:.1f}%".format(total))
    print("computation time: {:0.2f} ms".format((time.time() - start) * 1000))


def poisson(val):
    start = time.time()
    total = 0
    l = val * 3500 / 8 / 3600
    get = 1
    print("Poisson distribution:")
    for n in range(51):
        if n == 0:
            get = math.exp(-l)
        else:
            get *= l / n
        if n <= 25:
            total += get
        print("{n} -> {get:0.3f}".format(n=n, get=get), end="")
        if (n + 1) % 6 == 0:
            print()
        elif n != 50:
            print(end="\t")
    print()
    total = (1 - total) * 100
    print("overload: {:.1f}%".format(total))
    print("computation time: {:0.2f} ms".format((time.time() - start) * 1000))

