#include <iostream>
#include <cmath>
#include "super_header_file"
using namespace std;
int question1(int side1, int side2) {
    float side = hypot(side1, side2);
    float square = side * side;
    return square;
}
int question2(int pow1, int pow2) {
    int cans = pow(pow1, pow2);
    return cans;
}
int question3(int cookies, int people) {
    int cookie_remainder = fmod(cookies, people);
    int peoplewnocook = 5 - cookie_remainder;
    return peoplewnocook;
}