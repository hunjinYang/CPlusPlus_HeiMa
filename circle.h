#pragma once
#include<iostream>
#include"point.h"
using namespace std;

class Circle {
private:
	int m_R;
	Point center;
public:
	Circle(int R, Point center) {
		this->m_R = R;
		this->center.setX(center.getX());
		this->center.setY(center.getY());
	}

	void isCenter(Point& p);

};