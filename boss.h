#pragma once
#include"worker.h"
#include<iostream>
#include<string>
using namespace std;

class Boss : public Worker {   //老板类
public:
	Boss(int id, string name, int departmentId); //有参构造函数
	virtual void showInfo();    //显示个人信息
	virtual string getDeptName(); //获取职工岗位名称

};