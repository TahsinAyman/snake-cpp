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
      for (int r = 0; r < this->height; r++) {
        this->canvas[r] = new char[this->width];
        for (int c = 0; c < this->width; c++) {
          if (
            (r == 0 || r == this->height - 1) || 
            (c == 0 || c == this->width - 1)
          ) {
            this->canvas[r][c] = '*';
          } else {
            this->canvas[r][c] = ' ';
          }
        }
      }

    }
    char **getCanvas() {
      return this->canvas;
    }
    
};
