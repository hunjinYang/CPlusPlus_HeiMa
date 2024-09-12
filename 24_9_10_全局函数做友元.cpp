///*
//类做友元
//*/
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Building {
//	friend class GoodGay;  //GoodGay是本类的好朋友
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
//	this->bedRoom = "卧室";
//	this->livingRoom = "客厅";
//}
//
//GoodGay::GoodGay() {
//	building = new Building;
//}
//
//void GoodGay::visit() {
//	cout << "好基友正在访问：" << building->livingRoom<<endl;
//	cout << "好基友正在访问：" << building->bedRoom<<endl;
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