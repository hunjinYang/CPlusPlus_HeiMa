/*
问题描述：
添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭地址）最多记录1000人
显示联系人
删除联系人：按照姓名删除
查找联系人：按照姓名
修改联系人：按照姓名
清空联系人：清空所有信息
退出通讯录
*/

/*


#include<iostream>
#include<string>
#define MAX 100
using namespace std;

struct Person {
	string m_name;  //姓名
	int m_sex; //1表示男 0表示女
	int m_age;  //年龄
	string m_phone;  //电话
	string m_addr;  //地址
};

struct AddressBooks {
	struct Person personArray[MAX];
	int m_size;
};

void showMenu();  //显示菜单界面
void addPerson(AddressBooks* abs); //添加联系人
void showPerson(const AddressBooks* abs); //显示联系人
int isExistPerson( AddressBooks* abs,string name); //联系人是否存在
void deletePerson(AddressBooks* abs);//删除联系人
void findPerson(AddressBooks* abs); //查找联系人
void modifyPerson(AddressBooks* abs); //修改联系人
void cleanPerson(AddressBooks* abs);//清空联系人

int main()
{
	AddressBooks abs;
	abs.m_size = 0;

	int select = 0;

	while (true) {
		showMenu();
		cout << "您的选择是：";
		cin >> select;
		switch (select) {
		case 1:      //1、添加联系人
			addPerson(&abs);
			break;
		case 2:       //2、显示联系人
			showPerson(&abs);
			break;
		case 3:       // 3、删除联系人
			deletePerson(&abs);
			break;
		case 4:      //4、查找联系人
			findPerson(&abs);
			break;
		case 5:      //5、修改联系人
			modifyPerson(&abs);
			break;
		case 6:      //6、清空联系人
			cleanPerson(&abs);
			break;
		case 0:        //0、退出通讯录
			cout << "*****  欢迎您下次使用本系统^-^  *****" << endl;
			system("pause");
			return 0;
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");

	return 0;
}

void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}

void addPerson(AddressBooks* abs) {
	if (abs->m_size == MAX) {
		cout << "!!!  通讯录已满  !!!"<<endl;
	
	}
	else {
		cout << "请输入姓名：";
		cin >> abs->personArray[abs->m_size].m_name;

		cout << "请输入性别（男1，女2）：";
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_size].m_sex = sex;
				break;
			}
			cout << "输入有误，请重新输入：";
		}

		cout << "请输入年龄：";
		cin >> abs->personArray[abs->m_size].m_age;
		cout << "请输入联系电话：";
		cin >> abs->personArray[abs->m_size].m_phone;
		cout << "请输入联系地址：";
		cin >> abs->personArray[abs->m_size].m_addr;

		abs->m_size++;  //更新人员个数

		cout <<endl<< "*****  联系人添加成功!  *****" << endl;

		
	}
	system("pause"); //请按任意键继续
	system("cls");//清屏操作
}

void showPerson(const AddressBooks* abs) {
	if (abs->m_size == 0) {
		cout << "*****  通讯录为空!!!  *****" << endl;
	
		
	}
	else {
		for (int i = 0; i < abs->m_size; i++) {
			cout << endl << "姓名：" << abs->personArray[i].m_name << "\t"
				<< "性别：" << ((abs->personArray[i].m_sex == 1)?"男":"女") << "\t"
				<<"年龄：" << abs->personArray[i].m_age << "\t"
				<< "电话：" << abs->personArray[i].m_phone << "\t"
				<< "地址：" << abs->personArray[i].m_addr << "\t"
				<< endl;
		}
		
	}
	system("pause"); //请按任意键继续
	system("cls");//清屏操作
}

int isExistPerson( AddressBooks* abs, string name) //联系人是否存在
{
	if (abs->m_size == 0) {
		return -1;
	}
	else {
		
		for (int i = 0; i < abs->m_size; i++) {
			if (name == abs->personArray[i].m_name) {
				return i;  //找到返回下标
			}
		}
		return -1; //遍历结束没找到
	}
}

void deletePerson(AddressBooks* abs)//删除联系人
{
	if (abs->m_size == 0) {
		cout << "*****  通讯录为空!!!  *****" << endl;
	}
	else {
		
		string name;
		cout << "请输入你要删除的联系人姓名：";
		cin >> name;
		int ret = isExistPerson(abs, name);
		if ( ret == -1) {
			cout << "查无此人！"<<endl;
		}
		else {
			for (int i = ret; i < (abs->m_size - ret); i++) {
				abs->personArray[i] = abs->personArray[i + 1];
			}
			abs->m_size--;
			cout << "*****  联系人" << name << "删除成功!*****" << endl;
		}
		
	}
	system("pause"); //请按任意键继续
	system("cls");//清屏操作
}

void findPerson(AddressBooks* abs) //查找联系人
{
	if (abs->m_size == 0) {
		cout << "*****  通讯录为空!!!  *****" << endl;
	}
	else {
		string name;
		cout << "请输入您要查找的联系人姓名：";
		cin >> name;
		int ret = isExistPerson(abs,name);
		if (ret == -1) {
			cout << "查无此人！" << endl;
		}
		else {
			cout << endl << "姓名：" << abs->personArray[ret].m_name << "\t"
				<< "性别：" << ((abs->personArray[ret].m_sex == 1) ? "男" : "女") << "\t"
				<< "年龄：" << abs->personArray[ret].m_age << "\t"
				<< "电话：" << abs->personArray[ret].m_phone << "\t"
				<< "地址：" << abs->personArray[ret].m_addr << "\t"
				<< endl;
		}
	}
	system("pause"); //请按任意键继续
	system("cls");//清屏操作
}


void modifyPerson(AddressBooks* abs) //修改联系人
{
	if (abs->m_size == 0) {
		cout << "*****  通讯录为空!!!  *****" << endl;
	}
	else {
		string name;
		cout << "请输入您要修改的联系人姓名：";
		cin >> name;
		int ret = isExistPerson(abs,name);
		if (ret == -1) {
			cout << "查无此人！" << endl;
		}
		else {

			cout << endl << "姓名：" << abs->personArray[ret].m_name << "\t"
				<< "性别：" << ((abs->personArray[ret].m_sex == 1) ? "男" : "女") << "\t"
				<< "年龄：" << abs->personArray[ret].m_age << "\t"
				<< "电话：" << abs->personArray[ret].m_phone << "\t"
				<< "地址：" << abs->personArray[ret].m_addr << "\t"
				<< endl;

			cout <<endl<< "请输入姓名：";
			cin >> abs->personArray[ret].m_name;

			cout << "请输入性别（男1，女2）：";
			int sex = 0;
			while (true) {
				cin >> sex;
				if (sex == 1 || sex == 2) {
					abs->personArray[ret].m_sex = sex;
					break;
				}
				cout << "输入有误，请重新输入：";
			}

			cout << "请输入年龄：";
			cin >> abs->personArray[ret].m_age;
			cout << "请输入联系电话：";
			cin >> abs->personArray[ret].m_phone;
			cout << "请输入联系地址：";
			cin >> abs->personArray[ret].m_addr;

			cout <<endl<< "*****  修改成功!!!  *****" << endl;

		}
	}
	system("pause"); //请按任意键继续
	system("cls");//清屏操作
}

void cleanPerson(AddressBooks * abs)  //清空通讯录
{
	abs->m_size = 0;
	cout << endl << "*****  通讯录已清空!!!  *****" << endl;
	system("pause");
	system("cls");
}

*/