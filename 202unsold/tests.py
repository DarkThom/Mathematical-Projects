#!/usr/bin/env python3
# coding=UTF-8

from core import proba_tab, proba_line

import unittest

class TestUnsold(unittest.TestCase):
	""" Tests """

	def test_full(self):
		""" First part """
		compare = [
			[0.100, 0.080, 0.060, 0.040, 0.020],
			[0.083, 0.067, 0.050, 0.033, 0.017],
			[0.067, 0.053, 0.040, 0.027, 0.013],
			[0.050, 0.040, 0.030, 0.020, 0.010],
			[0.033, 0.027, 0.020, 0.013, 0.007]]
		cmp_lin = [0.333, 0.267, 0.200, 0.133, 0.067, 1]
		cmp_col = [0.300, 0.250, 0.200, 0.150, 0.100, 1]
		full_tab, last_line, last_col = proba_tab(60, 70)
		for x, sub in enumerate(full_tab):
			self.assertEqual(round(last_line[x], 3), cmp_lin[x])
			self.assertEqual(round(last_col[x], 3), cmp_col[x])
			for y, t in enumerate(sub):
				self.assertEqual(round(t, 3), compare[x][y])
		""" Second part """
		line_tab = proba_line(full_tab)
		compare = [0.100, 0.163, 0.193, 0.193, 0.167, 0.100, 0.053, 0.023, 0.007, 1]
		for idx, val in enumerate(compare):
			idx = (idx + 1) * 10 + 10
			if idx >= 110:
				break
			cmp_val = line_tab[idx]
			self.assertEqual(round(cmp_val, 3), val)


if __name__ == "__main__":
	unittest.main()