///*
//在一个数组中记录了五只小猪的体重，如：int arr[5]={300,350,200,400,250};
//找出并打印最重的小猪体重
// 
// 算法思路：
// 设置一个最大值初值
// 遍历数组
// 顺序比较，更新最大值
//*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[] = {300,350,200,400,250};
//	int max = arr[0];
//	for (int i = 1; i < (sizeof(arr)/sizeof(arr[0])); i++) {
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//	}
//	cout << "最大的小猪体重为：" << max;
//}