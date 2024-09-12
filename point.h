#pragma once
#include<iostream>
using namespace std;
class Point {
private:
	int X;
	int Y;
public:
	Point() {}
	Point(int X, int Y) {
		this->X = X;
		this->Y = Y;
	}
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
};