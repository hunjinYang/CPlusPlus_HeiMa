#pragma once
#include"worker.h"
#include<iostream>
#include<string>
using namespace std;

class Employee : public Worker {   //��ͨԱ��
public:
	Employee(int id,string name,int departmentId); //�вι��캯��
	virtual void showInfo();    //��ʾ������Ϣ
	virtual string getDeptName(); //��ȡְ����λ����

};