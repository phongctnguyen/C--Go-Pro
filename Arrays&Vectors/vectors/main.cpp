#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
  vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
  cout << "The first vowel is " << vowels[0] << endl;                // a
  cout << "The last vowel is " << vowels[vowels.size() - 1] << endl; // u

  vector<int> test_scores{100, 98, 97};
  cout << test_scores.at(2) << endl; // 97

  int score_to_add{0};
  cout << "Update test scores ";
  cin >> score_to_add;
  test_scores.push_back(score_to_add);
  cout << "The last element is " << test_scores[test_scores.size() - 1] << endl;

  // Vector 2D
  vector<vector<int>> movie_ratings
  {
    {1, 2, 3, 4},
    {1, 2, 4, 4},
    {1, 3, 4, 5},
  };

  cout << movie_ratings[0][1] << endl; // 2
  cout << movie_ratings.at(1).at(2) << endl; // 4

  return 0;
}