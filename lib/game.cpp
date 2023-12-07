#include<iostream>
#include "./canvas.cpp"
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
  public:
    Game(int height, int width) {
      this->height = height;
      this->width = width;
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
      this->canvas = canvas;
      canvas->construct();
      
    } 
};
