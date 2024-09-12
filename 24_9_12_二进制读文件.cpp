//#include<iostream>
//#include<fstream>
//using namespace std;
//class Person {
//public:
//	char name[64];
//	int age;
//};
//void test(){
//	ifstream ifs;
//	ifs.open("Person.txt",ios::in|ios::binary);
//	if (!ifs.is_open()) {
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	Person p;
//	ifs.read((char *)&p,sizeof(Person));
//	cout << "姓名：" << p.name << "，年龄：" << p.age << endl;
//	ifs.close();
//}
//int main() {
//	test();
//	return 0;
//}