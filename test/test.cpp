#include <iostream>
#include <vector>
using namespace std;

/*
* used this test case file to learn more about c++ and use it in project.
*
* @ignore
* @author TahsinAyman
*/

void listTest() {
  vector<int> arr = { 1, 2, 3 };
  arr.push_back(4);
  arr.push_front(0);
  for (int number: arr) {
    cout << number << endl;
  }
}

int main(void) {
  listTest();
  return 0;
}
