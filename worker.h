#pragma once
#include<iostream>
#include<string>
using namespace std;

class Worker {  //ְ��������
public:
	virtual void showInfo() = 0;  //��ʾ������Ϣ
	
	virtual string getDeptName() = 0; //��ȡ��λ����


	int id; //ְ�����
	string name; //ְ������
	int departmentId;  //ְ�����ű��
};