#include<iostream>
using namespace std;
/*
*
* @auhtor TahsinAyman
*/
class Canvas {
  private:
    const char snakeBodyCharacter;
    const char wallCharacter;
    int height;
    int width;
    int tempSnakeStartPositionX;
    int tempSnakeStartPositionY;
    char **canvas;

  public:
    ~Canvas() {
      for (int i = 0; i < height; i++) {
        delete[] this->canvas[i];
      }
      delete[] this->canvas;
    }
    Canvas(int height, int width) 
      : snakeBodyCharacter('0'),
        wallCharacter('*') 
    {
      this->height = height;
      this->width = width;
      this->tempSnakeStartPositionX = width / 2;
      this->tempSnakeStartPositionY = height / 2;
    }
    /*
     * TODO: Implement Blank Constructor Logic Later.
     *
     * @ignore
     * @author TahsinAyman
     */
    //Canvas() {}
  
    /*
     * NOTE: Make sure to use OS stream here. 
     * TODO: Write Logic @TahsinAyman
     * @author TahsinAyman
     */ 
    void print() {
      
    }
    void construct() {
      cout << this->tempSnakeStartPositionX << " " << this->tempSnakeStartPositionY << endl;
      this->canvas = new char*[this->height];
      for (int r = 0; r < this->height; r++) {
        this->canvas[r] = new char[this->width];
        for (int c = 0; c < this->width; c++) {
          if (
            (r == 0 || r == this->height - 1) || 
            (c == 0 || c == this->width - 1)
          ) {
            this->canvas[r][c] = this->wallCharacter;
          } else {
            this->canvas[r][c] = ' ';
          }
        }
      }
      this->canvas[tempSnakeStartPositionY][tempSnakeStartPositionX] = this->snakeBodyCharacter;
    }
    char **getCanvas() {
      return this->canvas;
    }
    
};
