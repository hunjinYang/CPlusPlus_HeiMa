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
	WorkerManager();  //无参构造
	~WorkerManager(); //析构函数

	void showMenu(); //展示菜单

	void ExitSystem();  //退出系统

	void add_Emp();  //增加职工

	void save_Emp();  //保存职工数据到文件中

	int get_EmpNum(); //统计文件中人数

	void show_Emp();//显示职工信息

	void init_Emp();  //初始化职员

	int IsExist(int id);  //按照职工编号来判断职工是否存在，若存在返回下标，否则返回-1

	void del_Emp();  //按照职工的编号进行删除操作

	//按照职工的编号对职工信息进行修改并保存
	void mod_Emp();

	//按照职工编号或职工姓名进行查找
	void find_Emp();

	//按照职工编号进行排序
	void sort_Emp();

	//清空文档
	void clean_Emp();
private:
	int m_EmpNum;    //职员个数
	Worker** m_EmpArray;   //职员数组
	bool m_FileIsEmpty;  //判断文件是否为空的标志
};