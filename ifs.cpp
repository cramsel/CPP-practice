// #include <iostream>
// using namespace std;

// int main() {
//   int x;
//   cout << "Enter a number: ";
//   cin >> x;
//   // cout << "The number is " << x << endl;
//   if (x<5) {
//     cout << x << " is less than 5." << endl;
//   } else if (x==5) {
//     cout << x << " is 5" << endl;
//   } else {
//     cout << x << " is greater than 5" << endl;
//   }
// }


// #include <iostream>
// using namespace std;

// int main() {
//   int x;
//   cout << "Enter a number: ";
//   cin >> x;
//   if (x<10) {
//     cout << 0 << endl;
//   } else if (x>=10) {
//     cout << 1 << endl;
//   }
//   return 0;
// }

#include <iostream>
using namespace std;

int main() {
  int x, y;
  cout << "Enter the first number: ";
  cin >> x;
  cout << "Enter the second number: ";
  cin >> y;

  if (x>10 && y>10) {
    cout << 0 << endl;
  } else {
    cout << 1 << endl;
  }

  return 0;
}