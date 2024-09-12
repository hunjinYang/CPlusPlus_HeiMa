//#include<iostream>
//#include<string>
//using namespace std;
//
//class CPU {  //CPU基类
//public:
//	virtual void calculate() = 0;
//};
//
//class GPU {  //GPU基类
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
//		cout << "IntelCPU开始计算了" << endl;
//	}
//};
//
//class AMDCPU : public CPU {
//public:
//	void calculate() {
//		cout << "AMDCPU开始计算了" << endl;
//	}
//};
//
//class NVIDIAGPU : public GPU {
//public:
//	void display() {
//		cout << "NVIDIAGPU开始展示了" << endl;
//	}
//};
//
//class IntelGPU : public GPU {
//public:
//	void display() {
//		cout << "IntelGPU开始展示了" << endl;
//	}
//};
//
//class AMDGPU : public GPU {
//public:
//	void display() {
//		cout << "AMDGPU开始展示了" << endl;
//	}
//};
//
//class CrucialMemory : public Memory {
//public:
//	void storage() {
//		cout << "英睿达内存条开始存储了" << endl;
//	}
//};
//
//class KingstonMemory : public Memory {
//public:
//	void storage() {
//		cout << "金士顿内存条开始存储了" << endl;
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