///*
//ÿ����ʦ����5��ѧ�����ܹ���3����ʦ
//�����ʦ��ѧ���ṹ��
//��ʦ�ṹ�壺��ʦ���������5��ѧ��������
//ѧ���ṹ�壺���������Է���
//����������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
//��ӡ��ʦ���ݼ�����ѧ��
//*/
//#include<iostream>
//#include<string>
//using namespace std;
// //ѧ���ṹ��
//struct Student {
//	string name;  //ѧ������
//	int score;      //ѧ������
//};
////��ʦ�ṹ��
//struct Teacher {
//	string name;   //��ʦ����
//	struct Student stu[5];   //��ʦ����ѧ��
//};
//
//void inputData(Teacher t[],int len) { //����ʦ��ѧ����ֵ
//	for (int j = 0; j < len; j++) {
//		cout << "��������ʦ������";
//		cin >> t[j].name;
//		for (int i = 0; i < 5; i++) {
//			cout << "������" << t[j].name << "��ʦ�ĵ�" << i + 1 << "λѧ���������ͳɼ���";
//			cin >> t[j].stu[i].name >> t[j].stu[i].score;
//		}
//	}
//}
//
//void printData(const Teacher t[],int len) {
//	for (int j = 0; j < len; j++) {
//		cout << t[j].name << "��ʦ��ѧ���У�" << endl;
//		for (int i = 0; i < 5; i++) {
//			cout << "������" << t[j].stu[i].name << "��������" << t[j].stu[i].score << endl;
//		}
//	}
//}
//int main()
//{
//	Teacher t[3];     //����3����ʦ������
//	int len = sizeof(t) / sizeof(t[0]);
//	  //ͨ����������ʦ��ѧ����ֵ
//	inputData(t,len);
//	
//	
//	printData(t,len);
//	
//	
//}