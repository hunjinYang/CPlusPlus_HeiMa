#include"circle.h"

void Circle::isCenter(Point& p) {
	int pdistance = (this->center.getX() - p.getX()) * (this->center.getX() - p.getX()) +
		(this->center.getY() - p.getY()) * (this->center.getY() - p.getY());
	int rdistance = this->m_R * this->m_R;


	if (pdistance > rdistance) {
		cout << "����Բ��" << endl;
	}
	else if (pdistance == rdistance) {
		cout << "����Բ��" << endl;
	}
	else {
		cout << "����Բ��" << endl;
	}
}