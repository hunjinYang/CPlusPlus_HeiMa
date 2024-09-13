#pragma once
#include"worker.h"
#include<iostream>
#include<string>
using namespace std;

class Manager : public Worker {   //经理类
public:
	Manager(int id, string name, int departmentId); //有参构造函数
	virtual void showInfo();    //显示个人信息
	virtual string getDeptName(); //获取职工岗位名称

};