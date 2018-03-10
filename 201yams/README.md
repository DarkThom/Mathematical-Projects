201yams
=========

./201yams d1 d2 d3 d4 d5 c
---------------------------

| Parameters | Description                               |
| ---------: | ----------------------------------------- |
| **d1**     | value of the first die (0 if not thrown)  |
| **d2**     | value of the second die (0 if not thrown) |
| **d3**     | value of the third die (0 if not thrown)  |
| **d4**     | value of the fourth die (0 if not thrown) |
| **d5**     | value of the fifth die (0 if not thrown)  |
| **c**      | expected combination                      |

Every Sunday is dedicated to Yams (also named Yahtzee) at granny’s.  

But from now on, you have decided to cheat your way to victory thanks to software you are going to develop. It will  
give you the chances to obtain a given combination at the next dice roll, among:  
-  a pair (at least 2 dice of the same value)
-  a three-of-a-kind (at least 3 dice of the same value)
-  a four-of-a-kind (at least 4 dice of the same value)
-  a full house (one pair and one three-of-a-kind)
-  a straight (5 dice of sequential value)
-  a yahtzee (5 dice of the same value)  

Expected combinaison parameter will be like the following :  
pair_A ; three_A ; four_A ; full_A_B ; straight_A ; yams_A