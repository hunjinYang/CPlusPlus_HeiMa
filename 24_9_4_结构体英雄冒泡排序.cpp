///*
//����������
//���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա𣻴����ṹ�����飬�����д��5��Ӣ��
//ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ��
//*/
//#include<iostream>
//#include<string>
//using namespace std;
//
////Ӣ�۽ṹ��
//struct Hero {
//	string name;  //����
//	int age;      //����
//	string sex;   //�Ա�
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
//	cout << "����ǰ��" << endl;
//	printHeros(heroArray,len);
//	bubbleSort(heroArray,len);
//	cout << "�����" << endl;
//	printHeros(heroArray,len);
//	return 0;
//}
//
//void inputHeros(Hero heroArray[], int len)
//{
//	for (int i = 0; i < len; i++) {
//		cout << "�������"<<i+1<<"λӢ�۵����������� �Ա���/Ů����";
//		cin >> heroArray[i].name >> heroArray[i].age >> heroArray[i].sex;
//	}
//}
//void printHeros(const Hero heroArray[], int len)
//{
//	for (int i = 0; i < len; i++) {
//		cout << "Ӣ������" << heroArray[i].name << "�����䣺" << heroArray[i].age << "���Ա�" << heroArray[i].sex << endl;
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