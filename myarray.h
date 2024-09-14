#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArray {
public:
	//�вι���
	MyArray(int capacity) {
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[capacity];
		//cout << "�вι������" << endl;
	}

	//��������
	MyArray(MyArray& arr) {
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < arr.m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= ��ֹǳ��������
	MyArray& operator=(MyArray& arr) {
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//���
		if (this->pAddress != NULL) {
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < arr.m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//Ϊ��
	bool is_Empty() {
		return this->m_Size == 0;
	}

	//Ϊ��
	bool is_Full() {
		return this->m_Size == this->m_Capacity;
	}


	//β�巨
	void push_Back(const T& val) {
		//�ж�����
		if (this->is_Full()) {
			cout << "��������������ʧ��" << endl;
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
		cout << "�������� val = "<<val<<" �ɹ�" << endl;

	}

	//βɾ��
	void pop_Back() {
		if (this->is_Empty()) {
			cout << "����Ϊ�գ�ɾ��ʧ��" << endl;
			return;
		}
		cout << "ɾ���ɹ�" << endl;
		this->m_Size--;  //�߼��ϵ�ɾ��
	}

	 //ͨ���±귽ʽ��������
	T& operator[](int index) {
		return this->pAddress[index];
	}

	int getCapacity() {
		return this->m_Capacity;
	}

	int getSize() {
		return this->m_Size;
	}

	void printArray() {
		if (this->is_Empty()) {
			cout << "����Ϊ�գ���ӡʧ��" << endl;
		}
		cout << "��������Ϊ��";
		for (int i = 0; i < this->m_Size; i++) {
			cout << this->pAddress[i] << " ";
		}
		cout << endl;
	}


	//����
	~MyArray() {
		if (this->pAddress != NULL) {
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
		//cout << "��������" << endl;
	}
private:
	T* pAddress;  //ָ����ʵ������
	int m_Capacity;  //��������
	int m_Size; // �����С
};