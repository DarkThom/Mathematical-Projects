# coding=UTF-8
from math import sqrt, pi, pow, exp

import sys


def eprint(*args, **kwargs):
    print(*args, file=sys.stderr, ** kwargs)
    exit(84)


def iq(t, u, o):
    z = (t - u) / o
    return exp((pow(z, 2) * -1) / 2) / (o * sqrt(2 * pi))


def calc_proba(mean, derivation, maxQi):
    """
    :param mean:
    :param derivation:
    :param maxQi:
    :return:
    """
    prob = iq(0, mean, derivation) / 6
    for t in range(1, maxQi + 1):
        t2 = t - 1 / 2
        q2 = iq(t2, mean, derivation)
        q1 = iq(t, mean, derivation)
        prob += (2 * q1 + 4 * q2) / 6
    prob -= 1 / 6 * iq(maxQi, mean, derivation)
    return prob


def calc_between(mean, derivation, iq1, iq2=None):
    """

    :param mean:
    :param derivation:
    :param iq1:
    :param iq2:
    :return:
    """
    proba = calc_proba(mean, derivation, iq1)
    if iq2 is not None:
        proba = (calc_proba(mean, derivation, iq2) - proba) * 100
        print("{:0.01f}% of people have an IQ between {} and {}".format(proba, iq1, iq2))
    else:
        proba *= 100
        print("{:0.01f}% of people have an IQ inferior to {}".format(proba, iq1))
    return


def calc_data(mean, derivation):
    for t in range(0, 200):
        print("{} {:0.2f}".format(t, iq(t, mean, derivation) * 100))
    return
