#include <iostream>

using namespace std;

int main() {
    float x, y;

  
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;


    if (x > 0 && y > 0) {
    cout << "The point (" << x << ", " << y << ") is in the First Quadrant." << endl;
    } else if (x < 0 && y > 0) {
    cout << "The point (" << x << ", " << y << ") is in the Second Quadrant." << endl;
    } else if (x < 0 && y < 0) {
    cout << "The point (" << x << ", " << y << ") is in the Third Quadrant." << endl;
    } else if (x > 0 && y < 0) {
         cout << "The point (" << x << ", " << y << ") is in the Fourth Quadrant." << endl;
    } else if (x == 0 && y != 0) {
    cout << "The point (" << x << ", " << y << ") is on the Y axis." << endl;
    } else if (x != 0 && y == 0) {
        cout << "The point (" << x << ", " << y << ") is on the X axis." << endl;
    } else {
        cout << "The point (" << x << ", " << y << ") is at the Origin." << endl;
    }

    return 0;
}