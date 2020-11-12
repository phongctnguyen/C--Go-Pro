#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);

void pass_by_value1(int num)
{
  num = 1000;
}

void pass_by_value1(string s)
{
  s = "Changed";
}

void pass_by_value3(vector<string> v)
{
  v.clear();
}

void print_vector(vector<string> v)
{
  for (auto s : v)
    cout << s << " ";
  cout << endl;
}

int main()
{
  int num{10};
  int another_num{20};

  cout << "num before calling pass_by_value1: " << num << endl;
  pass_by_value1(num);
  cout << "num after calling pass_by_value1: " << num << endl;

  vector<string> stooges{"Larry", "Moe", "Curly"};
  cout << "stooges before calling pass_by_value3: ";
  print_vector(stooges);
  pass_by_value3(stooges);
  cout << "stooges after calling pass_by_value3: ";
  print_vector(stooges);

  return 0;
}