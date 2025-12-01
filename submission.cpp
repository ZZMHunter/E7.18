/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: E7.18

    Define a structure Triangle that contains three Point members. Write a function that
    computes the perimeter of a Triangle. Write a program that reads the coordinates of
    the points, calls your function, and displays the result
*/

#include <iostream>
#include <cmath>

struct Point{
    double x;
    double y;
};

struct Triangle{
    Point a;
    Point b;
    Point c;
};

double distance(Point a, Point b){
    double y = pow(b.y - a.y,2);
    double x = pow(b.x - a.x,2);
    return sqrt(y+x);
}

double perimeter(Triangle abc){
    double perimeter = distance(abc.a,abc.b) + distance(abc.b,abc.c) + distance(abc.c,abc.a);
    return perimeter;
}

int main(){
    Point a = {1, 2};
    Point b = {3, 4};
    Point c = {5, 6};
    Triangle abc = {a, b, c};
    std::cout << perimeter(abc) << std::endl;
    return 0;
}