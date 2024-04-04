#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function prototypes
float area(int); // Function to calculate area of a circle
int area(int, int); // Function to calculate area of a rectangle
int area(int, int, int); // Function to calculate area of a cuboid

int main()
{
    float area_circle, area_rec, area_cuboid;
    int length, height, choice; // Changed 'lenght' to 'length' for consistency and 'hight' to 'height'
    cout << "[1] Area of circle" << endl;
    cout << "[2] Area of rectangle" << endl;
    cout << "[3] Area of cuboid" << endl;
    cout << "Enter your choice: "; // Corrected the spelling of 'choice' and added a colon for clarity
    cin >> choice;
    switch (choice)
    {
    case 1:
        int r;
        cout << "Please enter radius of circle: "; // Added a colon for consistency and clarity
        cin >> r;
        cout << "The area of circle is: " << area(r) << endl; // Added the function call to 'area(r)' and endl for clarity
        break; // Added break to exit the switch statement after each case

    case 2:
        int l2, h2;
        cout << "Please enter the height of rectangle: "; // Corrected 'hight' to 'height'
        cin >> h2;
        cout << "Please enter the length of rectangle: "; // Corrected 'lenght' to 'length'
        cin >> l2;
        cout << "The area of rectangle is: " << area(l2, h2) << endl; // Added the function call to 'area(l2, h2)' and endl for clarity
        break; // Added break to exit the switch statement after each case

    case 3:
        int l1, h1, w;
        cout << "Please enter the height of cuboid: "; // Corrected 'hight' to 'height'
        cin >> h1;
        cout << "Please enter the length of cuboid: "; // Corrected 'lenght' to 'length'
        cin >> l1;
        cout << "Please enter the width of cuboid: "; 
        cin >> w;
        cout << "The area of cuboid is: " << area(l1, h1, w) << endl; 
        break; 
    default:
        cout << "Invalid choice" << endl; //
    }
    return 0; 
}

float area(int a)
{
    float Areaa = 3.14 * a * a; 
    return Areaa;
}
int area(int a, int b)
{
    int area2 = a * b; 
    return area2;
}
int area(int a, int b, int c)
{
    int area3 = 2 * (a * b + b * c + a * c); // Cor
    return area3;
}

