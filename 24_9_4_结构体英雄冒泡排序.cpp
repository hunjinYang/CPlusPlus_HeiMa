///*
//问题描述：
//设计一个英雄的结构体，包括成员姓名，年龄，性别；创建结构体数组，数组中存放5名英雄
//通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果
//*/
//#include<iostream>
//#include<string>
//using namespace std;
//
////英雄结构体
//struct Hero {
//	string name;  //姓名
//	int age;      //年龄
//	string sex;   //性别
//};
//void inputHeros(Hero heroArray[], int len);
//void printHeros(const Hero heroArray[],int len);
//void swapHero(Hero& hero1,Hero& hero2);
//void bubbleSort( Hero heroArray[],int len);
//
//int main()
//{
//	Hero heroArray[5];
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//	inputHeros(heroArray,len);
//	cout << "排序前：" << endl;
//	printHeros(heroArray,len);
//	bubbleSort(heroArray,len);
//	cout << "排序后：" << endl;
//	printHeros(heroArray,len);
//	return 0;
//}
//
//void inputHeros(Hero heroArray[], int len)
//{
//	for (int i = 0; i < len; i++) {
//		cout << "请输入第"<<i+1<<"位英雄的姓名、年龄 性别（男/女）：";
//		cin >> heroArray[i].name >> heroArray[i].age >> heroArray[i].sex;
//	}
//}
//void printHeros(const Hero heroArray[], int len)
//{
//	for (int i = 0; i < len; i++) {
//		cout << "英雄名：" << heroArray[i].name << "，年龄：" << heroArray[i].age << "，性别：" << heroArray[i].sex << endl;
//	}
//}
//
//void swapHero(Hero& hero1, Hero& hero2) 
//{
//	Hero temp = hero1;
//	hero1 = hero2;
//	hero2 = temp;
//	
//}
//
//void bubbleSort( Hero heroArray[], int len)
//{
//	bool swapped;
//	for (int i = 0; i < len - 1; i++) {
//		swapped = false;
//		for (int j = 0; j < len - 1 - i; j++) {
//			if (heroArray[j].age > heroArray[j + 1].age) {
//				swapHero(heroArray[j],heroArray[j+1]);
//				swapped = true;
//			}
//			if (!swapped) break;
//		}
//	}
//
//}