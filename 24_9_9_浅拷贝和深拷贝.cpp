//#include<iostream>
//using namespace std;
//class Person {
//public:
//	Person() {
//		cout << "Person的默认构造函数调用" << endl;
//	}
//	Person(int age, int height) {
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	Person(const Person&p) {
//		cout << "Person拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//		m_Height = new int(*p.m_Height);
//	}
//	~Person() {
//		if (m_Height != NULL) {
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person的析构函数调用" << endl;
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