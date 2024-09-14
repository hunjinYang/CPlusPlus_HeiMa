//#pragma once
//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T>
//class MyArray {
//public:
//	//有参构造
//	MyArray(int capacity) {
//		this->m_Capacity = capacity;
//		this->m_Size = 0;
//		this->pAddress = new T[capacity];
//		//cout << "有参构造调用" << endl;
//	}
//
//	//拷贝构造
//	MyArray(const MyArray& arr) {
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//		this->pAddress = new T[arr.m_Capacity];
//		for (int i = 0; i < arr.m_Size; i++) {
//			this->pAddress[i] = arr.pAddress[i];
//		}
//	}
//
//	//operator= 防止浅拷贝问题
//	MyArray& operator=(const MyArray& arr) {
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//		//深拷贝
//		if (this->pAddress != NULL) {
//			delete[] this->pAddress;
//			this->pAddress = NULL;
//		}
//		this->pAddress = new T[arr.m_Capacity];
//		for (int i = 0; i < arr.m_Size; i++) {
//			this->pAddress[i] = arr.pAddress[i];
//		}
//		return *this;
//	}
//
//	//为空
//	bool is_Empty() {
//		return this->m_Size == 0;
//	}
//
//	//为满
//	bool is_Full() {
//		return this->m_Size == this->m_Capacity;
//	}
//
//
//	//尾插法
//	void push_Back(const T& val) {
//		//判断容量
//		if (this->is_Full()) {
//			cout << "容量已满，插入失败" << endl;
//			return;
//		}
//		this->pAddress[this->m_Size] = val;
//		this->m_Size++;
//		cout << "插入数据 val = "<<val<<" 成功" << endl;
//
//	}
//
//	//尾删法
//	void pop_Back() {
//		if (this->is_Empty()) {
//			cout << "容量为空，删除失败" << endl;
//			return;
//		}
//		cout << "删除成功" << endl;
//		this->m_Size--;  //逻辑上的删除
//	}
//
//	 //通过下标方式访问数据
//	T& operator[](int index) {
//		return this->pAddress[index];
//	}
//
//	int getCapacity() {
//		return this->m_Capacity;
//	}
//
//	int getSize() {
//		return this->m_Size;
//	}
//
//	void printArray() {
//		if (this->is_Empty()) {
//			cout << "数组为空，打印失败" << endl;
//		}
//		cout << "数组内容为：";
//		for (int i = 0; i < this->m_Size; i++) {
//			cout << this->pAddress[i] << " ";
//		}
//		cout << endl;
//	}
//
//
//	//析构
//	~MyArray() {
//		if (this->pAddress != NULL) {
//			delete[] this->pAddress;
//			this->pAddress = NULL;
//		}
//		//cout << "析构调用" << endl;
//	}
//private:
//	T* pAddress;  //指向真实的数组
//	int m_Capacity;  //数组容量
//	int m_Size; // 数组大小
//};