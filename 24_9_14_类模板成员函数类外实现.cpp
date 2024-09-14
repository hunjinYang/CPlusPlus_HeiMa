//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T1,class T2>
//class Person {
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//
//	T1 name;
//	T2 age;
//};
//
//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age)   //注意Person后必须写一个模板参数列表
//{
//		this->name = name;
//		this->age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()  //   //注意Person后必须写一个模板参数列表
//{
//		cout << "name：" << this->name << " age：" << this->age << endl;
//}
//
//int main() {
//	Person<string,int> p("沙和尚",18);
//	p.showPerson();
//}