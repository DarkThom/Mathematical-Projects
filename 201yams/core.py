# coding=UTF-8

import math
import sys

ctab = [
	[1],
	[1, 1],
	[1, 2, 1],
	[1, 3, 3, 1],
	[1, 4, 6, 4, 1],
	[1, 5, 10, 10, 5, 1]
]

def eprint(*args, **kwargs):
	print(*args, file=sys.stderr, **kwargs)


def get_n_and_p(dices, asked, tabs=False):
	""" Function to get n (number of dices missing)
	and p (number of relance) """
	p = 0
	for value in dices:
		if value in asked.keys() and asked[value] > 0:
			asked[value] -= 1
		else:
			p += 1
	if not tabs:
		n = sum(asked.values())
	else:
		n = asked
	return n, p


def func_yams(args, dices):
	""" """
	if len(args) != 2:
		return None, "Bad action parameter. Should be yams_$A"
	asked = {args[1]: 5}
	n, p = get_n_and_p(dices, asked)
	proba = pow(1.0 / 6.0, n)
	return proba, "{} yams".format(args[1])


def func_four(args, dices):
	if len(args) != 2:
		return None, "Bad action parameter. Should be four_$A"
	asked = {args[1]: 4}
	n, p = get_n_and_p(dices, asked)
	proba = 0.0
	for j in range(n, p + 1):
		proba += ctab[p][j] * pow(1.0 / 6.0, j) * pow((1.0 - 1.0 / 6.0), (p - j))
	return proba, "{} four-of-a-kind".format(args[1])


def func_three(args, dices):
	if len(args) != 2:
		return None, "Bad action parameter. Should be three_$A"
	asked = {args[1]: 3}
	n, p = get_n_and_p(dices, asked)
	proba = 0.0
	for j in range(n, p + 1):
		proba += ctab[p][j] * pow(1.0 / 6.0, j) * pow((1.0 - 1.0 / 6.0), (p - j))
	return proba, "{} three-of-a-kind".format(args[1])


def func_pair(args, dices):
	if len(args) != 2:
		return None, "Bad action parameter. Should be double_$A"
	asked = {args[1]: 2}
	n, p = get_n_and_p(dices, asked)
	proba = 0.0
	for j in range(n, p + 1):
		proba += ctab[p][j] * pow(1.0 / 6.0, j) * pow((1.0 - 1.0 / 6.0), (p - j))
	return proba, "{} pair".format(args[1])


def func_full(args, dices):
	if len(args) != 3 or int(args[1]) == int(args[2]):
		return None, "Bad action parameter. Should be full_$A_$B with A different to B"
	asked = {args[1]: 3, args[2]: 2}
	n, p = get_n_and_p(dices, asked, True)
	n = n[args[1]]
	proba = ctab[p][n] * pow(1.0 / 6.0, p)
	return proba, "{} full of {}".format(args[1], args[2])


def func_straight(args, dices):
	if len(args) != 2 or (int(args[1]) != 6 and int(args[1]) != 5):
		return None, "Bad action parameter. Should be straight_$A"
	asked = {args[1]: 1, args[1] - 1: 1,
	args[1] - 2: 1, args[1] - 3: 1, args[1] - 4: 1}
	n, p = get_n_and_p(dices, asked)
	proba = math.factorial(n) * pow(1.0 / 6.0, n)
	return proba, "{} straight".format(args[1])
