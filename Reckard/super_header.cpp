#include <iostream>
#include <cmath>
#include "super_header_file"
using namespace std;
int question1(int side1, int side2) {
    float side = hypot(side1, side2); //Gets hypotenuse of triangle
    float square = side * side; //Gets square area for question
    return square;
}
int question2(int pow1, int pow2) {
    int cans = pow(pow1, pow2); //Power of the two values to get the cans amount
    return cans;
}
int question3(int cookies, int people) {
    int cookie_remainder = fmod(cookies, people); //Gets cookie remainder
    int peoplewnocook = 5 - cookie_remainder; //How many people are without cookies
    return peoplewnocook;
}