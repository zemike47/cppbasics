#include <iostream>
using namespace std;

struct Vector {
    double x;
    double y;
};

Vector addVectors(Vector v1, Vector v2) {
    Vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

Vector subtractVectors(Vector v1, Vector v2) {
    Vector result;
    result.x = v1.x - v2.x;
    result.y = v1.y - v2.y;
    return result;
}

int main() {
    Vector vectors[2]; // array of 2 vectors

    // prompt user to input two vectors
    for (int i = 0; i < 2; i++) {
        cout << "Enter x component of vector " << i+1 << ": ";
        cin >> vectors[i].x;

        cout << "Enter y component of vector " << i+1 << ": ";
        cin >> vectors[i].y;

        cout << endl;
    }

    // compute sum and difference of the two vectors
    Vector sum = addVectors(vectors[0], vectors[1]);
    Vector difference = subtractVectors(vectors[0], vectors[1]);

    // display the results
    cout << "Vector 1: (" << vectors[0].x << ", " << vectors[0].y << ")" << endl;
    cout << "Vector 2: (" << vectors[1].x << ", " << vectors[1].y << ")" << endl;
    cout << "Sum: (" << sum.x << ", " << sum.y << ")" << endl;
    cout << "Difference: (" << difference.x << ", " << difference.y << ")" << endl;

    return 0;
}