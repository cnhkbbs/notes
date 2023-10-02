// 根据以下代码段完善 ?? 处内容及程序内容，以实现规定的输出。

// class Complex
// {
//     public:
//         Complex(double r=0, double i=0):real(r), imag(i){    }
//         Complex operator+( ?? ) const;//重载双目运算符'+'
//         Complex operator-=( ?? ); //重载双目运算符'-='
//         friend Complex operator-( ?? ) const;//重载双目运算符'-'
//         void Display() const;
//     private:
//         double real;
//         double imag;
// };

// void Complex::Display() const
// {
//     cout << "(" << real << ", " << imag << ")" << endl;
// }

// int main()
// {
//     double r, m;
//     cin >> r >> m;
//     Complex c1(r, m);
//     cin >> r >> m;
//     Complex c2(r, m);
//     Complex c3 = c1+c2;
//     c3.Display();
//     c3 = c1-c2;
//     c3.Display();
//     c3 -= c1;
//     c3.Display();
//     return 0;
// }
// 输入格式:
// 输入有两行，分别为两个复数的实部与虚部。

// 输出格式:
// 按样例格式输出结果。

// 输入样例:
// 在这里给出一组输入。例如：

// 4 2
// 3 -5
// 输出样例:
// 在这里给出相应的输出。例如：

// (7, -3)
// (1, 7)
// (-3, 5)
/////////////////////////////////
#include<iostream>
using namespace std;
class Complex
{
    public:
        Complex(double r=0, double i=0):real(r), imag(i){}
        Complex operator+(Complex &t) const//重载双目运算符'+'
        {
        	Complex a(real+t.real,imag+t.imag);
			return a;
		}
        Complex operator-=( Complex &t) //重载双目运算符'-='
        {
			real-=t.real;
			imag-=t.imag;
			return *this;
		}
        friend const Complex operator-(Complex a,Complex b);//重载双目运算符'-'
        void Display() const;
    private:
        double real;
        double imag;
};
const Complex operator-(Complex a,Complex b)
{
	Complex t(a.real-b.real,a.imag-b.imag);
	return t;
}


void Complex::Display() const
{
    cout << "(" << real << ", " << imag << ")" << endl;
}

int main()
{
    double r, m;
    cin >> r >> m;
    Complex c1(r, m);
    cin >> r >> m;
    Complex c2(r, m);
    Complex c3 = c1+c2;
    c3.Display();
    c3 = c1-c2;
    c3.Display();
    c3 -= c1;
    c3.Display();
    return 0;
}
