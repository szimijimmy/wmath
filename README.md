# wmath
# Own header file including 5 mathematical functions in C++

**Area of a circle**  
_double circleArea(double radius)_
Returns area of a circle (obviously) - pi times _radius_ squared, the pi number in the function equals 3.141592653589 (coz why not?).
  
**Power of a number**  
_double power(double base, double exponent)_
Returns _base_ multiplied _exponent_ times. Works for exponents lower than zero (zero also) as well.

**Factorial of a number**
_long factorial(long number)_
Returns the product of an _number_ and all the integers below it. (be carefull with numbers bigger than 10)

**Prime factorization of a number**
_void primeFactorization(long number)_
Finds which prime numbers multiply together to make the original _number_. Simple huh?

**Checking is a number prime**
_bool ifPrime(long number)_
Checks is a _number_ prime. Even simplier huh?

**main.cpp**
Example using wmath.h. (In polish)
