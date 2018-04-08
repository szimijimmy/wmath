#include <iostream>
#include "wmath.h"

using namespace std;

int main(){
    double diameter;
    double exponent;

    cout << "Witam w programie zwracającym wybrane zależności związane z średnicą pizzy na jaką miałbyś ochotę!!!" << endl;
    cout << "Podaj średnicę pizzy na jaką miałbyś ochotę (w cm): ";
    
    cin >> diameter;

    cout << endl<< "Pole powierzchni pizzy na jaką masz smaka to: ";
    cout << circleArea(diameter/2);
    cout << "cm2" << endl << endl;

    cout << "Podaj wykładnik potęgi do jakiej chciałbyś podnieść średnicę swojej pizzy, aby przekonać się, jaką pizzę mogłbyś zjeść wtedy!: ";
    cin >> exponent;
    cout <<  endl <<"Pole pizzy jaką mogłbyś w takiej sytuacji zjeść to: ";
    cout << circleArea(power(diameter/2, exponent));
    cout << "cm2" << endl << endl;

    cout << "Pole Twojej pizzy, jeśli potraktowalibyśmy jej część całkowitą jako silnię wynosiłoby: ";
    cout << circleArea(factorial(long(diameter)/2));
    cout << "cm2" << endl << endl;

    cout << "Rozkład na czynniki pierwsze części całkowitej średnicy Twojej pizzy wygląda następująco: " << endl;
    primeFactorization(long(diameter));
    cout << endl;

    cout << "Średnica Twojej pizzy ";
    if(ifPrime(long(diameter))){
        cout << "jest";
    } else{
        cout << "nie jest";
    }
    cout << " liczbą pierwszą" << endl << endl << endl;

    cout << "brought to you by szimijimmy";
}