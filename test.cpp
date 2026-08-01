//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "hello world" << endl;
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x = 111-11;
//	int y = 234;
//	cout << "x=" << x << endl;
//	cout << "y=" << y << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//#define X "hello"
//#define Y "world"
//int main()
//{
//	cout << X << endl << Y << endl;
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//#define X (1+2)
//const int x = 4;
//int main()
//{
//	cout << X * X << endl;
//	cout << x << endl;
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	short a = 1;
//	int b = 1;
//	long c = 1;
//	long long d = 1;
//	cout << sizeof(a) << endl;
//	cout << sizeof(b) << endl;
//	cout << sizeof(c) << endl;
//	cout << sizeof(d) << endl;
//	cout << sizeof(short) << endl;
//	cout << sizeof(int) << endl;
//	cout << sizeof(long) << endl;
//	cout << sizeof(long long) << endl;
//	return 0;
//}
//#include<iostream>
//#include<iomanip>
//#include<cmath>
//using namespace std;
///*
//float    4字节
//double   8字节
//*/
//#define eps 1e-7
//int main()
//{
//	float a = 13.1415926;
//	double b = 3.1415926222222222222222;
//	double c = 1.5e5;
//	double d = 1.5e-5;
//	cout <<setprecision(10)<< a << endl;
//	cout << setprecision(36) << b << endl;
//	cout << c << endl;
//	cout << d << endl;
//	double x = 1.0 / 22121277733333337 * 22121277733333337;
//	//if(fabs(x - 1) < 1e-7)
//	if (fabs(x - 1) < eps)
//	{
//		cout << "hhhhh" << endl;
//	}
//	cout << x << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	char a = 'y';
//	char b = 'z';
//	cout << a << endl;
//	cout << (int)a << endl;
//	cout << (int)b << endl;
//	cout << b - a << endl;
//	b = 120;
//	cout << b << endl;
//	cout << sizeof(a) << endl;
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	//char a = '\a';//警报
	//cout << a << endl;
	char a = '\n';//换行
	cout << "hello\tworld" << a;//   /t  == TAB			

	return 0;
}