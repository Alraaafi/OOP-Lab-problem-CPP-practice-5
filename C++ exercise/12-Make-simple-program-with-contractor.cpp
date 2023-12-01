#include <iostream>
using namespace std;

class Rectangle {
  private:
    int length;
    int width;

  public:
    Rectangle(int l, int w) {
      length = l;
      width = w;
    }

    int area() {
      return length * width;
    }
};

int main() {
  Rectangle r(5, 10);
  cout << "Area of rectangle: " << r.area() << endl;
  return 0;
}