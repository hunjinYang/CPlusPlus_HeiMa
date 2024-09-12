///*
//封装一个函数，利用冒泡排序，实现对整型数组的升序排序
//*/
//#include<iostream>
//using namespace std;
//
//void print(int* arr,int length)
//{
//	for (int i = 0; i < length; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//}
//
//void bubbleSort(int* arr,int length) {
//	for (int i = 0; i < length-1; i++) {
//		for (int j = 0; j < length - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = {9,4,6,2,5,3,1,8,7,10};
//	int length = sizeof(arr) / sizeof(arr[0]);
//	cout << "排序前：";
//	print(arr,length);
//	bubbleSort(arr,length);
//	cout << "排序后：";
//	print(arr, length);
//
//	
//}
