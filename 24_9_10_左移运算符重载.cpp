//#include<iostream>
//using namespace std;
//
//class Person {
//	friend  ostream& operator<<(ostream& cout, Person& p);
//public:
//	Person();
//	Person(int a,int b);
//
//	int getA() {
//		return m_A;
//	}
//	int getB() {
//		return m_B;
//	}
//
//private:
//	int m_A;
//	int m_B;
//};
//Person::Person()
//{
//	m_A = 0;
//	m_B = 0;
//
//}
//Person::Person(int a, int b) {
//	m_A = a;
//	m_B = b;
//}
// ostream& operator<<(ostream& cout, Person& p) {
//	cout << "m_A = " << p.m_A << "  m_B = " << p.m_B << endl;
//	return cout;
//}
//
//int main()
//{
//	Person p(10,10);
//	cout << p << endl;
//}