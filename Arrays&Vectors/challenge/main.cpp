/* 
  Challenge
  
  Write a C++ program as follows:
  
  Declare 2 empty vectors of integers named
  vector1 and vector 2, respectively.
  
  Add 10 and 20 to vector1 dynamically using push_back
  Display the elements in vector1 using the at() method as well as its size using the size() method
  
  Add 100 and 200 to vector2 dynamically using push_back
  Display the elements in vector2 using the at() method as well as its size using the size() method

  Declare an empty 2D vector called vector_2d
  Remember, that a 2D vector is a vector of vector<int>
  
  Add vector1 to vector_2d dynamically using push_back
  Add vector2 to vector_2d dynamically using push_back
  
  Display the elements in vector_2d using the at() method
  
  Change vector1.at(0) to 1000
  
  Display the elements in vector_2d again using the at() method
  
  Display the elements in vector1 
  
  What did you expect? Did you get what you expected? What do you think happended?
*/

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
  // Declare 2 vectors
  vector<int> vector1(0);
  vector<int> vector2(0);

  // Add element to vector 1
  vector1.push_back(10);
  vector1.push_back(20);

  // Show element and size of vector 1
  cout << vector1.at(0) << endl;
  cout << vector1.at(1) << endl;
  cout << "Vector 1 size: " << vector1.size() << endl;  

  // Add element to vector 2
  vector2.push_back(100);
  vector2.push_back(200);

  // Show element and size of vector 2
  cout << vector2.at(0) << endl;
  cout << vector2.at(1) << endl;
  cout << "Vector 2 size: " << vector2.size() << endl;

  // Declare vector 2d
  vector <vector<int>> vector_2d;

  // Add vector 1 and vector 2 to vector 2d
  vector_2d.push_back(vector1);
  vector_2d.push_back(vector1);


  // Show element of vector 2d
  cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
  cout << vector_2d.at(1).at(0) << "  " << vector_2d.at(1).at(1) << endl;

  // Change element at index 0 of vector 1
  vector1.at(0) = 1000;
  // Show element of vector 1 again
  cout << vector1.at(0) << endl;
  cout << vector1.at(1) << endl;


  // Show element of vector 2d again
  cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
  cout << vector_2d.at(1).at(0) << "  " << vector_2d.at(1).at(1) << endl;

  return 0;
}
