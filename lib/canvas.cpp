#include<iostream>
using namespace std;
/*
*
* @auhtor TahsinAyman
*/
class Canvas {
  private:
    const char wallCharacter;
    int height;
    int width;
    char **canvas; // @credit AsadunnobieIshaan 

  public:
    /*
     * @important
     * This is where the pointer clears the memory.
     * @author TahsinAyman
     */
    ~Canvas() {
      for (int i = 0; i < height; i++) {
        delete[] this->canvas[i];
      }
      delete[] this->canvas;
      cout << "The memory was free" << endl;
    }
    
    Canvas(int height, int width) 
      : wallCharacter('*') 
    {
      this->height = height;
      this->width = width;
    }

    /*
     * TODO: Implement Blank Constructor Logic Later.
     *
     * @ignore
     * @author TahsinAyman
     */
    //Canvas() {}
  
    /*
     * NOTE: Make sure to use OS stream here. @credit AsadunnobieIshaan
     * TODO: Write Logic @TahsinAyman
     * @author TahsinAyman
     */ 
    void print() {
      for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
          cout << this->canvas[row][col] << " ";
        } 
        cout << endl;
      }
    }
    /*
     * This is where the canvas is created with 
     * @var wallCharacter, @deprecated tempSnakeStartPositionX, @deprecated tempSnakeStartPositionY, canvas, width, height
     *
     * This program runs on @O(nm) where n = @var height and m = @var width
     *
     * @author TahsinAyman
     */
    void construct() {
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
      // @deprecated
      // this->canvas[tempSnakeStartPositionY][tempSnakeStartPositionX] = this->snakeBodyCharacter;
    }
    /*
    * Getters for the canvas.
    *
    * @important
    * @author TahsinAyman
    */
    char **getCanvas() {
      return this->canvas;
    }
    int getHeight() {
      return this->height;
    }
    int getWidth() {
      return this->width;
    }
    char getWallCharacter() {
      return this->wallCharacter;
    }
    /*
     * Function to set a specific cordiantes a character.
     * so the snake can move and eat.
     * @author TahsinAyman
     */
    void setCordinates(int x, int y, char v) {
      this->canvas[y][x] = v; 
    }
  };
