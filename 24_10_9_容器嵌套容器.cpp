//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//int main() {
//	
//	vector<vector<int>> vc;
//
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//
//
//	for (int i = 0; i < 4; i++) {
//		v1.push_back(i);
//		v2.push_back(i + 1);
//		v3.push_back(i + 2);
//		v4.push_back(i + 3);
//	}
//
//	vc.push_back(v1);
//	vc.push_back(v2);
//	vc.push_back(v3);
//	vc.push_back(v4);
//
//	for (vector<vector<int>>::iterator vit = vc.begin(); vit != vc.end(); vit++) {
//		for (vector<int>::iterator vvit = (*vit).begin(); vvit != (*vit).end(); vvit++) {
//			cout << *vvit << " ";
//		}
//		cout << endl;
//	}
//
//
//
//	return 0;
//
//}