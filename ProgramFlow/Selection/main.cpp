#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  /*
    If statement
  */
  int num{0};
  const int min{10};
  const int max{100};

  cout << "Enter number between " << min << " and " << max << ": ";
  cin >> num;

  if (num > min)
  {
    cout << "=====================" << endl;
    cout << num << " is greater than " << min << endl;

    int diff{num - min};
    cout << diff << endl;
  }

  if (num >= min && num <= max)
  {
    cout << "=====================" << endl;
    cout << num << " is in range" << endl;
  }

  if (num == min || num == max)
  {
    cout << "=====================" << endl;
    cout << num << " is right on boundary" << endl;
  }

  /*
    If - Else-If - Else
  */

  if (num < min)
  {
    cout << "=====================" << endl;
    cout << num << " is less than " << min << endl;
  }
  else if (num > max)
  {
    cout << "=====================" << endl;
    cout << num << " is greater than " << max << endl;
  }
  else
  {
    cout << "=====================" << endl;
    cout << num << " is in range" << endl;
  }

  /*
    Nested If
  */

  int score{0};
  cout << "Enter your scode on the exam (0-100): ";
  cin >> score;
  char letter_grade{};

  if (score >= 0 && score <= 100)
  {
    if (score >= 90)
      letter_grade = 'A';
    if (score >= 80)
      letter_grade = 'B';
    if (score >= 70)
      letter_grade = 'C';
    if (score >= 60)
      letter_grade = 'D';
    else
      letter_grade = 'F';

    cout << "Your grade is " << letter_grade << endl;
    if (letter_grade == 'F')
      cout << "Sorry, you must repeat the class" << endl;
    else
      cout << "Congrats" << endl;
  }
  else
  {
    cout << "Sorry, " << num << " is not in range" << endl;
  }

  /*
    Switch
  */
  char letter{};
  cout << "Enter your letter grade: ";
  cin >> letter;

  switch (letter)
  {
  case 'a':
  case 'A':
    cout << "You need 90 or above" << endl;
    break;
  case 'b':
  case 'B':
    cout << "You need 80-89" << endl;
    break;
  case 'c':
  case 'C':
    cout << "You need 70-79" << endl;
    break;
  case 'd':
  case 'D':
    cout << "You need 60-69" << endl;
    break;
  case 'f':
  case 'F':
    cout << ":((" << endl;
    break;
  default:
    cout << "Not valid grade" << endl;
    break;
  }

  /*
    Conditional Operator
  */
  int a{};
  cout << "Enter your number: ";
  cin >> a;

  cout << a << " is " << (a % 2 == 0 ? "even" : "odd") << endl;

  return 0;
}