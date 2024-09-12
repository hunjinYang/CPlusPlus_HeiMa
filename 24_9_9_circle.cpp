#include"circle.h"

void Circle::isCenter(Point& p) {
	int pdistance = (this->center.getX() - p.getX()) * (this->center.getX() - p.getX()) +
		(this->center.getY() - p.getY()) * (this->center.getY() - p.getY());
	int rdistance = this->m_R * this->m_R;


	if (pdistance > rdistance) {
		cout << "点在圆外" << endl;
	}
	else if (pdistance == rdistance) {
		cout << "点在圆上" << endl;
	}
	else {
		cout << "点在圆里" << endl;
	}
}