/*
冒泡排序
算法思路：
1.比较相邻的元素。如果第一个比第二个大，就交换它们
2.对每一对相邻元素做同样的动作，执行完毕后，找到第一个最大值
3.重复以上的步骤，每次比较次数-1，直到不需要比较
*/

//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[] = {4,2,8,0,5,7,1,3,9,6};
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	cout << "排序前：";
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < len-1; i++) {
//		for (int j = 0; j < len - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//	cout << "排序后：";
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}