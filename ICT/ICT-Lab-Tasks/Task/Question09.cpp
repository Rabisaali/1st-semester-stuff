#include <iostream>
using namespace std;

class Shape {
    public:
        void area () {
            cout << "Area of shape." << endl;
        }
};

class Rectangle : public Shape {
    float length;
    float width;
    public:
    // the ques asked to "set" k=length and width and just to print the area through area method
        void setLength (float Length) {
            length = Length;
        }
        void setWidth (float Width) {
            width = Width;
        }
        // the ques didn't ask for a getter
        void area () {
            float area = length*width;
            cout << "The area of rectangle is " << area << endl;
        }
};

int main () {
    Rectangle R1;
    float Length, Width;
    cout << "enter the length of the rectangle: ";
    cin >> Length;
    cout << "enter the width of the rectangle: ";
    cin >> Width;

    R1.setLength(Length);
    R1.setWidth(Width);
    R1.area();
}