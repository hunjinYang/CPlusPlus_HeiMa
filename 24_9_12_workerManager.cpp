//#include"workerManager.h"
//
//
//WorkerManager::WorkerManager() {    //构造函数
//	ifstream ifs(FILENAME, ios::in);
//
//	//情况一：文件不存在
//	if (!ifs.is_open()) {
//		//cout << "文件不存在" << endl;
//		this->m_EmpNum = 0;
//		this->m_EmpArray = NULL;
//		this->m_FileIsEmpty = true;
//		ifs.close();
//		return;
//	}
//
//	//文件存在
//	char ch;
//	ifs >> ch;
//	if (ifs.eof()) {    //文件存在但是没有记录
//		//cout << "文件为空" << endl;
//		this->m_EmpNum = 0;
//		this->m_EmpArray = NULL;
//		this->m_FileIsEmpty = true;
//		ifs.close();
//		return;
//	}
//
//	//文件存在，并且记录数据
//	int num = this->get_EmpNum();   //得到职工个数
//	this->m_EmpNum = num;
//	this->m_FileIsEmpty = false;
//	this->m_EmpArray = new Worker * [this->m_EmpNum];
//
//	init_Emp();
//
//
//
//
//}
//WorkerManager::~WorkerManager() {   //析构函数
//	if (this->m_EmpArray != NULL) {
//		for (int i = 0; i < this->m_EmpNum; i++) {
//			if (this->m_EmpArray[i] != NULL) {
//				delete this->m_EmpArray[i];
//			}
//		}
//		delete[] this->m_EmpArray;
//		this->m_EmpArray = NULL;
//	}
//}
//void WorkerManager::showMenu() {     //展示菜单
//	cout << "*********************************************" << endl;
//	cout << "*********  欢迎使用职工管理系统！  **********" << endl;
//	cout << "*************  0.退出管理程序  **************" << endl;
//	cout << "*************  1.增加职工信息  **************" << endl;
//	cout << "*************  2.显示职工信息  **************" << endl;
//	cout << "*************  3.删除职工信息  **************" << endl;
//	cout << "*************  4.修改职工信息  **************" << endl;
//	cout << "*************  5.查找职工信息  **************" << endl;
//	cout << "*************  6.按照编号排序  **************" << endl;
//	cout << "*************  7.清空所有文档  **************" << endl;
//	cout << "*********************************************" << endl << endl;
//	cout << "请输入您的选择：";
//}
//
//void WorkerManager::ExitSystem() {
//	cout << "*********  感谢您的使用，再见！！！  *********" << endl;
//	system("pause");
//	exit(0);
//}
//
//void WorkerManager::add_Emp() {
//	int addNum = 0;  //用户添加的人数
//	cout << "请输入您要添加的职工人数：";
//	cin >> addNum;
//	if (addNum > 0) {
//		//计算添加新空间大小
//		int newSize = this->m_EmpNum + addNum;
//		//开辟新空间
//		Worker** w = new Worker * [newSize];
//
//		if (this->m_EmpArray != NULL) {
//			for (int i = 0; i < this->m_EmpNum; i++) {
//				w[i] = this->m_EmpArray[i];
//			}
//		}
//
//		//批量添加新职工
//		for (int i = 0; i < addNum; i++) {
//			int id;
//			cout << endl << "请输入添加的第 " << i + 1 << " 个新职工编号：";
//			cin >> id;
//
//			string name;
//			cout << "请输入添加的第 " << i + 1 << " 个新职工姓名：";
//			cin >> name;
//
//			Worker* w_temp = NULL;
//			int select = 0;
//			cout << "请选择该职工的岗位：[1]普通员工  [2]经理  [3]老板： ";
//			cin >> select;
//			switch (select) {
//			case 1:
//				w_temp = new Employee(id, name, 1);
//				break;
//			case 2:
//				w_temp = new Manager(id, name, 2);
//				break;
//			case 3:
//				w_temp = new Boss(id, name, 3);
//				break;
//			}
//			w[this->m_EmpNum + i] = w_temp;
//
//
//		}
//
//
//		delete[] this->m_EmpArray;
//		this->m_EmpArray = w;
//
//		this->m_EmpNum = newSize;
//
//		this->save_Emp();
//
//		this->m_FileIsEmpty = false;
//		//成功添加后，保存到文件中
//		cout << endl << endl << "成功添加 " << addNum << " 名新职工！" << endl;
//	}
//	else {
//		cout << "请输入正确人数！" << endl;
//	}
//	system("pause");
//	system("cls");
//}
//
//void WorkerManager::save_Emp()  //保存职工数据到文件中
//{
//	ofstream ofs;
//	ofs.open(FILENAME, ios::out);
//	for (int i = 0; i < this->m_EmpNum; i++) {
//
//		ofs << this->m_EmpArray[i]->id << " "
//			<< this->m_EmpArray[i]->name << " "
//			<< this->m_EmpArray[i]->departmentId << endl;
//	}
//
//	ofs.close();
//
//}
//
//int WorkerManager::get_EmpNum() //统计文件中人数
//{
//	ifstream ifs(FILENAME, ios::in);
//
//	int id;
//	string name;
//	int departmentId;
//
//	int num = 0; //统计人数的变量
//
//	while (ifs >> id && ifs >> name && ifs >> departmentId) {
//		num++;
//	}
//	ifs.close();
//	return num;
//
//}
//
//void WorkerManager::init_Emp()  //初始化职员
//{
//	ifstream ifs(FILENAME, ios::in);
//
//
//	int id;
//	string name;
//	int departmentId;
//
//	int index = 0;
//
//	while (ifs >> id && ifs >> name && ifs >> departmentId) {  //读数据
//		Worker* w_temp = NULL;
//		switch (departmentId) {
//		case 1:
//			w_temp = new Employee(id, name, departmentId);
//			break;
//		case 2:
//			w_temp = new Manager(id, name, departmentId);
//			break;
//		case 3:
//			w_temp = new Boss(id, name, departmentId);
//			break;
//		}
//		this->m_EmpArray[index] = w_temp;
//		index++;
//	}
//	ifs.close();
//}
//
//
//void WorkerManager::show_Emp()//显示职工信息
//{
//	cout << endl;
//	if (this->m_EmpNum == 0) {
//		cout << "抱歉，本系统暂无职工信息！" << endl;
//		system("pause");
//		system("cls");
//		return;
//	}
//	for (int i = 0; i < this->m_EmpNum; i++) {
//		/*cout << "职工编号：" << this->m_EmpArray[i]->id
//			<< "\t姓名：" << this->m_EmpArray[i]->name
//			<< "\t\t部门编号：" << this->m_EmpArray[i]->departmentId
//			<< "\t职责：" << this->m_EmpArray[i]->getDeptName()<<endl<<endl;*/
//
//		this->m_EmpArray[i]->showInfo();
//
//	}
//	cout << endl;
//	system("pause");
//	system("cls");
//
//}
//
//int WorkerManager::IsExist(int id)  //按照职工编号来判断职工是否存在，若存在返回下标，否则返回-1
//{
//	int index = -1;
//	for (int i = 0; i < this->m_EmpNum; i++) {
//		if (this->m_EmpArray[i]->id == id) {
//			index = i;
//			break;
//		}
//	}
//	return index;
//}
//
//void WorkerManager::del_Emp()  //按照职工的编号进行删除操作
//{
//	if (this->m_FileIsEmpty) {
//		cout << "文件不存在或记录为空!" << endl;
//	}
//	else {
//
//		for (int i = 0; i < this->m_EmpNum; i++) {
//			this->m_EmpArray[i]->showInfo();
//		}
//
//		cout << endl << "请输入您想删除的职工编号：";
//		int id;
//		cin >> id;
//		int index = this->IsExist(id);
//		if (index < 0) {
//			cout << endl<<"输入职员编号有误，请输入正确的职员编号！" << endl;
//		}
//		else {
//			delete this->m_EmpArray[index];
//			for (int i = index; i < this->m_EmpNum - 1; i++) {
//				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
//			}
//			this->m_EmpNum--;
//			this->save_Emp();
//			cout << "删除职员成功！" << endl;
//		}
//	}
//	system("pause");
//	system("cls");
//
//}
//
//
////按照职工的编号对职工信息进行修改并保存
//void WorkerManager::mod_Emp() {
//	if (this->m_FileIsEmpty) {
//		cout << "文件不存在或记录为空!" << endl;
//	}
//	else {
//
//		for (int i = 0; i < this->m_EmpNum; i++) {
//			this->m_EmpArray[i]->showInfo();
//		}
//
//		cout << "请输入你要修改的职工编号：";
//		int id;
//		cin >> id;
//		int index = this->IsExist(id);
//		if (index != -1) {
//
//			delete this->m_EmpArray[index];
//
//			int newId = 0;
//			string name="";
//			int departmentId=0;
//
//			cout <<endl<< "修改信息：" << endl;
//			cout << "修改职工编号为：";
//			cin >> newId;
//		
//			cout << "修改职工姓名为：";
//			cin >> name;
//		
//			cout << "修改职工岗位为：[1]普通员工  [2]经理  [3]老板： ";
//			cin >> departmentId;
//
//			Worker* worker = NULL;
//			switch (departmentId) {
//			case 1:
//				worker = new Employee(newId,name,departmentId);
//				break;
//			case 2:
//				worker = new Manager(newId, name, departmentId);
//				break;
//			case 3:
//				worker = new Boss(newId, name, departmentId);
//				break;
//			default:
//				break;
//			}
//
//			this->m_EmpArray[index] = worker;
//			this->save_Emp();
//			cout << "修改职工信息成功！" << endl;
//
//		}
//		else {
//			cout << endl << "输入职员编号有误，请输入正确的职员编号！" << endl;
//		}
//		
//	}
//	system("pause");
//	system("cls");
//}
//
//
////按照职工编号或职工姓名进行查找
//void WorkerManager::find_Emp() {
//	if (this->m_FileIsEmpty) {
//		cout << "文件不存在或记录为空！" << endl;
//	}
//	else {
//		int choice = 0;
//		cout << "您需要哪种查找方式：[1]按姓名查找  [2]按编号查找：";
//		cin >> choice;
//		if (choice == 1) {
//			cout << endl << "请输入您要查找的职工姓名：";
//			string name;
//			cin >> name;
//			bool flag = true;
//			for (int i = 0; i < this->m_EmpNum; i++) {
//				if (this->m_EmpArray[i]->name == name) {
//					
//					this->m_EmpArray[i]->showInfo();
//					cout << endl;
//					flag = false;
//				
//				}
//			}
//			if (flag) {
//				cout << "未找到姓名为 " << name << " 的职工！" << endl;
//			}
//		}
//		else if (choice == 2) {
//			cout << endl << "请输入您要查找的职工编号：";
//			int id;
//			cin >> id;
//
//			int ret = this->IsExist(id);
//			if (ret != -1) {
//				this->m_EmpArray[ret]->showInfo();
//			}
//			else {
//				cout << "未找到编号为 " << id << " 的职工！" << endl;
//			}
//			
//		}
//		else {
//			cout << "输入有误，请输入正确选项！" << endl;
//		}
//	}
//	system("pause");
//	system("cls");
//}
//
//
////按照职工编号进行排序
//void WorkerManager::sort_Emp() {
//	if (this->m_FileIsEmpty) {
//		cout << "文件不存在或记录为空！" << endl;
//	}
//	else {
//		cout << "您想要如何排序：[1]升序  [2]降序：";
//		int choice;
//		cin >> choice;
//		//使用冒泡排序实现升序、降序
//		for (int i = 0; i < this->m_EmpNum - 1; i++) {
//			bool flag = true;
//			if (choice == 1) {
//				for (int j = 0; j < this->m_EmpNum - i - 1; j++) {
//					if (this->m_EmpArray[j]->id > this->m_EmpArray[j + 1]->id) {
//						Worker* temp = this->m_EmpArray[j];
//						this->m_EmpArray[j] = this->m_EmpArray[j + 1];
//						this->m_EmpArray[j + 1] = temp;
//						flag = false;
//					}
//				}
//			}
//			if (choice == 2) {
//				for (int j = 0; j < this->m_EmpNum - i - 1; j++) {
//					if (this->m_EmpArray[j]->id < this->m_EmpArray[j + 1]->id) {
//						Worker* temp = this->m_EmpArray[j];
//						this->m_EmpArray[j] = this->m_EmpArray[j + 1];
//						this->m_EmpArray[j + 1] = temp;
//						flag = false;
//					}
//				}
//			}
//			if (flag) {
//				break;
//			}
//		}
//		this->save_Emp();
//		cout << "排序成功!" << endl;
//	}
//	system("pause");
//	system("cls");
//}
//
////清空文档
//void WorkerManager::clean_Emp() {
//	if (this->m_FileIsEmpty) {
//		cout << "文档已经为空，无须操作！" << endl;
//	}
//	else {
//		cout << "您确定要清空文档？[0]否  [1]是：" ;
//		int choice;
//		cin >> choice;
//		if (choice == 1) {
//			//打开模式 ios::trunc 如果存在，删除文件并重新创建
//			ofstream ofs(FILENAME,ios::trunc); 
//			ofs.close();
//			if (this->m_EmpArray != NULL) {
//				for (int i = 0; i < this->m_EmpNum; i++) {
//					if (this->m_EmpArray[i] != NULL) {
//						delete this->m_EmpArray[i];
//					}
//				}
//			}
//			this->m_EmpNum = 0;
//			delete[]this->m_EmpArray;
//			this->m_EmpArray = NULL;
//			this->m_FileIsEmpty = true;
//			cout << "清空成功！" << endl;
//
//		}
//		else if (choice == 0) {
//
//		}
//		else {
//			cout << "请输入正确选项！" << endl;
//		}
//
//	}
//	system("pause");
//	system("cls");
//}