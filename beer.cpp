#include <iostream>
using namespace std;

int main() {
  int bottle = 99;
  while (bottle >= 0) {
    if (bottle > 1) {
      cout << bottle << " bottles of beer on the wall, " << bottle << " bottles of beer. Take one down and pass it around, " << bottle-1 << " bottles of beer on the wall." << endl;
    } else if (bottle==1) {
      cout << bottle << " more bottle of beer on the wall, " << bottle << " more bottle of beer. Take one down and pass it around, no more bottles of beer on the wall." << endl;
    } else {
      cout << "No more bottles of beer on the wall, no more bottles of beer. Go to the store and buy some more, 99 bottles of beer on the wall." << endl;
    }
    bottle--;
  }
  // cout << bottle;
}