/*
请声明一个5个元素的数组，并且将元素逆置

*/
//#include<iostream>
//using namespace std;
//
//int main93()
//{
//	int arr[] = { 1,2,3,4,5,6 ,7};
//	int temp;
//	int length = sizeof(arr)/sizeof(arr[0]);
//	cout << "原数组：";
//	for (int i = 0; i < length; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < (length / 2); i++) {
//		temp = arr[i];
//		arr[i] = arr[length - i-1];
//		arr[length - i-1] = temp;
//	}
//	cout << "逆置后数组：";
//	for (int i = 0; i < length; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}