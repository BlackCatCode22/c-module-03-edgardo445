    //  stringWarmUp03.cpp
    // Created by Edgardo S.
    // Module Three



#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



int main() {

    cout << '\n welcome to my String Warm Up \n';

    string myStrObject = "abc def g h ijk";


    // Understand the index nature of a string object
    // Output the char at index (aka char position 5)
    cout <<"\n\n";
    cout << myStrObject[5];
    cout << "\n\n";

    cout << "\n myStrObject is: " << myStrObject << endl;

    // 1. get the length of the string
    int lengthOfMyStr = myStrObject.length();
    cout << "\nlength of String:" << lengthOfMyStr << endl;


    // create a char variable for the swap
    char myTempchar;
    for (int i = 0; i <= lengthOfMyStr/2; i++) {


        // cout << "\n i = << i << " and the char at " << i << " is " << myStrObject[i] << end1;
        // swap the characters
        myTempchar = myStrObject[i];
        myStrObject[i] = myStrObject[lengthOfMyStr - i - 1];
        myStrObject[lengthOfMyStr - i - 1] = myTempchar;





    }

    cout << "\n the reverse string is: \n ";

    cout << "\n myStrObject is: " << myStrObject << endl;

    return 0;

}