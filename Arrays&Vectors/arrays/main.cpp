#include <iostream>

using std::cout;
using std::endl;

int main()
{
  char vowels[]{'a', 'e', 'i', 'o', 'u'};
  cout << "The first vowel is " << vowels[0] << endl;
  cout << "The last vowel is " << vowels[sizeof(vowels) / sizeof(vowels[0]) - 1] << endl;

  double hi_temps[]{90.1, 89.8, 77.6, 81.4};
  cout << hi_temps[0] << endl;
  // We can overwrite the value of array element
  hi_temps[0] = 60;
  cout << hi_temps[0] << endl;
  cout << &hi_temps[0] << endl; // 0x7fffd8841d90
  cout << &hi_temps[1] << endl; // 0x7fffd8841d98
  cout << &hi_temps << endl; // 0x7fffd8841d90

  return 0;
}