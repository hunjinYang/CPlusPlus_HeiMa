//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T1,class T2>
//class Person;
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p) {
//	cout << "name：" << p.name << "  age：" << p.age << endl;
//}
//
//template<class T1,class T2>
//class Person {
//	//全局函数类内实现
//	friend void printPerson1(Person<T1,T2> p) {
//		cout << "name：" << p.name << "  age：" << p.age << endl;
//	}
//
//	//全局函数类外实现
//	//加空模板参数列表
//	//如果全局函数是类外实现，需要让编译器提前知道这个函数的存在
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
//	Person<string, int> p("漩涡鸣人",18);
//	printPerson1(p);
//}
//
//void test02()
//{
//	Person<string, int> p("宇智波佐助", 18);
//	printPerson2(p);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}