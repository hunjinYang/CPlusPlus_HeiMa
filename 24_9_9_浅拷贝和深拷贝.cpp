//#include<iostream>
//using namespace std;
//class Person {
//public:
//	Person() {
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int age, int height) {
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person���вι��캯������" << endl;
//	}
//	Person(const Person&p) {
//		cout << "Person�������캯������" << endl;
//		m_Age = p.m_Age;
//		m_Height = new int(*p.m_Height);
//	}
//	~Person() {
//		if (m_Height != NULL) {
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person��������������" << endl;
//	}
//
//	int m_Age;
//	int* m_Height;
//};
//int main()
//{
//	Person p1(18,180);
//	Person p2(p1);
//}