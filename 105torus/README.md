105torus
=========

./105torus opt a0 a1 a2 a3 a4 n
-------------------------------

| Parameters               | Description                                                                                              |
| -----------------------: | -------------------------------------------------------------------------------------------------------- |
| **opt**                  | number of the option : 1 for the bisection method, 2 for Newton's method, 3 for the secant method        |
| **(a0, a1, a2, a3, a4)** | coefficients of the equation                                                                             |
| **n**                    | precision (meaning the application of the polynomial to the solution should be smaller than pow(10, -n)) |

The  objective  of  this  very  project  is  to  solve  a  4th  degree  equation.
A direct resolution method does exist (the Ferrari’s method), but does not generalize. Thus, we will rather compare here 3 iteratives algorithms :
- 1.  bisection method,
- 2.  Newton’s method,
- 3.  secant method.