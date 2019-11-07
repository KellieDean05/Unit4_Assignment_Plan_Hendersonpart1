/*
	Kellie Henderson, Dr_T, 9-13-19
  UNIT 4 Assignment part 1. repl.it
   Create a C++ Program to accept input from the user while the value entered does not equal -1 (the exit value).
   If any number other than -1 is entered by the user output to the screen

 The number entered times itself (n*n) Make this variable of type Double

  The number entered divided by itself (n/n) Make this Variable of Type Double

o Also Output  (n+3)/5

o  Also Output  [ ( (n+3)/5 ) + ( (n+7)/2 ) ]

Initialized a counter variable called counter to 0
Increment counter by 1 with each loop of your program
Output the value of the counter to the screen of the users after the program exits. 

Test Values:7, 10, -44, 0, j  (did anything interesting happen with 0 and j...) write a note in your comments of the program about it... 
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
#include <cmath>
using namespace std;

int main()
{
   // how counters work
int counter = 0; // starting point
double number = 0.0, square = 0.0; // n is number
double formula1 = 0.0, formula2 = 0.0; //Dr_T note
    
while(number != -1)
{
      
    cout << "\n Please enter a number (-1 to exit.): " ;
    number = validateDouble(number);

    if(number != -1)
    { //calculate if there is no -1 input
        square = number * number ;
        cout << "\nThe following number, " << number << ", squared is " << square << ". \nThe number entered divided by itself is: " << number/number << "." << "\nThe number you entered plus three divided by five is: " << (number + 3.0)/5.0 <<  " \nThe outcome of a long equation using the number you entered is: " << ((number + 3.0 )/ 5.0 ) + ( (number + 7.0) /2.0 ) << endl; 
                    ;
      
        // perform calculations
        /// increment counter
        /**********Dr_T NOTES*****************/
        formula1 = number * number; 
        cout << "\n (" << number << "*" << number << ")=" << formula1 << endl; //descriptive

        //Be cafeful about integer divsion vs. double division
        formula2 = (number + 3.0)/5.0;  
        cout << "\n ( " << number << " + 3.0 ) / 5.0" << " = " << formula2 << endl; //descriptive

        counter++; // add 1 to counter
    
        //DR_T Challenge; can you get the program to not calculate with -1 input? -just exit not calculations or output? 

    }
    else if (number == -1) //exit message
    {
      cout << "\n-1 entered. EXIT." << endl; 
    }

    cout << "This program ran. " << counter << " times." << endl;
} //end while
  
    return 0;
}
