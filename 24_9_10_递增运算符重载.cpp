//#include<iostream>
//#include<string>
//using namespace std;
//class MyInteger {
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger();
//
//	//����ǰ�õ���
//	MyInteger& operator++() {   //ע�����ﷵ�ص�������
//		this->myInt++;
//		return *this;
//	}
//
//	//���غ��õ���  
//	MyInteger operator++(int) {  //int����ռλ������������������ǰ�úͺ��õ�����ע�����ﷵ�ص���ֵ
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
//ostream& operator<<(ostream& cout, MyInteger myint) { //ע��ڶ�������������������
//	cout << "myint��" << myint.myInt << endl;
//	return cout;
//}
//int main()
//{
//	MyInteger myint;
//	cout << ++myint << endl;
//	cout << myint++ << endl;
//}