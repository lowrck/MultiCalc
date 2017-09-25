#include <iostream>
#include <cmath>

/*
 * Lewis Marx
 * MultiCalc
 * Friday September 22st, 2017
 * 45 minutes
 * Darwin Kernel Version 16.7.0: Thu Jun 15 17:36:27 PDT 2017; root:xnu-3789.70.16~2/RELEASE_X86_64
 * Mac OS/X 10.12.6
 * This program finds the volume of various calculations and outputs the answer to the terminal in a formatted output.
 *
 * */

using namespace std;

//declare all variables
//compose all menus
//setup switch statements
//setup functions for calculations

//prototypes
void RegularMenu();
void PyramidMenu();
float PyramidRectangle(float, float, float);
float PyramidHexagonal(float, float);
float Sphere(float);
float Cylinder(float, float);
float Cone(float, float);


/*
 * Display menu to user with numbers to indicate which one they want
 * return to main
 * ask what type of calculation they want to do
 * use switch to determine which option the user wants to select
 * if its a pyramid ask which type of pyramid with another menu and return to main
 * take input from the above question and use a switch statement to determine what type
 *  ask for the correct variables
 *  do the calculation for the type of calculation the user specified
 *  output the answer with the correct formatting
 *  exit the main function
 */

int main() {

    //all the variables
    float height, radius, width, length, input5, output1;
    int calcmen, pyramidmen;

    RegularMenu();
    cin >> calcmen;
    switch (calcmen) {

        case 1: {
            cout << "input radius: " << endl;
            cin >> radius;
           output1 = Sphere(radius);
            cout << "The volume of a Sphere with a radius of " << radius << " is " << output1 << " cubic feet." << endl;
       break;
        }
        case 2: {
            cout << "input radius: " << endl;
            cin >> radius;
            cout << "input height: " << endl;
            cin >> height;
            output1 = Cylinder(height, radius);
            cout << "The volume of a Cylinder with a radius of " << radius << " and a height of " << height << " is " << output1 << " cubic feet." << endl;
       break;
        }
        case 3: {
            cout << "input radius: " << endl;
            cin >> radius;
            cout << "input height: " << endl;
            cin >> height;
            output1 = Cone(height, radius);
            cout << "The volume of a Cone with a radius of " << radius << " and a height of " << height << " is " << output1 << " cubic feet." << endl;
            break;
        }
        case 4: {
            PyramidMenu();
            cin >> pyramidmen;
            switch(pyramidmen) {
                case 1: {
                cout << "What is the height: " << endl;
                cin >> height;
                cout << "What is the length: " << endl;
                cin >> length;
                cout << "What is the width: " << endl;
                cin >> width;
                output1 = PyramidRectangle(height, length, width);
                cout << "The volume of a Rectangular Pyramid with a length of " << length << ", a height of " << height << " and a width of " << width << " is " << output1 << " cubic feet." << endl;
                break;
                }
                case 2: {
                    cout << "Please enter Base Length: " << endl;
                    cin >> length;
                    cout << "Please enter height: " << endl;
                    cin >> height;
                    output1 = PyramidHexagonal(length, height);
                    cout << "The volume of a Hexagonal Pyramid with a Base Length of " << length << " and a height of " << height << " is " << output1 << " cubic feet." << endl;
                    break;
                }

            }
        }

    }
     //PyramidMenu();

    return 0;
}

void RegularMenu() {
    cout << "+--------[Calculations]--------+" << endl;
    cout << "|          1. Sphere           |" << endl;
    cout << "|          2. Cylinder         |" << endl;
    cout << "|          3. Cone             |" << endl;
    cout << "|          4. Pyramid          |" << endl;
    cout << "|                              |" << endl;
    cout << "+------------------------------+" << endl;
    cout << endl << "Which option would you like? " << endl;

}

void PyramidMenu() {
    cout << "+--------[Pyramids]------------+" << endl;
    cout << "|         1. Rectangle         |" << endl;
    cout << "|         2. Hexagonal         |" << endl;
    cout << "|                              |" << endl;
    cout << "+------------------------------+" << endl;
    cout << endl << "Which option would you like? " << endl;

}

float Cylinder(float height, float radius) {
    const float PI = acos(-1);
    float rsquared = (radius * radius);
    float output = (PI * rsquared * height);
    return output;
}

float Sphere(float radius) {
    const float PI = acos(-1);
    const float num1 = (4.0/3.0);
    float rcubed = (radius * radius * radius);
    float output = (num1 * PI * rcubed);
    return output;
}


float Cone(float height, float radius) {
    const float PI = acos(-1);
    float output = (PI * (radius * radius) * (height / 3));
    return output;
}

float PyramidRectangle(float height, float length, float width) {
    float output = ((length * width * height) / 3.0);
    return output;
}
float PyramidHexagonal(float baselength, float height) {
    float output = ((sqrt(3.0)/2.0)*(baselength * baselength)*height);
    return output;
}