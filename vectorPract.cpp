#include <iostream>
#include <vector>
using namespace std;

// void addWords(vector<string>& a) {
//   string x;
//   cout << "Add a word: ";
//   cin >> x;
//   a.push_back(x);
// }

// int main() {
//   vector<string> words = {"yes", "no", "maybe"};
//   int n = words.size();
//   addWords(words);
//   for (int i = 0; i <= n; i++) {
//     cout << words[i] << endl;
//   }
// }

// int n = a.size; - This line will cause the compiler to throw
// an error. I think that it doesn't like determinning the vector size
// because the vector is coming from somewhere else

// edit: forgot the parentheses lol

void showNums(vector<int>& a) {
  int n = a.size();
  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }
}

int main() {
  vector<int> nums = {1,3,7,9,8};
  for (int i = 0; i<nums.size(); i++) {
    cout << nums[i] << endl;
  }
  cout << "Level 1" << endl;

  showNums(nums);
}
