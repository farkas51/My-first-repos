#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Point {

 
public:                                   
  void output();   
  Point(int _x, int _y);
public:
  int x;                                         
  int y;                                        

};                                                  



void Point::output() {
  cout << x<<" "<<y<<endl;
}
Point::Point(int _x, int _y) : x(_x), y(_y) {  }