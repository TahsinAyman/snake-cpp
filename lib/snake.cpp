#include<iostream>
#include<vector>
using namespace std;

/*
 *
 *
 * @author TahsinAyman
 */
class Snake {
  private:
    Canvas *canvas;
    const char snakeBodyCharacter;
    int defaultStartPositionX; 
    int defaultStartPositionY; 
    vector<vector<int>> body; // used this to set trails of x, y

  public:
    Snake(Canvas *canvas)
      : snakeBodyCharacter('0')
    {
      this->canvas = canvas;
      this->defaultStartPositionX = this->canvas->getWidth() / 2;
      this->defaultStartPositionY = this->canvas->getHeight() / 2;
      this->createSnakeHead();
    }
    void createSnakeHead() {
      this->addSnakeBody(
        this->defaultStartPositionX - 1, 
        this->defaultStartPositionY
      );
      this->addSnakeBody(
        this->defaultStartPositionX, 
        this->defaultStartPositionY
      );
      this->moveLeft();
    }
    void addSnakeBody(int x, int y) {
      vector<int> cords = { x, y };
      body.push_back(cords);
      this->canvas->setCordinates(
        x,
        y,
        this->snakeBodyCharacter
      );
    }
    /*
     * This is the functions where movement is handled.
     *
     * @important
     * @author TahsinAyman
     */
    void moveRight() {
       
    }
    void moveLeft() {
      if (this->body[0][0] > this->body[1][0]) {
        cout << "Able to go left";
      } else {
        cout << "Unable To go left";
      } 
    }
    void moveUp() {

    }
    void moveDown() {

    }
};
