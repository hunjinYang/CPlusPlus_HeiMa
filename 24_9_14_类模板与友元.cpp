//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T1,class T2>
//class Person;
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p) {
//	cout << "name��" << p.name << "  age��" << p.age << endl;
//}
//
//template<class T1,class T2>
//class Person {
//	//ȫ�ֺ�������ʵ��
//	friend void printPerson1(Person<T1,T2> p) {
//		cout << "name��" << p.name << "  age��" << p.age << endl;
//	}
//
//	//ȫ�ֺ�������ʵ��
//	//�ӿ�ģ������б�
//	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
//	friend void printPerson2<>(Person<T1, T2> p);
//
//
//public:
//	Person(T1 name,T2 age) {
//		this->name = name;
//		this->age = age;
//	}
//private:
//	T1 name;
//	T2 age;
//};
//
//
//
//void test01()
//{
//	Person<string, int> p("��������",18);
//	printPerson1(p);
//}
//
//void test02()
//{
//	Person<string, int> p("���ǲ�����", 18);
//	printPerson2(p);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}