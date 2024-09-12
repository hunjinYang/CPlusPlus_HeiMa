//#include<iostream>
//#include<string>
//using namespace std;
//
//class Calculator {   //计算器类
//public:
//	virtual int getResult() {  //得到计算结果，用virtual修饰
//		return 0;
//	}
//	int m_A;
//	int m_B;
//};
//
//class AddCalculator : public Calculator {  //加法类继承计算器类并重写getResult方法
//public:
//	int getResult() {
//		return m_A + m_B;
//	}
//};
//
//class SubCalculator : public Calculator {   ////减法类继承计算器类并重写getResult方法
//public:
//	int getResult() {
//		return m_A - m_B;
//	}
//};
//
//int main() {
//	Calculator* c = new AddCalculator;   //实例化加法类，用父类指针指向
//	c->m_A = 10;  //赋初值
//	c->m_B = 10;  //赋初值
//	cout<<"加法运算结果为："<<c->getResult()<<endl;
//	delete c;  //释放堆内存空间 
//	c = new SubCalculator;   //实例化减法类，用父类指针指向
//	c->m_A = 10;
//	c->m_B = 10;
//	cout << "减法运算结果为：" << c->getResult() << endl;
//	delete c;
//}