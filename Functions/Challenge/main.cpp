// Challenge
/*
     Recall the challenge from Section 9 below.
    Your challenge for section 11 is to modularize your solution to the Section 9
    challenge by refactoring your solution so that it uses uses functions.
    
    You decide how to modularize the program.
    you can use my solution which is included in this file, or modularize your solution.
    
    Here are a few hints:
        - Create functions for each major function
        - Keep the functions small
        - Remember the Boss/Worker analogy
        - Keep the vector declaration in the main function and pass the vector object
          to any function that requires it

        DO NOT move the vector object outside main and make it a global variable.
    
        - You can start by defining a function that displays the menu
        - You can then define a function that reads the selection from the user and returns it in uppercase
        - Create functions for each menu option
        - Create functions that display the list of numbers, calculates the mean and so forth
        
    Take it one function at a time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!
    
    Finally,  don't forget to use function prototypes!
    
    Good luck -- I know you can do it!
*/
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void display_menu();
void print_vector(vector<int> &vec);
void add_number_to_vector(vector<int> &vec);
void display_mean_of_vector(vector<int> &vec);
void display_smallest_number_of_vector(vector<int> &vec);
void display_largest_number_of_vector(vector<int> &vec);
void clear_vector(vector<int> &vec);

int main()
{
  bool done{false};
  char choice{};
  vector<int> vec{};

  while (!done)
  {
    display_menu();

    cout << "Select your option: ";
    cin >> choice;

    if (choice == 'P' || choice == 'p')
    {
      print_vector(vec);
    }

    else if (choice == 'A' || choice == 'a')
    {
      add_number_to_vector(vec);
    }

    else if (choice == 'M' || choice == 'm')
    {
      display_mean_of_vector(vec);
    }

    else if (choice == 'S' || choice == 's')
    {
      display_smallest_number_of_vector(vec);
    }

    else if (choice == 'L' || choice == 'l')
    {
      display_largest_number_of_vector(vec);
    }

    else if (choice == 'C' || choice == 'c')
    {
      clear_vector(vec);
    }

    else if (choice == 'Q' || choice == 'q')
    {
      cout << "Goodbye" << endl;
      done = true;
    }

    else
    {
      cout << "Unknown selection, please try again" << endl;
    }

    cout << "====================================" << endl;
  }
}

void display_menu()
{
  cout << "P - Print numbers" << endl;
  cout << "A - Add a number" << endl;
  cout << "M - Display mean of the numbers" << endl;
  cout << "S - Display the smallest number" << endl;
  cout << "L - Display the largest number" << endl;
  cout << "C - Clear the list" << endl;
  cout << "Q - Quit" << endl;
}

void print_vector(vector<int> &vec)
{
  if (vec.size() == 0)
    cout << "[] - the list is empty" << endl;
  else
  {
    cout << "[ ";
    for (auto v : vec)
      cout << v << " ";
    cout << "]" << endl;
  }
}

void add_number_to_vector(vector<int> &vec)
{
  int number_to_add{};
  cout << "Choose your number: ";
  cin >> number_to_add;

  int count{0};
  for (auto v : vec)
  {
    if (number_to_add == v)
    {
      count++;
      break;
    }
  }

  if (count == 0)
  {
    cout << number_to_add << " added" << endl;
    vec.push_back(number_to_add);
  }
  else
  {
    cout << "Duplicate number " << number_to_add << endl;
  }
}

void display_mean_of_vector(vector<int> &vec)
{
  if (vec.size() == 0)
    cout << "Unable to calculate the mean - no data" << endl;
  else
  {
    double average{};
    double total{};

    for (auto v : vec)
      total += v;

    average = total / vec.size();
    cout << "Average of the elements is " << average << endl;
  }
}

void display_smallest_number_of_vector(vector<int> &vec)
{
  int min{vec[0]};

  for (auto v : vec)
  {
    if (v < min)
      min = v;
  }

  cout << "The smallest number is " << min << endl;
}

void display_largest_number_of_vector(vector<int> &vec)
{
  int max{vec[0]};

  for (auto v : vec)
  {
    if (v > max)
      max = v;
  }

  cout << "The largest number is " << max << endl;
}

void clear_vector(vector<int> &vec)
{
  vec.clear();
  cout << "List cleared" << endl;
}