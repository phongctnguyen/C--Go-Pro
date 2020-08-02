// Challenge

/* 
Frank's Carpet Cleaning Service
Charges:
    $25 per small room
    $35 per large room
Sales tax rate is 6%
Estimates are valid for 30 days

Prompt the user for the number of small and large rooms they would like cleaned
and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  const double price_per_small_room {25};
  const double price_per_large_room {35};
  const double sales_tax {0.06};
  const int estimate_expiry {30};
  
  cout << "How many small rooms would you like cleaned? ";
  int small_rooms {0};
  cin >> small_rooms;

  cout << "How many large rooms would you like cleaned? ";
  int large_rooms {0};
  cin >> large_rooms;

  cout << "Estimate for carpet cleaning service" << endl;
  cout << "Number of small rooms: " << small_rooms << endl;
  cout << "Number of large rooms: " << large_rooms << endl;
  cout << "Price per small room: $" << price_per_small_room << endl;
  cout << "Price per large room: $" << price_per_large_room << endl;

  double price_small_room = price_per_small_room * small_rooms;
  double price_large_room = price_per_large_room * large_rooms;
  double cost = price_small_room + price_large_room;
  double tax = cost * sales_tax;
  double total_estimate = cost + tax;

  cout << "Cost: $" << cost << endl;
  cout << "Tax: $" << tax << endl;
  cout << "=========================================" << endl;
  cout << "Total estimate: $" << total_estimate << endl;
  cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

  return 0;
}