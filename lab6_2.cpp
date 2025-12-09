#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double deg){
    return deg * M_PI / 180.0;
}

double rad2deg(double rad){
    return rad * 180.0 / M_PI;
}

double findXComponent(double len1, double rad1, double len2, double rad2){
    return len1 * cos(rad1) + len2 * cos(rad2);
}

double findYComponent(double len1, double rad1, double len2, double rad2){
    return len1 * sin(rad1) + len2 * sin(rad2);
}

double pythagoras(double x, double y){
    return sqrt((x * x) + (y * y));
}

void showResult(double length, double direction){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << length << endl;
    cout << "Direction of the resultant vector (deg) = " << direction << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

int main(){

    double len1, len2, deg1, deg2;
    
    cout << "Enter length of the first vector: ";
    cin >> len1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> deg1;

    cout << "Enter length of the second vector: ";
    cin >> len2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> deg2;

    double rad1 = deg2rad(deg1);
    double rad2 = deg2rad(deg2);

    double xComp = findXComponent(len1, rad1, len2, rad2);
    double yComp = findYComponent(len1, rad1, len2, rad2); 

    double resultLength = pythagoras(xComp, yComp);
    double resultDirection = rad2deg(atan2(yComp, xComp));

    showResult(resultLength, resultDirection);

    return 0;
}
