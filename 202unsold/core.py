# coding=UTF-8

import sys

def eprint(*args, **kwargs):
	print(*args, file=sys.stderr, **kwargs)


def display_line(line_tab):
	"""
	Print the second tab
	"""
	for Z in range(20, 110, 10):
		print("{0:0.03f}\t".format(line_tab[Z]), end="")
	sum_val = sum(line_tab.values())
	print("{0:1.0f}".format(sum_val))
	print("-" * 60)
	return 0


def proba_line(full_tab):
	"""
	Fill the second tab
	"""
	print("-" * 60)
	print("z\t20\t30\t40\t50\t60\t70\t80\t90\t100\ttotal\np(Z=z)\t", end="")
	p = 0.0
	line_tab = {}
	for Z in range(20, 110, 10):
		X = 10
		p = 0.0
		while X < Z and X <= 50:
			Y = Z - X
			if Y <= 50:
				p = p + full_tab[int(Y / 10) - 1][int(X / 10) - 1]
			X += 10
		line_tab.update({Z: p})
	display_line(line_tab)
	return line_tab


def print_last_line(tab, last_col):
	"""
	Print the last line of the tab
	"""
	print("X law", end="\t")
	last_line = []
	for x in range(5):
		sum_val = 0.0
		for y in range(5):
			sum_val += tab[y][x]
		last_line.append(sum_val)
		print("{0:0.03f}".format(sum_val), end="\t")
	sum_val = sum(last_col)
	print("{0:1.0f}".format(sum_val))
	last_col.append(sum_val)
	last_line.append(sum_val)
	return last_line, last_col


def proba_tab(a, b):
	"""
	Print the first tab using 'a' and 'b'
	"""
	print("-" * 60)
	full_tab = []
	for y in range(10, 60, 10):
		tab = []
		for x in range(10, 60, 10):
			value = float((a - x) * (b - y))
			div = float((5 * a - 150) * (5 * b - 150))
			if div == 0.0:
				value = 0.0
			else:
				value /= div
			tab.append(value)
		full_tab.append(tab)
	print("\tX=10\tX=20\tX=30\tX=40\tX=50\tY law")
	last_col = []
	for indexe, tab in enumerate(full_tab):
		y = (indexe + 1) * 10
		print("Y=" + str(y) + "\t", end="")
		[print("{0:0.03f}".format(v), end="\t") for v in tab]
		sum_tab = sum(tab)
		print("{0:0.03f}".format(sum_tab))
		last_col.append(sum_tab)
	last_line, last_col = print_last_line(full_tab, last_col)
	return full_tab, last_line, last_col


def esperanceX(last_line):
	eX = 0.0
	index = 10.0
	for i in range(5):
		eX = eX + (last_line[i] * index)
		index += 10.0
	return eX


def esperanceY(last_col):
	eY = 0.0
	index = 10.0
	for i in range(5):
		eY = eY + (last_col[i] * index)
		index += 10.0
	return eY


def esperanceZ(second_tab):
	eZ = 0.0
	for i in range(20, 110, 10):
		eZ = eZ + (second_tab[i] * i)
	return eZ


def varianceX(last_line, eX):
	print("expected value of X:\t{0:0.01f}".format(eX))
	vX = 0.0
	index = 10.0
	for i in range(5):
		vX = vX + (last_line[i] * pow(index, 2))
		index += 10.0
	vX = vX - pow(eX, 2)
	print("variance of X:\t\t{0:0.01f}".format(vX))
	return 0


def varianceY(last_col, eY):
	print("expected value of Y:\t{0:0.01f}".format(eY))
	vY = 0.0
	index = 10.0
	for i in range(5):
		vY = vY + (last_col[i] * pow(index, 2))
		index += 10.0
	vY = vY - pow(eY, 2)
	print("variance of Y:\t\t{0:0.01f}".format(vY))
	return 0


def varianceZ(second_tab, eZ):
	print("expected value of Z:\t{0:0.01f}".format(eZ))
	vZ = 0.0
	index = 10.0
	for i in range(20, 110, 10):
		vZ = vZ + (second_tab[i] * pow(i, 2))
		index += 10.0
	vZ = vZ - pow(eZ, 2)
	print("variance of Z:\t\t{0:0.01f}".format(vZ))
	return 0
