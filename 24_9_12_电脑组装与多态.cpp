//#include<iostream>
//#include<string>
//using namespace std;
//
//class CPU {  //CPU����
//public:
//	virtual void calculate() = 0;
//};
//
//class GPU {  //GPU����
//public:
//	virtual void display() = 0;
//};
//
//class Memory {
//public:
//	virtual void storage() = 0;
//};
//
//class Computer {
//public:
//	Computer(CPU* cpu, GPU* gpu, Memory* memory) {
//		this->cpu = cpu;
//		this->gpu = gpu;
//		this->memory = memory;
//	}
//	void doWork() {
//		cpu->calculate();
//		gpu->display();
//		memory->storage();
//	}
//	~Computer() {
//		if (cpu != NULL) {
//			delete cpu;
//			cout << "delete cpu" << endl;
//			cpu = NULL;
//		}
//		if (gpu != NULL) {
//			delete gpu;
//			cout << "delete gpu" << endl;
//			gpu = NULL;
//		}
//		if (memory != NULL) {
//			delete memory;
//			cout << "delete memory" << endl;
//			memory = NULL;
//		}
//	}
//private:
//	CPU* cpu;
//	GPU* gpu;
//	Memory* memory;
//};
//
//class IntelCPU : public CPU {
//public:
//	void calculate() {
//		cout << "IntelCPU��ʼ������" << endl;
//	}
//};
//
//class AMDCPU : public CPU {
//public:
//	void calculate() {
//		cout << "AMDCPU��ʼ������" << endl;
//	}
//};
//
//class NVIDIAGPU : public GPU {
//public:
//	void display() {
//		cout << "NVIDIAGPU��ʼչʾ��" << endl;
//	}
//};
//
//class IntelGPU : public GPU {
//public:
//	void display() {
//		cout << "IntelGPU��ʼչʾ��" << endl;
//	}
//};
//
//class AMDGPU : public GPU {
//public:
//	void display() {
//		cout << "AMDGPU��ʼչʾ��" << endl;
//	}
//};
//
//class CrucialMemory : public Memory {
//public:
//	void storage() {
//		cout << "Ӣ��ڴ�����ʼ�洢��" << endl;
//	}
//};
//
//class KingstonMemory : public Memory {
//public:
//	void storage() {
//		cout << "��ʿ���ڴ�����ʼ�洢��" << endl;
//	}
//};
//
//void test01() {
//	CPU* cpu = new IntelCPU;
//	GPU* gpu = new NVIDIAGPU;
//	Memory* memory = new KingstonMemory;
//	Computer* computer = new Computer(cpu,gpu,memory);
//	computer->doWork();
//	delete computer;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}