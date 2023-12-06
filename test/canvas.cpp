#include <iostream>
#include "../lib/canvas.cpp"
using namespace std;

/*
 * Test cases for printing and intializing two dimentional array.
 *
 * @author TahsinAyman
 */
void testCanvasInit() {
  
  int height = 10; 
  int width = 20;
  /*
   * algorithm to create the array and intialize it based on variable
   *
   * Running on:
   * O(m+nm)
   *
   * @var height
   * @var width
   * @author TahsinAyman
   */
  char canvas[height][width];
  for (int w = 0; w < width; w++) {
    canvas[0][w] = '=';
    canvas[height - 1][w] = '=';
  }
  for (int h = 1; h < height - 1; h++) {
    canvas[h][0] = '=';
    for (int w = 1; w < width - 1; w++) {
      canvas[h][w] = ' ';
    }
    canvas[h][width - 1] = '=';
  }
  
  /*
   * printing the canvas
   * runining on O(nm)
   *
   * @author TahsinAyman
   */
  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {
      cout << canvas[row][col];
    }
    cout << endl;
  }

}

/*
 * Test cases for actual legacy codebase
 *
 * @author TahsinAyman
 */
void testCanvasLegacyCodebase() {
  Canvas *canvas = new Canvas(5, 5);
  canvas->construct();
  char **complete = canvas->getCanvas();
  for (int row = 0; row < 5; row++) {
    for (int col = 0; col < 5; col++) {
      cout << complete[row][col];
    } 
    cout << endl;
  }
}

/*
* Test cases will be written here for lib/canvas.cpp
*
* @author TahsinAyman
*/
int main(void) {
  cout << "Canvas Test Case: 1" << endl;
  testCanvasInit();
  cout << "Canvas Test Case: 2" << endl;
  testCanvasLegacyCodebase();
  return 0;
}
