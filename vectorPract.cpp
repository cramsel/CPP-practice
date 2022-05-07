#include <iostream>
#include <vector>
using namespace std;

void addWords(vector<string>& a) {
  string x;
  cout << "Add a word: ";
  cin >> x;
  a.push_back(x);
}

int main() {
  vector<string> words = {"yes", "no", "maybe"};
  int n = words.size();
  addWords(words);
  for (int i = 0; i <= n; i++) {
    cout << words[i] << endl;
  }
}
