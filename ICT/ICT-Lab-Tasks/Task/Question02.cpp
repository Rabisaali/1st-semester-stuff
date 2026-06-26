#include <iostream>
using namespace std;
class Rectangle {
    private:
        double length;
        double width;
    public:
        void setLength (double Length) {
            length = Length;
        }
        void setWidth (double Width) {
            width = Width;
        }
        double getLength () {
            return length;
        }
        double getWidth () {
            return width;
        }
        double area () {
            double Area = length*width;
            return Area;
        }
};

int main () {
    Rectangle rect1;
    rect1.setLength(5);
    rect1.setWidth(3);
    cout << "The length of the rectangle is: " << rect1.getLength() << endl;
    cout << "The width of the rectangle is: " << rect1.getWidth() << endl;
    cout << "The area of this rectangle is: " << rect1.area() << endl;
    return 0;
}