//#include<iostream>
//#include<string>
//#include<fstream>
//#include"workerManager.h"
//#include"worker.h"
//#include"employee.h"
//#include"manager.h"
//#include"boss.h"
//using namespace std;
//
//int main() {
//	WorkerManager wm;
//	int choice = 0;
//	while (true) {
//		wm.showMenu();
//		cin >> choice;
//		switch (choice) {
//		case 0:       //�˳�ϵͳ
//			wm.ExitSystem();  //�˳�����
//			break;
//		case 1:       //����ְ��
//			wm.add_Emp();
//			break;
//		case 2:      //��ʾְ��
//			wm.show_Emp();
//			break;
//		case 3:      //ͨ��ְ�����ɾ��ְ��
//			wm.del_Emp();
//			break;
//		case 4:      //�޸�ְ��
//			wm.mod_Emp();
//			break;
//		case 5:      //����ְ����ͨ��ְ����ţ�ͨ��ְ������
//			wm.find_Emp();
//			break;
//		case 6:      //����ְ��
//			wm.sort_Emp();
//			break;
//		case 7:      //���ְ��
//			wm.clean_Emp();
//			break;
//		default:
//			cout << "************  ��������ȷѡ��!!!  ************"<<endl;
//			system("pause");
//			system("cls");
//			break;
//		}
//
//	}
//
//
//	system("pause");
//	return 0;
//}
//
