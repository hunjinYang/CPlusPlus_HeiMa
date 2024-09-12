/*
����������
�����ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ�������������Ա����䡢��ϵ�绰����ͥ��ַ������¼1000��
��ʾ��ϵ��
ɾ����ϵ�ˣ���������ɾ��
������ϵ�ˣ���������
�޸���ϵ�ˣ���������
�����ϵ�ˣ����������Ϣ
�˳�ͨѶ¼
*/

/*


#include<iostream>
#include<string>
#define MAX 100
using namespace std;

struct Person {
	string m_name;  //����
	int m_sex; //1��ʾ�� 0��ʾŮ
	int m_age;  //����
	string m_phone;  //�绰
	string m_addr;  //��ַ
};

struct AddressBooks {
	struct Person personArray[MAX];
	int m_size;
};

void showMenu();  //��ʾ�˵�����
void addPerson(AddressBooks* abs); //�����ϵ��
void showPerson(const AddressBooks* abs); //��ʾ��ϵ��
int isExistPerson( AddressBooks* abs,string name); //��ϵ���Ƿ����
void deletePerson(AddressBooks* abs);//ɾ����ϵ��
void findPerson(AddressBooks* abs); //������ϵ��
void modifyPerson(AddressBooks* abs); //�޸���ϵ��
void cleanPerson(AddressBooks* abs);//�����ϵ��

int main()
{
	AddressBooks abs;
	abs.m_size = 0;

	int select = 0;

	while (true) {
		showMenu();
		cout << "����ѡ���ǣ�";
		cin >> select;
		switch (select) {
		case 1:      //1�������ϵ��
			addPerson(&abs);
			break;
		case 2:       //2����ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:       // 3��ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4:      //4��������ϵ��
			findPerson(&abs);
			break;
		case 5:      //5���޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:      //6�������ϵ��
			cleanPerson(&abs);
			break;
		case 0:        //0���˳�ͨѶ¼
			cout << "*****  ��ӭ���´�ʹ�ñ�ϵͳ^-^  *****" << endl;
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
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}

void addPerson(AddressBooks* abs) {
	if (abs->m_size == MAX) {
		cout << "!!!  ͨѶ¼����  !!!"<<endl;
	
	}
	else {
		cout << "������������";
		cin >> abs->personArray[abs->m_size].m_name;

		cout << "�������Ա���1��Ů2����";
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_size].m_sex = sex;
				break;
			}
			cout << "�����������������룺";
		}

		cout << "���������䣺";
		cin >> abs->personArray[abs->m_size].m_age;
		cout << "��������ϵ�绰��";
		cin >> abs->personArray[abs->m_size].m_phone;
		cout << "��������ϵ��ַ��";
		cin >> abs->personArray[abs->m_size].m_addr;

		abs->m_size++;  //������Ա����

		cout <<endl<< "*****  ��ϵ����ӳɹ�!  *****" << endl;

		
	}
	system("pause"); //�밴���������
	system("cls");//��������
}

void showPerson(const AddressBooks* abs) {
	if (abs->m_size == 0) {
		cout << "*****  ͨѶ¼Ϊ��!!!  *****" << endl;
	
		
	}
	else {
		for (int i = 0; i < abs->m_size; i++) {
			cout << endl << "������" << abs->personArray[i].m_name << "\t"
				<< "�Ա�" << ((abs->personArray[i].m_sex == 1)?"��":"Ů") << "\t"
				<<"���䣺" << abs->personArray[i].m_age << "\t"
				<< "�绰��" << abs->personArray[i].m_phone << "\t"
				<< "��ַ��" << abs->personArray[i].m_addr << "\t"
				<< endl;
		}
		
	}
	system("pause"); //�밴���������
	system("cls");//��������
}

int isExistPerson( AddressBooks* abs, string name) //��ϵ���Ƿ����
{
	if (abs->m_size == 0) {
		return -1;
	}
	else {
		
		for (int i = 0; i < abs->m_size; i++) {
			if (name == abs->personArray[i].m_name) {
				return i;  //�ҵ������±�
			}
		}
		return -1; //��������û�ҵ�
	}
}

void deletePerson(AddressBooks* abs)//ɾ����ϵ��
{
	if (abs->m_size == 0) {
		cout << "*****  ͨѶ¼Ϊ��!!!  *****" << endl;
	}
	else {
		
		string name;
		cout << "��������Ҫɾ������ϵ��������";
		cin >> name;
		int ret = isExistPerson(abs, name);
		if ( ret == -1) {
			cout << "���޴��ˣ�"<<endl;
		}
		else {
			for (int i = ret; i < (abs->m_size - ret); i++) {
				abs->personArray[i] = abs->personArray[i + 1];
			}
			abs->m_size--;
			cout << "*****  ��ϵ��" << name << "ɾ���ɹ�!*****" << endl;
		}
		
	}
	system("pause"); //�밴���������
	system("cls");//��������
}

void findPerson(AddressBooks* abs) //������ϵ��
{
	if (abs->m_size == 0) {
		cout << "*****  ͨѶ¼Ϊ��!!!  *****" << endl;
	}
	else {
		string name;
		cout << "��������Ҫ���ҵ���ϵ��������";
		cin >> name;
		int ret = isExistPerson(abs,name);
		if (ret == -1) {
			cout << "���޴��ˣ�" << endl;
		}
		else {
			cout << endl << "������" << abs->personArray[ret].m_name << "\t"
				<< "�Ա�" << ((abs->personArray[ret].m_sex == 1) ? "��" : "Ů") << "\t"
				<< "���䣺" << abs->personArray[ret].m_age << "\t"
				<< "�绰��" << abs->personArray[ret].m_phone << "\t"
				<< "��ַ��" << abs->personArray[ret].m_addr << "\t"
				<< endl;
		}
	}
	system("pause"); //�밴���������
	system("cls");//��������
}


void modifyPerson(AddressBooks* abs) //�޸���ϵ��
{
	if (abs->m_size == 0) {
		cout << "*****  ͨѶ¼Ϊ��!!!  *****" << endl;
	}
	else {
		string name;
		cout << "��������Ҫ�޸ĵ���ϵ��������";
		cin >> name;
		int ret = isExistPerson(abs,name);
		if (ret == -1) {
			cout << "���޴��ˣ�" << endl;
		}
		else {

			cout << endl << "������" << abs->personArray[ret].m_name << "\t"
				<< "�Ա�" << ((abs->personArray[ret].m_sex == 1) ? "��" : "Ů") << "\t"
				<< "���䣺" << abs->personArray[ret].m_age << "\t"
				<< "�绰��" << abs->personArray[ret].m_phone << "\t"
				<< "��ַ��" << abs->personArray[ret].m_addr << "\t"
				<< endl;

			cout <<endl<< "������������";
			cin >> abs->personArray[ret].m_name;

			cout << "�������Ա���1��Ů2����";
			int sex = 0;
			while (true) {
				cin >> sex;
				if (sex == 1 || sex == 2) {
					abs->personArray[ret].m_sex = sex;
					break;
				}
				cout << "�����������������룺";
			}

			cout << "���������䣺";
			cin >> abs->personArray[ret].m_age;
			cout << "��������ϵ�绰��";
			cin >> abs->personArray[ret].m_phone;
			cout << "��������ϵ��ַ��";
			cin >> abs->personArray[ret].m_addr;

			cout <<endl<< "*****  �޸ĳɹ�!!!  *****" << endl;

		}
	}
	system("pause"); //�밴���������
	system("cls");//��������
}

void cleanPerson(AddressBooks * abs)  //���ͨѶ¼
{
	abs->m_size = 0;
	cout << endl << "*****  ͨѶ¼�����!!!  *****" << endl;
	system("pause");
	system("cls");
}

*/