#include <iostream>
using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;

void Setup() {
  gameOver = false;
}

void Draw() {
  for (int i = 0; i < height; i++) {
    if (i == 0 || i == 19) {
      for (int j = 0; j <= width; j++) {
        cout << "#";
    }
    } else {
      for (int j = 0; j <= width; j++) {
        if (j==0 || j==20) {
          cout << "#";
        } else {
          cout << " ";
        }
      }
    }
    cout << endl;
  }
}

void Input() {

}

void Logic() {

}

int main() {
  Setup();
  Draw();
}