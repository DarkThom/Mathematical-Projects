# coding=UTF-8
from math import exp, sqrt

import sys

h = 0.001


def eprint(*args, **kwargs):
    print(*args, file=sys.stderr, ** kwargs)
    exit(84)


def f(t, ducks):
    """
    Function
    :param t:
    :param ducks:
    :return:
    """
    a = ducks
    return a * exp(-t) + (4 - 3 * a) * exp(-2 * t) + (2 * a - 4) * exp(-4 * t)


def func_mean_var(ducks):
    """
    Question 1
    :param ducks:
    :return:
    """
    mean = 0.0
    var = 0.0
    for i in range(1, 100000):
        t = i * h
        res = h * t * f(t, ducks)
        t2 = t + h / 2
        res2 = h * t2 * f(t2, ducks)
        mean += 2 * res + 4 * res2
        var += 2 * res * t + 4 * res2 * t2
    mean = mean / 6
    var = var / 6 - pow(mean, 2)
    mean *= 60
    var = sqrt(var)
    return mean, var


def func_time(ducks):
    """
    Calculate times
    :param ducks:
    :return:
    """
    res = 0
    i = 1
    res50 = None
    while True:
        t = i * h
        res += h * f(t, ducks)
        if res > 0.50 and res50 is None:
            res50 = t * 60
        if res > 0.99:
            res99 = t * 60
            break
        i += 1
    return res50, res99


def func_percent(ducks):
    """
    Calculate percentage
    :param ducks:
    :return:
    """
    res = 0
    i = 1
    m1 = None
    while True:
        t = i * h
        res += h * f(t, ducks)
        if i >= 1 / h and m1 is None:
            m1 = res * 100
        if i >= 2 / h:
            m2 = res * 100
            break
        i += 1
    return m1, m2


def display_time(seconds):
    """
    Display seconds
    :param seconds:
    :return:
    """
    seconds = int(round(seconds))
    minutes = seconds // 60
    seconds -= 60 * minutes
    print("{}m {:02d}s".format(minutes, seconds))


def display(**kw):
    """
    Display results
    :param kw:
    :return:
    """
    print("average return time: ", end="")
    display_time(kw["mean"] + 0.01)
    print("standard deviation: {:0.03f}".format(kw["var"]))
    print("time after which 50% of the ducks come back: ", end="")
    display_time(kw["t50"])
    print("time after which 99% of the ducks come back: ", end="")
    display_time(kw["t99"])
    print("percentage of ducks back after 1 minute: {:0.01f}%".format(kw["m1"] - 0.05))
    print("percentage of ducks back after 2 minutes: {:0.01f}%".format(kw["m2"] - 0.01))


def calculate(ducks):
    """
    Compute with duck constant
    :param ducks:
    :return:
    """
    mean, var = func_mean_var(ducks)
    t50, t99 = func_time(ducks)
    m1, m2 = func_percent(ducks)
    display(var=var, mean=mean, t50=t50, t99=t99, m1=m1, m2=m2)
    return 0
