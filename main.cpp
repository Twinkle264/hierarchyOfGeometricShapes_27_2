#include <iostream>

using namespace std;

class Figure {
public:
    float x, y;
    string color;

    void colorChoice() {
        while (true) {
            cout << "Please choose the color: " << endl;
            cout << "1. Red" << std::endl << "2. Green" << std::endl << "3. Blue" << std::endl;
            int choose = 0;
            cin >> choose;
            if (choose == 1) {
                color = "Red";
            } else if (choose == 2) {
                color = "Green";
            } else if (choose == 3) {
                color = "Blue";
            }
            if (choose > 0 and choose < 4) {
                break;
            } else {
                cout << "\tError: Invalid input!" << endl << endl;
            }
        }
        cout << endl << "Color is " << color << endl;
    }
};

class Square : public Figure {
public:
    float lengthEdge = 0;
    float area = 0;

    Square(float a) : lengthEdge(a) {

    }

    void areaSquare() {
        area = lengthEdge * 2;

        cout << "The area of Square = " << area << endl;
    }

    void rectangleOutSize() {
        cout << "The minimum rectangle describing the figure = " << lengthEdge << "x" << lengthEdge << endl;
    }

    void getInfo() {
    }
};

class Rectangle : public Figure {
public:
    float lengthEdgeA = 0;
    float lengthEdgeB = 0;
    float area = 0;

    Rectangle(float a, float b) : lengthEdgeA(a), lengthEdgeB(b) {

    }

    void areaRectangle() {
        area = lengthEdgeA * lengthEdgeB;

        cout << "The area of Rectangle = " << area << endl;
    }

    void rectangleOutSize() {
        cout << "The minimum rectangle describing the figure = " << lengthEdgeA << "x" << lengthEdgeB << endl;
    }
};

class Circle : public Figure {
public:
    float radius = 0;
    float area = 0;

    Circle(float a) : radius(a) {

    }

    void areaCircle() {
        area = atan(1) * 4 * (radius * radius);
        cout << "The area of Circle = " << area << endl;
    }

    void rectangleOutSize() {
        cout << "The minimum rectangle describing the figure = " << radius * 2 << "x" << radius * 2 << endl;
    }

};

class Triangle : public Figure {
public:
    float lengthEdge = 0;
    float area = 0;

    Triangle(float a) : lengthEdge(a) {

    }

    void areaTriangle() {
        area = lengthEdge * lengthEdge * std::sqrt(3) / 4;
        cout << "The area of Triangle = " << area << endl;
    }

    void rectangleOutSize() {
        cout << "The minimum rectangle describing the figure = " << lengthEdge << "x" << lengthEdge * sqrt(3) / 2
             << endl;
    }
};

void creationSquare() {
    cout << endl << "\tSquare" << endl;
    float a;
    cout << "Please enter the square edge length: ";
    cin >> a;
    auto *square = new Square(a);
    square->colorChoice();
    square->areaSquare();
    square->rectangleOutSize();
    delete square;
    square = nullptr;
    cout << endl << endl;
}

void creationRectangle() {
    cout << endl << "\tRectangle" << endl;
    float a, b;
    cout << "Please enter the rectangle edges length (a, b): ";
    cin >> a >> b;
    auto *rectangle = new Rectangle(a, b);
    rectangle->colorChoice();
    rectangle->areaRectangle();
    rectangle->rectangleOutSize();
    delete rectangle;
    rectangle = nullptr;
    cout << endl << endl;
}

void creationCircle() {
    cout << endl << "\tCircle" << endl;
    float a;
    cout << "Please enter the circle radius: ";
    cin >> a;
    auto *circle = new Circle(a);
    circle->colorChoice();
    circle->areaCircle();
    circle->rectangleOutSize();
    delete circle;
    circle = nullptr;
    cout << endl << endl;
}

void creationTriangle() {
    cout << endl << "\tCircle" << endl;
    float a;
    cout << "Please enter the triangle edge length: ";
    cin >> a;
    auto *triangle = new Triangle(a);
    triangle->colorChoice();
    triangle->areaTriangle();
    triangle->rectangleOutSize();
    delete triangle;
    triangle = nullptr;
    cout << endl << endl;
}

int main() {
    int buffer = 0;
    while (buffer != 5) {
        std::cout << "Please choose what shape we will create" << std::endl;
        std::cout << "1. square" << std::endl;
        std::cout << "2. rectangle" << std::endl;
        std::cout << "3. circle" << std::endl;
        std::cout << "4. triangle" << std::endl;
        std::cout << "5. exit" << std::endl;
        std::cin >> buffer;

        if (buffer == 1){
            creationSquare();
        } else if (buffer == 2){
            creationRectangle();
        } else if (buffer == 3){
            creationCircle();
        } else if (buffer == 4){
            creationTriangle();
        } else if (buffer == 5){
            return 0;
        } else {
            std::cout << "Incorrect command!!! Try again" << std::endl;
        }
    }
    return 0;
}
