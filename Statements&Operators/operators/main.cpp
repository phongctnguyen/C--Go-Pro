#include <iostream>

using std::boolalpha;
using std::cin;
using std::cout;
using std::endl;
using std::noboolalpha;

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
  int result{0};

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

  /*
    Increment operator: ++
    Decrement operator: --
    ALERT: Never use it twice for the same variable in the same statement  
  */

  int counter{10};
  counter++;
  cout << counter << endl;

  ++counter;
  cout << counter << endl;

  result = ++counter;
  result = ++counter + 10;
  // result = counter++;
  cout << result << endl;

  /*
    Equality operator: ==
    Not Equality operator: !=
  */

  bool equal_result{false};
  bool not_equal_result{false};

  int number1{0}, number2{0};

  cout << "Enter 2 integers separated by a space: ";
  cin >> number1 >> number2;
  equal_result = (number1 == number2);
  not_equal_result = (number1 != number2);

  cout << "Comparision result (equal): " << equal_result << endl;
  cout << "Comparision result (not equal): " << not_equal_result << endl;

  cout << boolalpha;
  cout << "Comparision result (equal): " << equal_result << endl;
  cout << "Comparision result (not equal): " << not_equal_result << endl;

  cout << noboolalpha;
  cout << "Comparision result (equal): " << equal_result << endl;
  cout << "Comparision result (not equal): " << not_equal_result << endl;

  /*
    Relational operator: 
      > greater than
      >= greater than or equal to
      < less than
      <= less than or equal to
      <=> three-way comparison (C++20)  
  */

  int x{0}, y{0};

  cout << "Enter 2 integers separated by a space: ";
  cin >> x >> y;

  cout << boolalpha;
  cout << x << " > " << y << " : " << (x > y) << endl;
  cout << x << " >= " << y << " : " << (x >= y) << endl;
  cout << x << " < " << y << " : " << (x < y) << endl;
  cout << x << " <= " << y << " : " << (x <= y) << endl;

   /*
    Logical operator: 
      not (!)   
      and (&&)   
      or (||)   
  */

  cout << (x > 9 && x < 15) << endl;
  cout << (x > y || x < 10) << endl;
  cout << !(y > 10 && y < 20) << endl;

  return 0;
}