// exp 11c 
//rectangle area

#include <iostream>
using namespace std;

class Area {
public:
    int length, width, height, A, V;

    Area(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
        A = width * length;
        V = width * length * height;
    }
};

int main() {
    int l, w, h;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;
    cout << "Enter height: ";
    cin >> h;

    Area a1(l, w, h);

    if (a1.length == a1.width && a1.width == a1.height) {
        cout << "It's a Cube" << endl;
    } else {
        cout << "It's a Cuboid" << endl;
    }

    if (a1.length < 0 || a1.width < 0) {
        cout << "ERROR: Length and width cannot be negative.";
    } else {
        cout << "Area is: " << a1.A << endl;
    }

    cout << "Volume of the 3D shape is: " << a1.V << endl;
}

/*
  Output 
  
Enter length: 23
Enter width: 3
Enter height: 4
It's a Cuboid
Area is: 69
Volume of the 3D shape is: 276

*/
