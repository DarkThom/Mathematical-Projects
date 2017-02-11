103architect
===================

./103architect x y transfo1 arg11 [arg12] [transfor2 arg12 [arg22]] ...
-----------------------------------------------------------------------

| Parameters                  | Description                                 |
| --------------------------: | ------------------------------------------- |
| **x**                       | abscissa of the original point              |
| **y**                       | ordinate of the original point              |
| **transfo arg1 [arg2]**     | translation, homothety, rotation, symetry   |

- t : translation along the coordinate vector (i, j).
- h : homothety with center 0 and scale factors m along x-axis and n along y-axis.
- r : rotation centered in O at angle α degrees.
- s : symmetry about the axis passing by 0 and inclined with an α degree angle.

The goal of this project is to develop an application to compute points images in the plan after several transformations.
To make it nice and clean, you chose to use homogeneous coordinates. How clever of you.
O being the origin of both axis, here are the transformations to be implemented :

- 1.  any translation,
- 2.  homtheties centered at 0,
- 3.  rotations centered at 0,
- 4.  symmetries about any axis that passes through 0,
- 5.  many combination of the previous transformations.