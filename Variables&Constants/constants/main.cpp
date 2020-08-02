#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  cout << "How many rooms would you like cleaned? ";
  int number_of_rooms {0};
  cin >> number_of_rooms;

  const double price_per_room {30};
  const double sales_tax {0.06};
  const int estimate_expiry {30};

  cout << "\nEstimate for carpet cleaning service" << endl;
  cout << "Number of rooms: " << number_of_rooms << endl;
  cout << "Price per room: $" << price_per_room << endl;
  cout << "Cost: $" << price_per_room * number_of_rooms << endl;
  cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax << endl;
  cout << "=========================================" << endl;
  cout << "Total estimate: $" << price_per_room * number_of_rooms * (sales_tax + 1) << endl;
  cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

  return 0;

  return 0;
}