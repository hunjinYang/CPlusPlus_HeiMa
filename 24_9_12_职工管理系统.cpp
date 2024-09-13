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
//		case 0:       //退出系统
//			wm.ExitSystem();  //退出程序
//			break;
//		case 1:       //增加职工
//			wm.add_Emp();
//			break;
//		case 2:      //显示职工
//			wm.show_Emp();
//			break;
//		case 3:      //通过职工编号删除职工
//			wm.del_Emp();
//			break;
//		case 4:      //修改职工
//			wm.mod_Emp();
//			break;
//		case 5:      //查找职工，通过职工编号，通过职工姓名
//			wm.find_Emp();
//			break;
//		case 6:      //排序职工
//			wm.sort_Emp();
//			break;
//		case 7:      //清空职工
//			wm.clean_Emp();
//			break;
//		default:
//			cout << "************  请输入正确选项!!!  ************"<<endl;
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
