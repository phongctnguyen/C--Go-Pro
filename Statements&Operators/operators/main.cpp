#include <iostream>

using std::cout;
using std::endl;

int main()
{
  /*
    Assignment operator: = 
    lhs (assignable) = rhs (evaluated to a value)
  */
  int num1{200};
  int num2{100};
  cout << num1 << endl;

  num1 = 300;
  cout << num1 << endl;

  /*
    Arithmetic operator: 
      + addition
      - subtraction
      "*" multiplication
      / division
      % modulo or remainder (works only with integers)  
  */
  int result {0};

  result = num1 + num2;
  cout << result << endl;

  result = num1 - num2;
  cout << result << endl;

  result = num1 * num2;
  cout << result << endl;

  result = num1 / num2;
  cout << result << endl;

  result = num1 % num2;
  cout << result << endl;

  // Precedence P(parenthesis) - E(exponent) - M(multiplication) - D(division) - A(addition) - S(subtraction)

  return 0;
}