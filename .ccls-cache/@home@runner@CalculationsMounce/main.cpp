/*
John Mounce
Cosc-1436-57002
I am using Repl.it to create this program
This program will prompt the user to enter 4 numbers to perform different arethmitic calculations
*/
#include <iostream>
using namespace std;


int main()
{
//variable definition
double number1;
double number2;
int number3;
int number4;
double addition, subtraction, multiplication, division;
int modulus;

//get the first mumber input
cout << "please enter the first number: ";
cin >> number1;
cout << endl;

//get the second number input
//this number will be used for division, it cannot be 0.
cout << "please enter the second number: ";
cin >> number2;
  if (number2 == 0)
  {
  cout << "The second number cannot equal 0." << endl;
  cout << "Please rerun the program and enter another number." << endl;
  }
  else
  {
  cout << endl;
  }

//get the thrid number input
cout << "please enter the third number: ";
cin >> number3;
cout << endl;

//get the fourth number input
//this number will be used for modulus, so it cannot equal 0.
cout << "please enter the fourth number: ";

cin >> number4;
if (number4 == 0)
  {
  cout << "The fourth number cannot equal 0." << endl;
  cout << "Please rerun the program and enter another number." << endl;
  }
  else
  {
  cout << endl;
  }

//process
addition = number1 + number2;
subtraction = number1 - number2;
multiplication = number1 * number2;
division = number1 / number2;
modulus = number3 % number4;

//display the process output to console
cout << "the sum of " << number1 << " and " << number2 << " is = " << addition << endl;
cout << "the difference of " << number1 << " and " << number2 << " is = " << subtraction << endl;
cout << "the product of " << number1 << " and " << number2 << " is = " << multiplication << endl;
cout << "the quotient of " << number1 << " and " << number2 << " is = " << division << endl;
cout << "the remainder of " << number3 << " and " << number4 << " when divided is = " << modulus << endl;



return 0;
}
