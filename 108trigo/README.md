108trigo
=========

./108trigo fun a0 a1 a2...
---------------------------

| Parameters | Description                                                                  |
| ---------: | ---------------------------------------------------------------------------- |
| **fun**    | function to be applied, among at least "EXP", "COS", "SIN", "COSH" and "SINH |
| **ai**     | coeficients of the matrix                                                    |

To calculate functions(offices) complicated as Exp, cosine or sine we often use an approximation, by a limited development.  
A limited development is a polynomial X, in theory of infinite degree but in reality we stop in the power of X sufficient(self-important) for the sought(studied) precision.  

These power series are extremely handy when it comes to fast approximations of all those functions.  
But they can also be used to exponentiate (for instance) mathematical objects (as far as they can be elevated to integer powers).  
One could for example compute the cosine of a function, the exponentiate of a graph, the hyperbolic tangent of a  
rotation or the sine of a square matrix (what you will do)...  

Given a matrix and the name of a function, the programm apply the latter to the former, and print the result.  