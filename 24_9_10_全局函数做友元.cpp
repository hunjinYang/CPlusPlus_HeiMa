///*
//������Ԫ
//*/
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Building {
//	friend class GoodGay;  //GoodGay�Ǳ���ĺ�����
//public:
//	Building();
//
//public:
//	string livingRoom;
//private:
//	string bedRoom;
//
//};
//
//class GoodGay {
//
//public:
//	GoodGay();
//	void visit();
//
//private:
//	Building* building;
//};
//
//Building::Building() {
//	this->bedRoom = "����";
//	this->livingRoom = "����";
//}
//
//GoodGay::GoodGay() {
//	building = new Building;
//}
//
//void GoodGay::visit() {
//	cout << "�û������ڷ��ʣ�" << building->livingRoom<<endl;
//	cout << "�û������ڷ��ʣ�" << building->bedRoom<<endl;
//}
//
//void test01(){
//	GoodGay gg;
//	gg.visit();
//}
//
//int main() {
//	test01();
//}