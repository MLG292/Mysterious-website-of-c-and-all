#include <iostream>
#include <cmath>
#include "super_header_file"
using namespace std;
//Name: Mason Gross
//Question 1: The triangle is a right triangle with the sides 12 and 14.
//The hypotenuse of the triangle is the same length as a single side of a square.
//What is the area of the square?
//Question 2: Adam has 3 cans of soda, and Adam needed to stay awake to code.
//So he raised the power of the cans to the third power.
//How many cans of soda does he have now?
//Question 3: There were 123 cookies. 5 people wanted to share it equally, and they start taking 1 at a time.
//Can the people share an equal amount of cookies?
//If not, how many people won’t get their equal share of cookies?

int main() { //Grabs functions from header files
    cout << "Question 1: The funny square's area is: " << question1(12, 14) << endl;
    cout << "Question 2: Adam now has " << question2(3, 3) << " cans." << endl;
    cout << "Question 3: There will be " << question3(123, 5) << " people who won't get their equal share." << endl;
    return 0;
}
