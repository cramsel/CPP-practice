#include <iostream>
#include <vector>
using namespace std;

// int main() {
//   //arrays go data type, name of array, number of elements in array,
//   //elements within curly brackets {}
  
//   // int ages[3] = {1,7,16};
//   // cout << ages;
//   // return 0;
//   //compiled as is, this spits out "0x7fffc7a3a1cc"

//   int ages[3] = {1,7,16};
//   cout << ages[2];
//   return 0;
//   //this works as it would in ruby, printing the third element
// }

// int main() {
//   string words[5] = {"hello", "goodbye", "yes", "no", "test"};
//   int wordsLength = sizeof(words)/sizeof(string);
//   cout << wordsLength;
// }

// SO: Vectors CANNOT be printed as ruby arrays. You MUST call an
// element in the vector in order for the code to compile


int main() {
  vector<string> words = {"yes", "no", "maybe"};
  cout << words[0] << endl;
}