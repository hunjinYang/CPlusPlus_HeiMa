//#include<iostream>
//using namespace std;
//
//class myPrint {
//public:
//	myPrint(string text) {
//		this->text = text;
//	}
//	void operator()(string str) {
//		cout << str << endl;
//	}
//	string text;
//};
//
//class MyAdd {
//public:
//	int operator()(int num1, int num2) {
//		return num1 + num2;
//	}
//};
//int main()
//{
//	MyAdd myadd;
//	int ret = myadd(10,10);
//	cout << "ret = " << ret << endl;
//	cout << MyAdd()(100, 100) << endl;
//}