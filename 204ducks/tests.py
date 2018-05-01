#!/usr/bin/env python3
# coding=UTF-8

import unittest
import core

class TestDucksMethods(unittest.TestCase):


    def test_time_001(self):
        res50, res99 = core.func_time(1.6)
        self.assertAlmostEqual(res50, 64.08)
        self.assertAlmostEqual(res99, 304.44)


    def test_time_002(self):
        res50, res99 = core.func_time(0.2)
        self.assertAlmostEqual(res50, 39.06)
        self.assertAlmostEqual(res99, 196.44)


    def test_percent_001(self):
        m1, m2 = core.func_percent(1.6)
        self.assertAlmostEqual(int(round(m1)), 47)
        self.assertAlmostEqual(int(round(m2)), 79)


    def test_percent_002(self):
        m1, m2 = core.func_percent(0.2)
        self.assertAlmostEqual(int(round(m1)), 71)
        self.assertAlmostEqual(int(round(m2)), 94)


    def test_mean_001(self):
        mean, var = core.func_mean_var(0.2)
        self.assertAlmostEqual(int(round(mean)), 49)
        self.assertAlmostEqual(int(round(var)), 1)


    def test_mean_002(self):
        mean, var = core.func_mean_var(1.6)
        self.assertAlmostEqual(int(round(mean)), 81)
        self.assertAlmostEqual(int(round(var)), 1)


if __name__ == '__main__':
    unittest.main()
