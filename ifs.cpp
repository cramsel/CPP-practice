#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Enter a number: ";
  cin >> x;
  // cout << "The number is " << x << endl;
  if (x<5) {
    cout << x << " is less than 5." << endl;
  } else if (x==5) {
    cout << x << " is 5" << endl;
  } else {
    cout << x << " is greater than 5" << endl;
  }
}