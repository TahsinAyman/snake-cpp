#include<iostream>
using namespace std;
/*
*
* @auhtor TahsinAyman
*/
class Canvas {
  private:
    int height;
    int width;
    char **canvas;

  public:
    Canvas(int height, int width) {
      this->height = height;
      this->width = width;
    }
    Canvas() {}
    /*
     * NOTE: Make sure to use OS stream here. 
     * TODO: Write Logic @TahsinAyman
     * @author TahsinAyman
     */ 
    void print() {
      
    }
    void construct() {
      this->canvas = new char*[this->height];
      for (int w = 0; w < width; w++) {
        this->canvas[0] = new char[width];
        this->canvas[0][w] = '=';
        this->canvas[height - 1][w] = '=';
      }
      for (int h = 1; h < height - 1; h++) {
        this->canvas[h] = new char[width];
        this->canvas[h][0] = '=';
        for (int w = 1; w < width - 1; w++) {
          this->canvas[h][w] = ' ';
        }
        this->canvas[h][width - 1] = '=';
      }
      this->canvas = canvas;
    }
    char **getCanvas() {
      return this->canvas;
    }  
};
