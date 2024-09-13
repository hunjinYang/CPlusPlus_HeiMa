//#include"workerManager.h"
//
//
//WorkerManager::WorkerManager() {    //���캯��
//	ifstream ifs(FILENAME, ios::in);
//
//	//���һ���ļ�������
//	if (!ifs.is_open()) {
//		//cout << "�ļ�������" << endl;
//		this->m_EmpNum = 0;
//		this->m_EmpArray = NULL;
//		this->m_FileIsEmpty = true;
//		ifs.close();
//		return;
//	}
//
//	//�ļ�����
//	char ch;
//	ifs >> ch;
//	if (ifs.eof()) {    //�ļ����ڵ���û�м�¼
//		//cout << "�ļ�Ϊ��" << endl;
//		this->m_EmpNum = 0;
//		this->m_EmpArray = NULL;
//		this->m_FileIsEmpty = true;
//		ifs.close();
//		return;
//	}
//
//	//�ļ����ڣ����Ҽ�¼����
//	int num = this->get_EmpNum();   //�õ�ְ������
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
//WorkerManager::~WorkerManager() {   //��������
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
//void WorkerManager::showMenu() {     //չʾ�˵�
//	cout << "*********************************************" << endl;
//	cout << "*********  ��ӭʹ��ְ������ϵͳ��  **********" << endl;
//	cout << "*************  0.�˳��������  **************" << endl;
//	cout << "*************  1.����ְ����Ϣ  **************" << endl;
//	cout << "*************  2.��ʾְ����Ϣ  **************" << endl;
//	cout << "*************  3.ɾ��ְ����Ϣ  **************" << endl;
//	cout << "*************  4.�޸�ְ����Ϣ  **************" << endl;
//	cout << "*************  5.����ְ����Ϣ  **************" << endl;
//	cout << "*************  6.���ձ������  **************" << endl;
//	cout << "*************  7.��������ĵ�  **************" << endl;
//	cout << "*********************************************" << endl << endl;
//	cout << "����������ѡ��";
//}
//
//void WorkerManager::ExitSystem() {
//	cout << "*********  ��л����ʹ�ã��ټ�������  *********" << endl;
//	system("pause");
//	exit(0);
//}
//
//void WorkerManager::add_Emp() {
//	int addNum = 0;  //�û���ӵ�����
//	cout << "��������Ҫ��ӵ�ְ��������";
//	cin >> addNum;
//	if (addNum > 0) {
//		//��������¿ռ��С
//		int newSize = this->m_EmpNum + addNum;
//		//�����¿ռ�
//		Worker** w = new Worker * [newSize];
//
//		if (this->m_EmpArray != NULL) {
//			for (int i = 0; i < this->m_EmpNum; i++) {
//				w[i] = this->m_EmpArray[i];
//			}
//		}
//
//		//���������ְ��
//		for (int i = 0; i < addNum; i++) {
//			int id;
//			cout << endl << "��������ӵĵ� " << i + 1 << " ����ְ����ţ�";
//			cin >> id;
//
//			string name;
//			cout << "��������ӵĵ� " << i + 1 << " ����ְ��������";
//			cin >> name;
//
//			Worker* w_temp = NULL;
//			int select = 0;
//			cout << "��ѡ���ְ���ĸ�λ��[1]��ͨԱ��  [2]����  [3]�ϰ壺 ";
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
//		//�ɹ���Ӻ󣬱��浽�ļ���
//		cout << endl << endl << "�ɹ���� " << addNum << " ����ְ����" << endl;
//	}
//	else {
//		cout << "��������ȷ������" << endl;
//	}
//	system("pause");
//	system("cls");
//}
//
//void WorkerManager::save_Emp()  //����ְ�����ݵ��ļ���
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
//int WorkerManager::get_EmpNum() //ͳ���ļ�������
//{
//	ifstream ifs(FILENAME, ios::in);
//
//	int id;
//	string name;
//	int departmentId;
//
//	int num = 0; //ͳ�������ı���
//
//	while (ifs >> id && ifs >> name && ifs >> departmentId) {
//		num++;
//	}
//	ifs.close();
//	return num;
//
//}
//
//void WorkerManager::init_Emp()  //��ʼ��ְԱ
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
//	while (ifs >> id && ifs >> name && ifs >> departmentId) {  //������
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
//void WorkerManager::show_Emp()//��ʾְ����Ϣ
//{
//	cout << endl;
//	if (this->m_EmpNum == 0) {
//		cout << "��Ǹ����ϵͳ����ְ����Ϣ��" << endl;
//		system("pause");
//		system("cls");
//		return;
//	}
//	for (int i = 0; i < this->m_EmpNum; i++) {
//		/*cout << "ְ����ţ�" << this->m_EmpArray[i]->id
//			<< "\t������" << this->m_EmpArray[i]->name
//			<< "\t\t���ű�ţ�" << this->m_EmpArray[i]->departmentId
//			<< "\tְ��" << this->m_EmpArray[i]->getDeptName()<<endl<<endl;*/
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
//int WorkerManager::IsExist(int id)  //����ְ��������ж�ְ���Ƿ���ڣ������ڷ����±꣬���򷵻�-1
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
//void WorkerManager::del_Emp()  //����ְ���ı�Ž���ɾ������
//{
//	if (this->m_FileIsEmpty) {
//		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
//	}
//	else {
//
//		for (int i = 0; i < this->m_EmpNum; i++) {
//			this->m_EmpArray[i]->showInfo();
//		}
//
//		cout << endl << "����������ɾ����ְ����ţ�";
//		int id;
//		cin >> id;
//		int index = this->IsExist(id);
//		if (index < 0) {
//			cout << endl<<"����ְԱ���������������ȷ��ְԱ��ţ�" << endl;
//		}
//		else {
//			delete this->m_EmpArray[index];
//			for (int i = index; i < this->m_EmpNum - 1; i++) {
//				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
//			}
//			this->m_EmpNum--;
//			this->save_Emp();
//			cout << "ɾ��ְԱ�ɹ���" << endl;
//		}
//	}
//	system("pause");
//	system("cls");
//
//}
//
//
////����ְ���ı�Ŷ�ְ����Ϣ�����޸Ĳ�����
//void WorkerManager::mod_Emp() {
//	if (this->m_FileIsEmpty) {
//		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
//	}
//	else {
//
//		for (int i = 0; i < this->m_EmpNum; i++) {
//			this->m_EmpArray[i]->showInfo();
//		}
//
//		cout << "��������Ҫ�޸ĵ�ְ����ţ�";
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
//			cout <<endl<< "�޸���Ϣ��" << endl;
//			cout << "�޸�ְ�����Ϊ��";
//			cin >> newId;
//		
//			cout << "�޸�ְ������Ϊ��";
//			cin >> name;
//		
//			cout << "�޸�ְ����λΪ��[1]��ͨԱ��  [2]����  [3]�ϰ壺 ";
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
//			cout << "�޸�ְ����Ϣ�ɹ���" << endl;
//
//		}
//		else {
//			cout << endl << "����ְԱ���������������ȷ��ְԱ��ţ�" << endl;
//		}
//		
//	}
//	system("pause");
//	system("cls");
//}
//
//
////����ְ����Ż�ְ���������в���
//void WorkerManager::find_Emp() {
//	if (this->m_FileIsEmpty) {
//		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
//	}
//	else {
//		int choice = 0;
//		cout << "����Ҫ���ֲ��ҷ�ʽ��[1]����������  [2]����Ų��ң�";
//		cin >> choice;
//		if (choice == 1) {
//			cout << endl << "��������Ҫ���ҵ�ְ��������";
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
//				cout << "δ�ҵ�����Ϊ " << name << " ��ְ����" << endl;
//			}
//		}
//		else if (choice == 2) {
//			cout << endl << "��������Ҫ���ҵ�ְ����ţ�";
//			int id;
//			cin >> id;
//
//			int ret = this->IsExist(id);
//			if (ret != -1) {
//				this->m_EmpArray[ret]->showInfo();
//			}
//			else {
//				cout << "δ�ҵ����Ϊ " << id << " ��ְ����" << endl;
//			}
//			
//		}
//		else {
//			cout << "����������������ȷѡ�" << endl;
//		}
//	}
//	system("pause");
//	system("cls");
//}
//
//
////����ְ����Ž�������
//void WorkerManager::sort_Emp() {
//	if (this->m_FileIsEmpty) {
//		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
//	}
//	else {
//		cout << "����Ҫ�������[1]����  [2]����";
//		int choice;
//		cin >> choice;
//		//ʹ��ð������ʵ�����򡢽���
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
//		cout << "����ɹ�!" << endl;
//	}
//	system("pause");
//	system("cls");
//}
//
////����ĵ�
//void WorkerManager::clean_Emp() {
//	if (this->m_FileIsEmpty) {
//		cout << "�ĵ��Ѿ�Ϊ�գ����������" << endl;
//	}
//	else {
//		cout << "��ȷ��Ҫ����ĵ���[0]��  [1]�ǣ�" ;
//		int choice;
//		cin >> choice;
//		if (choice == 1) {
//			//��ģʽ ios::trunc ������ڣ�ɾ���ļ������´���
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
//			cout << "��ճɹ���" << endl;
//
//		}
//		else if (choice == 0) {
//
//		}
//		else {
//			cout << "��������ȷѡ�" << endl;
//		}
//
//	}
//	system("pause");
//	system("cls");
//}