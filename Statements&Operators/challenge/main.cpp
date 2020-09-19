// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
  Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;

int main() 
{
  int cents {0};
  cout << "Enter the number of cents: ";
  cin >> cents;

  const int dollars_to_cents {100};
  const int quarters_to_cents {25};
  const int dimes_to_cents {10};
  const int nickels_to_cents {5};
  const int pennies_to_cents {1};

  int dollars {0};
  dollars = cents / dollars_to_cents;
  cents -= dollars * dollars_to_cents;

  int quarters {0};
  quarters = cents / quarters_to_cents;
  cents -= quarters * quarters_to_cents;

  int dimes {0};
  dimes = cents / dimes_to_cents;
  cents -= dimes * dimes_to_cents;

  int nickels {0};
  nickels = cents / nickels_to_cents;
  cents -= nickels * nickels_to_cents;

  int pennies {0};
  pennies = cents / pennies_to_cents;
  cents -= pennies * pennies_to_cents;

  cout << "dollars " << dollars << endl;
  cout << "quarters " << quarters << endl;
  cout << "dimes " << dimes << endl;
  cout << "nickels " << nickels << endl;
  cout << "pennies " << pennies << endl;

  return 0;
}