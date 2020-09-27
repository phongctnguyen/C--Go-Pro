#include <iostream>
#include <vector>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::vector;

int main()
{
  /*
    for loop
  */
  for (int i = 0; i < 10; i++)
    cout << i << endl;

  for (int i{10}; i > 0; i--)
    cout << i << endl;

  for (int i{10}; i < 100; i++)
    if (i % 15 == 0)
      cout << i << endl;

  for (int i{1}, j{5}; i <= 5; i++, j++)
    cout << i << " " << j << endl;

  vector<int> nums{10, 11, 12, 13, 14};
  for (unsigned int i{0}; i < nums.size(); i++) // nums.size() return unsigned integer
    cout << nums[i] << endl;

  /*
    range-based for loop
  */
  int scores[]{10, 20, 30};

  for (auto score : scores)
    cout << score << endl;

  vector<double> temperatures{87.9, 66.5, 80.0, 74.5};
  double average_temp{};
  double total{};

  for (auto temp : temperatures)
    total += temp;

  if (temperatures.size() != 0)
    average_temp = total / temperatures.size();

  cout << fixed << setprecision(1);
  cout << "Average temperature is " << average_temp << endl;

  for (auto val : {1, 2, 3, 4})
    cout << val << endl;

  for (auto c : "Phong")
    cout << c;
  cout << endl;

  /*
    while loop
  */
  int number{};
  cout << "Enter a positive integer: ";
  cin >> number;

  while (number > 0)
  {
    cout << number << endl;
    --number;
  }

  int number_input{};
  bool done{false};

  while (!done)
  {
    cout << "Enter an integer between 1 and 5: ";
    cin >> number_input;

    if (number_input <= 1 || number_input >= 5)
      cout << "Out of range, try again" << endl;
    else
    {
      cout << "Thanks" << endl;
      done = true;
    }
  }

  /*
    do-while loop
  */
  char selection{};
  do
  {
    cout << "\n---------------------" << endl;
    cout << "1. Do this" << endl;
    cout << "2. Do that" << endl;
    cout << "3. Do something else" << endl;
    cout << "Q. Quit" << endl;
    cout << "\nEnter your selection: ";
    cin >> selection;

    if (selection == '1')
      cout << "You chose 1 - doing this" << endl;
    else if (selection == '2')
      cout << "You chose 2 - doing that" << endl;
    else if (selection == '3')
      cout << "You chose 3 - doing something else" << endl;
    else if (selection == 'Q' || selection == 'q')
      cout << "Goodbye..." << endl;
    else
      cout << "Unknown option -- try again..." << endl;

  } while (selection != 'q' && selection != 'Q');

  /*
    nested loop
  */
  for (int num1{1}; num1 <= 10; ++num1)
  {
    for (int num2{1}; num2 <= 10; ++num2)
    {
      cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    cout << "-----------" << endl;
  }

  int num_items{};

  cout << "How many data items do you have? ";
  cin >> num_items;

  vector<int> data{};

  for (int i{1}; i <= num_items; ++i)
  {
    int data_item{};
    cout << "Enter data item " << i << ": ";
    cin >> data_item;
    data.push_back(data_item);
  }

  cout << "\nDisplaying Histogram" << endl;
  for (auto val : data)
  {
    for (int i{1}; i <= val; ++i)
    {
      if (i % 5 == 0)
        cout << "*";
      else
        cout << "-";
    }
    cout << endl;
  }

  return 0;
}