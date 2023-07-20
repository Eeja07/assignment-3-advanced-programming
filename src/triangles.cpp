/*
Anda diminta untuk mengimplementasikan class dengan nama Triangle
yang didalamnya memuat 3 data dalam class Point2D yang telah diimplementasikan

Tujuan dari program adalah menentukan apakah suatua Triangle adalah
sama kaki, sama sisi, siku-siku, dan sembarang

Input:
    vector dari suatu Triangle (dengan banyak sebesar 3*N) --> N = total Triangle

Output
    print setiap line dengan "sama kaki", "sama sisi", "siku-siku", atau "sembarang"


Silahkan gunakan teori dan implementasi yang telah diajarkan dikelas
*/

// Triangle.cpp
#include <iostream>
#include <cmath>

#include "include/triangles.hpp"

Triangle::Triangle() {}

Triangle::Triangle(Point2D t1, Point2D t2, Point2D t3) : _t1(t1), _t2(t2), _t3(t3) {}

void Triangle::SetT1(Point2D t1) { _t1 = t1; }

void Triangle::SetT2(Point2D t2) { _t2 = t2; }

void Triangle::SetT3(Point2D t3) { _t3 = t3; }

float distance(int x1, int y1, int z1, int x2, int y2, int z2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}

void Triangle::TriangleType()
{
    using namespace std;

    // Calculate the lengths of the sides of the triangle
    float side1 = distance(_t1.GetX(), _t1.GetY(), _t1.GetZ(), _t2.GetX(), _t2.GetY(), _t2.GetZ());
    float side2 = distance(_t2.GetX(), _t2.GetY(), _t2.GetZ(), _t3.GetX(), _t3.GetY(), _t3.GetZ());
    float side3 = distance(_t3.GetX(), _t3.GetY(), _t3.GetZ(), _t1.GetX(), _t1.GetY(), _t1.GetZ());

    float tolerance = 1e-6; // Tolerance for floating-point comparison

    // Check the conditions to determine the type of the triangle
    if (fabs(side1 - side2) < tolerance && fabs(side2 - side3) < tolerance)
    {
        cout << "Segitiga Sama Sisi"; // Return Equilateral triangle
    }
    else if (fabs(side1 * side1 + side2 * side2 - side3 * side3) < tolerance ||
             fabs(side2 * side2 + side3 * side3 - side1 * side1) < tolerance ||
             fabs(side3 * side3 + side1 * side1 - side2 * side2) < tolerance)
    {
        cout << "Segitiga Siku-Siku"; // Return Right-angled triangle
    }
    else if (fabs(side1 - side2) < tolerance || fabs(side2 - side3) < tolerance || fabs(side1 - side3) < tolerance)
    {
        cout << "Segitiga Sama Kaki"; // Return Isosceles triangle
    }
    else
    {
        cout << "Segitiga Sembarang"; // Return Scalene triangle
    }
}
