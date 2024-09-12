//#include<iostream>
//using namespace std;
//
//class Person {
//public:
//	Person(int a) {
//		this->m_A = new int(a);
//	}
//
//	Person& operator=(Person& p) {
//		if (this->m_A != NULL) {
//			delete this->m_A;
//			this->m_A = NULL;
//		}
//		this->m_A = new int(*p.m_A);
//		return *this;
//	}
//
//
//	int* m_A;
//};
//
//int main() {
//	Person p1(10);
//	Person p2(20);
//	Person p3(30);
//
//	p3 = p2 = p1;
//
//	cout << *p1.m_A << endl;
//	cout << *p2.m_A << endl;
//	cout << *p3.m_A << endl;
//}