/*******************************************************************************
                            Program: Hello_World.cpp
                               Author: David Muir
                                Date: 11/07/2014

This program prints out the words "Hello World." to the screen. This is typically the first program run by anyone learning to program. 
*******************************************************************************/

#include <iostream> // Header/library file - input output stream in this case.

using namespace std;

// Every program requires a main function. This function is always of type int (integer) which means that it returns an integer value. In this case, as is common amongst programmers, is to return 0 if the program runs successfully. 
int main()
{
  cout << "Hello World." << endl; // Outputs any text located inside the quotation marks (""). endl simply ends the line.

  return 0;
}
