//#include<iostream>
//#include<string>
//using namespace std;
//class MyInteger {
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger();
//
//	//重载前置递增
//	MyInteger& operator++() {   //注意这里返回的是引用
//		this->myInt++;
//		return *this;
//	}
//
//	//重载后置递增  
//	MyInteger operator++(int) {  //int代表占位参数，可以用于区分前置和后置递增，注意这里返回的是值
//		MyInteger temp = *this;
//		this->myInt++;
//		return temp;
//	}
//private:
//	int myInt;
//};
//MyInteger::MyInteger() {
//	this->myInt = 0;
//}
//ostream& operator<<(ostream& cout, MyInteger myint) { //注意第二个参数不是引用类型
//	cout << "myint：" << myint.myInt << endl;
//	return cout;
//}
//int main()
//{
//	MyInteger myint;
//	cout << ++myint << endl;
//	cout << myint++ << endl;
//}