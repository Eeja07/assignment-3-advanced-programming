#include <iostream>
#include <string>
#include <vector>
#include <math.h>

#include "include/point2d.hpp"
#include "include/triangles.hpp"

using namespace std;

int main()
{
    /*--------------------------
    Menginputkan data segitiga (3 buah X Y Z) ke dalam variable triangle
    --------------------------*/
    // Tambahkan di sini
    float x1, y1, z1, x2, y2, z2, x3, y3, z3; 
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> x3 >> y3 >> z3;

    Point2D t1(x1, y1, z1);
    Point2D t2(x2, y2, z2);
    Point2D t3(x3, y3, z3);
 
    Triangle triangle(t1, t2, t3);
    /*------------------------*/

    /*--------------------------
    Melakukan pengecekan jenis segitiga
    --------------------------*/
    // Tambahkan di sini
    triangle.TriangleType();
    /*------------------------*/

    return 0;
}