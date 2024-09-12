//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person {
//public:
//	Person() {
//		cout << "Person的无参构造调用" << endl;
//	}
//
//	Person(string name,int age) {
//		this->name = name;
//		this->age = age;
//		cout << "Person的有参构造调用" << endl;
//	}
//
//	//拷贝构造函数
//	Person(const Person& p) {   //加入const和使用引用的方式
//		cout << "Person的拷贝构造调用" << endl;
//		this->name = p.name;
//		this->age = p.age;
//	}
//
//	~Person() {
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	string getName() {
//		return this->name;
//	}
//
//	int getAge() {
//		return this->age;
//	}
//private:
//	string name;
//	int age;
//};
//
//void test01() {
//	Person p1;  //默认构造函数调用
//	Person p2("张三",18);
//	Person p3(p2);
//	/*cout << "p2：" << p2.getName() << " " << p2.getAge() << endl;
//	cout << "p3：" << p3.getName()<<" "<<p3.getAge() << endl;*/
//
//}
//
//
//int main() {
//
//	
//	test01();
//
//	system("pause");
//	return 0;
//}