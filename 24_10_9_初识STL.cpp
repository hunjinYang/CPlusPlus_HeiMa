//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void myPrint(int val) {
//	cout << val << endl;
//}
//
//void test01() {
//	vector<int> v;
//	v.push_back(11);  //尾插
//	v.push_back(12);  //尾插
//	v.push_back(13);  //尾插
//	v.push_back(14);  //尾插
//	v.push_back(15);  //尾插
//
//	//vector<int>::iterator itStart = v.begin(); //起始迭代器，指向容器中第一个元素
//	//vector<int>::iterator itEnd = v.end(); //结束迭代器，指向容器中最后一个元素的下一个位置
//
//	////方式一
//	//while (itStart != itEnd) {
//	//	cout << *itStart << " ";
//	//	itStart++;
//	//}
//
//	////方式二
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//	//	cout << *it << " ";
//	//}
//
//	//方式三  使用STL提供的算法
//	for_each(v.begin(), v.end(), myPrint);
//
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}
