#include<iostream>
using namespace std;

class Game {
  private:
    int height;
    int width;
  public:
    Game(int height, int width) {
      this->height = height;
      this->width = width * 2;
    }
    Game() {
      cout << "Enter the height: ";
      cin >> height;
      cout << "Enter the width: ";
      cin >> width;
    }
    void constuct() {
      
    } 
};
