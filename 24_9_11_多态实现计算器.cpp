//#include<iostream>
//#include<string>
//using namespace std;
//
//class Calculator {   //��������
//public:
//	virtual int getResult() {  //�õ�����������virtual����
//		return 0;
//	}
//	int m_A;
//	int m_B;
//};
//
//class AddCalculator : public Calculator {  //�ӷ���̳м������ಢ��дgetResult����
//public:
//	int getResult() {
//		return m_A + m_B;
//	}
//};
//
//class SubCalculator : public Calculator {   ////������̳м������ಢ��дgetResult����
//public:
//	int getResult() {
//		return m_A - m_B;
//	}
//};
//
//int main() {
//	Calculator* c = new AddCalculator;   //ʵ�����ӷ��࣬�ø���ָ��ָ��
//	c->m_A = 10;  //����ֵ
//	c->m_B = 10;  //����ֵ
//	cout<<"�ӷ�������Ϊ��"<<c->getResult()<<endl;
//	delete c;  //�ͷŶ��ڴ�ռ� 
//	c = new SubCalculator;   //ʵ���������࣬�ø���ָ��ָ��
//	c->m_A = 10;
//	c->m_B = 10;
//	cout << "����������Ϊ��" << c->getResult() << endl;
//	delete c;
//}