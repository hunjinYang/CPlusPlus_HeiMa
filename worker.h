#pragma once
#include<iostream>
#include<string>
using namespace std;

class Worker {  //职工抽象类
public:
	virtual void showInfo() = 0;  //显示个人信息
	
	virtual string getDeptName() = 0; //获取岗位名称


	int id; //职工编号
	string name; //职工姓名
	int departmentId;  //职工部门编号
};