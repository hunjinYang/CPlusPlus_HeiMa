#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
using namespace std;

#define FILENAME "empFile.txt"

class WorkerManager {
public:
	WorkerManager();  //�޲ι���
	~WorkerManager(); //��������

	void showMenu(); //չʾ�˵�

	void ExitSystem();  //�˳�ϵͳ

	void add_Emp();  //����ְ��

	void save_Emp();  //����ְ�����ݵ��ļ���

	int get_EmpNum(); //ͳ���ļ�������

	void show_Emp();//��ʾְ����Ϣ

	void init_Emp();  //��ʼ��ְԱ

	int IsExist(int id);  //����ְ��������ж�ְ���Ƿ���ڣ������ڷ����±꣬���򷵻�-1

	void del_Emp();  //����ְ���ı�Ž���ɾ������

	//����ְ���ı�Ŷ�ְ����Ϣ�����޸Ĳ�����
	void mod_Emp();

	//����ְ����Ż�ְ���������в���
	void find_Emp();

	//����ְ����Ž�������
	void sort_Emp();

	//����ĵ�
	void clean_Emp();
private:
	int m_EmpNum;    //ְԱ����
	Worker** m_EmpArray;   //ְԱ����
	bool m_FileIsEmpty;  //�ж��ļ��Ƿ�Ϊ�յı�־
};