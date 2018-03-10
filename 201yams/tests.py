#!/usr/bin/env python3
# coding=UTF-8

import unittest
import core

class TestYamsMethods(unittest.TestCase):


    def test_yams_001(self):
        dices = [0, 0, 0, 0, 0]
        args = ["yams", 4]
        proba = core.func_yams(args, dices)[0]
        proba = round(proba * 100, 2)
        self.assertAlmostEqual(proba, 0.01)


    def test_four_001(self):
        dices = [1, 2, 3, 4, 5]
        args = ["four", 4]
        proba = core.func_four(args, dices)[0]
        proba = round(proba * 100, 2)
        self.assertAlmostEqual(proba, 1.62)


    def test_pair_001(self):
        dices = [2, 2, 1, 1, 3]
        args = ["pair", 2]
        proba = core.func_pair(args, dices)[0]
        proba = round(proba * 100, 2)
        self.assertAlmostEqual(proba, 100.00)


    def test_three_001(self):
        dices = [1, 3, 3, 2, 5]
        args = ["three", 3]
        proba = core.func_three(args, dices)[0]
        proba = round(proba * 100, 2)
        self.assertAlmostEqual(proba, 42.13)


    def test_full_001(self):
        dices = [2, 3, 2, 3, 2]
        args = ["full", 2, 3]
        proba = core.func_full(args, dices)[0]
        proba = round(proba * 100, 2)
        self.assertAlmostEqual(proba, 100.00)


    def test_full_002(self):
        dices = [0, 0, 0, 0, 0]
        args = ["full", 2, 3]
        proba = core.func_full(args, dices)[0]
        proba = round(proba * 100, 2)
        self.assertAlmostEqual(proba, 0.13)

    def test_straight_001(self):
        dices = [2, 2, 3, 4, 5]
        args = ["straight", 5]
        proba = core.func_straight(args, dices)[0]
        proba = round(proba * 100, 2)
        self.assertAlmostEqual(proba, 16.67)


    def test_straight_002(self):
        dices = [2, 2, 5, 4, 6]
        args = ["straight", 6]
        proba = core.func_straight(args, dices)[0]
        proba = round(proba * 100, 2)
        self.assertAlmostEqual(proba, 16.67)


if __name__ == '__main__':
    unittest.main()
