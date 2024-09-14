//#include<iostream>
//#include<string>
//using namespace std;
//template<class NameType,class AgeType = int> //模板参数列表有默认参数
//class Person {
//public:
//	Person(NameType name, AgeType age) {
//		this->name = name;
//		this->age = age;
//	}
//	void showPerson() {
//		cout << "姓名：" << name << "，年龄：" << age << endl;
//	}
//	NameType name;
//	AgeType age;
//};
//int main()
//{
//	//Person p("孙悟空",1000);  //错误，无法用自动类型推导
//	//Person<string, int> p("孙悟空",1000);  //正确，只能用显示指定类型
//
//	Person<string> p("猪八戒",999);  //由于模板参数列表有默认参数，所以只需要指出string即可，函数模板不能这么用
//	p.showPerson();
//	return 0;
//}