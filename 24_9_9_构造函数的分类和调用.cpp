//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person {
//public:
//	Person() {
//		cout << "Person���޲ι������" << endl;
//	}
//
//	Person(string name,int age) {
//		this->name = name;
//		this->age = age;
//		cout << "Person���вι������" << endl;
//	}
//
//	//�������캯��
//	Person(const Person& p) {   //����const��ʹ�����õķ�ʽ
//		cout << "Person�Ŀ����������" << endl;
//		this->name = p.name;
//		this->age = p.age;
//	}
//
//	~Person() {
//		cout << "Person��������������" << endl;
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
//	Person p1;  //Ĭ�Ϲ��캯������
//	Person p2("����",18);
//	Person p3(p2);
//	/*cout << "p2��" << p2.getName() << " " << p2.getAge() << endl;
//	cout << "p3��" << p3.getName()<<" "<<p3.getAge() << endl;*/
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