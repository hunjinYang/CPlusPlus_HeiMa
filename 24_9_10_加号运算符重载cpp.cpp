//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person {
//public:
//	Person();
//	Person(int a,int b);
//	Person operator+(const Person& p);
//public:
//	int m_A;
//	int m_B;
//};
//Person::Person(){}
//Person::Person(int a,int b) {
//	m_A = a;
//	m_B = b;
//}
//Person Person::operator+(const Person& p) {
//	Person temp;
//	temp.m_A = this->m_A + p.m_A;
//	temp.m_B = this->m_B + p.m_B;
//	return temp;
//}
//
//Person operator+(const Person& p1, const Person& p2) {
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//
//void test01() {
//	Person p1(10,10);
//	Person p2(20,20);
//
//	Person p3 = p1 + p2;
//	cout << "p3£ºm_A=" << p3.m_A << " ,m_B=" << p3.m_B << endl;
//}
//
//int main()
//{
//	test01();
//}