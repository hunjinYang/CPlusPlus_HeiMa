/*
������������������
ȫ�ֺ����ͳ�Ա�����ж��������Ƿ����
*/

//#include<iostream>
//using namespace std;
//
//class Cube {
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//public:
//	
//	Cube(int L,int W,int H) {
//		m_L = L;
//		m_W = W;
//		m_H = H;
//	}
//
//	int getL() {
//		return m_L;
//	}
//	int getW() {
//		return m_W;
//	}
//
//	int getH() {
//		return m_H;
//	}
//
//
//	int calculateS() {
//		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
//	}
//
//	int calculateV() {
//		return m_L * m_W * m_H;
//	}
//
//
//	bool equalCubes( Cube &c1) {
//		if (c1.getL() == this->m_L && c1.getW() == this->m_W && c1.getH() == this->m_H) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//};
//
//bool equalCubesFcun( Cube &c1,  Cube& c2) {
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int main()
//{
//	Cube* c1 = new Cube(10,10,10);
//	Cube* c2 = new Cube(10,10,10);
//
//	cout << "c1�������" << c1->calculateS()<<endl;
//	cout << "c2�������" << c2->calculateS() << endl;
//
//	cout << "c1�������" << c1->calculateV() << endl;
//	cout << "c2�������" << c2->calculateV() << endl;
//
//	cout << "c1�Ƿ���c2��ȣ�" << (c1->equalCubes(*c2)?"���" : "�����" )<<endl;
//
//}