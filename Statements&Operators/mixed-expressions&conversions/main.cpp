#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int total{0};
  int num1{0}, num2{0}, num3{0};
  const int count{3};

  cout << "Enter 3 integers separated by spaces: ";
  cin >> num1 >> num2 >> num3;

  total = num1 + num2 + num3;

  double average{0};

  average = static_cast<double> (total) / count;

  cout << "The 3 numbers were: " << num1 << " " << num2 << " " << num3 << endl;
  cout << "The sum of 3 numbers is " << total << endl; 
  cout << "The average of 3 numbers is " << average << endl; 

  return 0;
}