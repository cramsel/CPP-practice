#include <iostream>
using namespace std;

bool gameOver;
const int width = 40;
const int height = 20;

void Setup() {
  gameOver = false;
}

void Draw() {
  system("clear");
  for (int i = 0; i <= height; i++) {
    if (i == 0 || i == height) {
      for (int j = 0; j <= width; j++) {
        cout << "#";
    }
    } else {
      for (int j = 0; j <= width; j++) {
        if (j==0 || j==width) {
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