#include<iostream>
#include "./canvas.cpp"
#include "./snake.cpp"
using namespace std;
/*
* Used Signle Responsibility Principle
* And Composite Pattern
*
* @author TahsinAyman
*/
class Game {
  private:
    int height;
    int width;
    Canvas *canvas; 
    int score;
  public:
    Game(int height, int width) {
      this->height = height;
      this->width = width;
      this->score = 0;
    }
    Game() {
      cout << "Enter the height: ";
      cin >> height;
      cout << "Enter the width: ";
      cin >> width;
    }
    Canvas *getCanvas() {
      return this->canvas;
    }
    void construct() {
      Canvas *canvas = new Canvas(height, width);
      canvas->construct();
      Snake *snake = new Snake(canvas);
      this->canvas = canvas;
    }
};
