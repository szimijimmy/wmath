#include <iostream>
#include <cmath>
#define PI (3.141592653589)

using namespace std;

double circleArea(double radius){
    return PI*radius*radius;
}

double power(double base, double exponent){
    double result = base;
    if(exponent == 0){
        return 1;
    } else if(exponent < 0){
        for(int i=0; i<=exponent-2; i++){
            result = result*base;
        }
        return 1/result;
    } else{
        for(int i=0; i<=exponent-2; i++){
            result = result*base;
        }
        return result;
    }
}

long factorial(long number){
    if(number == 1){
        return 1;
    } else{
        return number*factorial(number-1);
    }
}

void primeFactorization(long number){
    int var = 2;
    cout << endl;
    while(number > 1){
        if(number % var == 0){
            cout << var << endl;
            number = number/var;
        } else{
            var++;
        }
    }
}

bool ifPrime(long number){
    bool prime = true;
    for(int i=2; i<number; i++){
        if(number % i == 0){
            prime = false;
            break;
        }
    }
    return prime;
}
