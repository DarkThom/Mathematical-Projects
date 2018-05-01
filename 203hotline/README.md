203hotline
==========

./203hotline [n k | d]
----------------------

| Parameters | Description                                                    |
| ---------: | ---------------------------------------------------------------|
| **n**      | n value for the computation of the binomial coefficient of n k |
| **k**      | k value for the computation of the binomial coefficient of n k |
| **d**      | average duration of calls (in seconds)                         |

Uncle Luigi runs a 25-phone hotline in Pondicherry.  

He reckons 3500 people could possibly call during each 8-hour day, and would like to know the probability of an
overload (that is, the probability of no line being available), depending on the average duration of calls.
Here is your mission.  

The random variable representing the number of people calling at a given time follows the binomial distribution,
whereas calls are independent from each other.  

This program could be reused on a larger scale, so if you fear that computing the binomial distribution may be time-
consuming, and you’re thinking about estimating it with a Poisson distribution, how very clever of you.  