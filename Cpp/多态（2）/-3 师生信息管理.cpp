// 给出下面的一个基类框架
// class Person
// {
// protected:
// int NO;//编号
// public:
// virtual void display()=0;//输出相关信息
// }
// 以Person为基类，构建出Student、Teacher两个类。
// 生成上述类并编写主函数，要求主函数中有一个基类Person指针数组，数组元素不超过10个。
// Person *pp[10];
// 主函数根据输入的信息，相应建立Student, Teacher类对象，对于Student给出期末5门课的成绩（为整数，缺考的科目填-1）， 对于Teacher则给出近3年，每年发表的论文数量。
// 输入格式：每个测试用例占一行，第一项为人员类型，1为Student,2为Teacher.接下来为编号（0-9999），接下来Student是5门课程成绩，Teacher是3年的论文数。最后一行为0，表示输入的结束。
// 要求输出编号，以及Student缺考的科目数和已考科目的平均分(保留1位小数，已考科目数为0时，不输出平均分)，Teacher的3年论文总数。
// 提示：应用虚函数实现多态

// 输入样例
// 1 19 -1 -1 -1 -1 -1
// 1 125 78 66 -1 95 88
// 2 68 3 0 7
// 2 52 0 0 0
// 1 6999 32 95 100 88 74
// 0

// 输出样例
// 19 5
// 125 1 81.8
// 68 10
// 52 0
// 6999 0 77.8
/////////////////////////////////////////////////
#include<iostream>
#include<iomanip>
using namespace std;
class Person {
	protected:
		int NO;//编号
	public:
		virtual void display() = 0;
};
class Student: public Person {
	public:
		Student(int NO) {
			this->NO = NO;
		}
		double avg() {
			return sum / oktest;
		}
		void write(int t) {
			if (t > -1) {
				sum += t;
				oktest += 1;
			} else {
				quittest += 1;
			}
		}
		void display() {
			if (quittest != 5) {
				cout << NO << " " << quittest << " "  << fixed << setprecision(1) << avg() << endl;
			} else {
				cout << NO << " " << quittest << endl;
			}
		}
	private:
		int sum = 0;
		double oktest = 0;
		int quittest = 0;
};
class Teacher: public Person {
	public:
		Teacher(int NO) {
			this->NO = NO;
		}
		void get(int t) {
			sum += t;
		}
		void display() {
			cout << NO << " " << sum << endl;
		}
	private:
		int sum = 0;
};
int main() {
	int kind, t, no;
	cin >> kind;
	for (int i = 0; kind > 0; i++) {
		if (kind == 1) {
			cin >> no;
			Student a(no);
			for (int j = 0; j < 5; j++) {
				cin >> t;
				a.write(t);
			}
			a.display();
		} else if (kind == 2) {
			cin >> no;
			Teacher b(no);
			for (int j = 0; j < 3; j++) {
				cin >> t;
				b.get(t);
			}
			b.display();
		}
		cin >> kind;
	}
}
