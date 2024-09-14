//#include<iostream>
//using namespace std;
//
//template<typename T>
//void m_swap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//void mySort(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		int max = i;
//		for (int j = i + 1; j < len; j++) {
//			if (arr[max] < arr[j]) {
//				max = j;
//			}
//		}
//		if (max != i) {
//			m_swap(arr[max],arr[i]);
//		}
//	}
//	
//}
//
//template <class T>
//void printArray(T arr[],int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	char charArr[] = "fdsghhtxsa";
//	int len = sizeof(charArr) / sizeof(charArr[0]);
//	mySort(charArr,len);
//	printArray(charArr,len);
//
//	int intArr[] = {2,1,4,8,5,3,7,6,9,10};
//	 len = sizeof(intArr) / sizeof(intArr[0]);
//	mySort(intArr,len);
//	printArray(intArr,len);
//	
//}
//
//int main()
//{
//	test01();
//	return 0;
//}