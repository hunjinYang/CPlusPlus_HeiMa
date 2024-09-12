///*
//每名老师带领5个学生，总共有3名老师
//设计老师、学生结构体
//老师结构体：老师姓名、存放5名学生的数组
//学生结构体：姓名、考试分数
//创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
//打印老师数据及所带学生
//*/
//#include<iostream>
//#include<string>
//using namespace std;
// //学生结构体
//struct Student {
//	string name;  //学生姓名
//	int score;      //学生分数
//};
////老师结构体
//struct Teacher {
//	string name;   //老师姓名
//	struct Student stu[5];   //老师带的学生
//};
//
//void inputData(Teacher t[],int len) { //给老师和学生赋值
//	for (int j = 0; j < len; j++) {
//		cout << "请输入老师姓名：";
//		cin >> t[j].name;
//		for (int i = 0; i < 5; i++) {
//			cout << "请输入" << t[j].name << "老师的第" << i + 1 << "位学生的姓名和成绩：";
//			cin >> t[j].stu[i].name >> t[j].stu[i].score;
//		}
//	}
//}
//
//void printData(const Teacher t[],int len) {
//	for (int j = 0; j < len; j++) {
//		cout << t[j].name << "老师的学生有：" << endl;
//		for (int i = 0; i < 5; i++) {
//			cout << "姓名：" << t[j].stu[i].name << "；分数：" << t[j].stu[i].score << endl;
//		}
//	}
//}
//int main()
//{
//	Teacher t[3];     //创建3名老师的数组
//	int len = sizeof(t) / sizeof(t[0]);
//	  //通过函数给老师和学生赋值
//	inputData(t,len);
//	
//	
//	printData(t,len);
//	
//	
//}