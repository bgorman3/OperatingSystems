#include <iostream>
#include <cmath>

using namespace std;

// User-defined data structure representing a CartesianCoordinate
struct CartesianCoordinate {
    float x;
    float y;
};

// Function to calculate the distance between two CartesianCoordinate points
float calculateDistance(const CartesianCoordinate* p1, const CartesianCoordinate* p2) {
    return sqrt(pow(p2->x - p1->x, 2) + pow(p2->y - p1->y, 2));
}

int main() {
    // Create two CartesianCoordinate objects
    CartesianCoordinate p1, p2;

    // Ask the user to enter coordinates for p1
    cout << "Enter x coordinate for point p1: ";
    cin >> p1.x;
    cout << "Enter y coordinate for point p1: ";
    cin >> p1.y;

    // Ask the user to enter coordinates for p2
    cout << "Enter x coordinate for point p2: ";
    cin >> p2.x;
    cout << "Enter y coordinate for point p2: ";
    cin >> p2.y;

    // Calculate the distance between p1 and p2
    float distance = calculateDistance(&p1, &p2);

    // Display the result
    cout << "Distance between p1 and p2: " << distance << endl;

    return 0;
}
