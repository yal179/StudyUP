//引入头文件,单行注释，#表示编译预处理，作用是在编译之前将头文件引入
#include <iostream>
#include "enum_Info.h"
//不加.h的是现在C++中规定的标准，目的在于使C++代码用于移植和混合嵌入时不受扩展名.h的限制，避免因为.h而造成的额外的处理和修改
//而加.h的是c语言的用法，但是在c++中也支持这种用法
//#include<iostream.h>相当于#include<iostream> using namespace std;即引入命令空间

//先定义，否则main函数找不到,分号表示语句的结束
void Addnumber();

/// <summary>
/// 主函数，一个程序有且只有一个主函数
/// </summary>
/// <returns></returns>
int main() 
{
	//引入命令空间，std为标准
	using namespace std;
	//cout和endl都是std命名空间下的，cout表示输出流，endl表示换行
	cout << "hello world!" << endl;
	//调用函数
	Addnumber();
	//返回
	return 0;
}

//相对于c，c++引入了面向对象编程和泛型编程机制
//多行注释
/* vs编译错误，提示:无法打开包括文件stdio.h ctype.h ucrtd.lib
* 解决方案属性->vc++目录：
* 包含目录：
* c:\program files (x86)\windows kits\10\include\10.0.19041.0\ucrt
* 库目录：
* c:\program files (x86)\windows kits\10\lib\10.0.19041.0\ucrt\x64
*/

//面向过程编程的3种基本结构，顺序、分支和循环。
//面向对象编程的3种基本特性，继承、多态、派生

//头文件.h（.hpp定义和实现放在一起）
//源文件.cpp

//c++编译过程
//cpp文件->编译器->obj目标文件->链接器（链接库文件）->生成可执行程序

//函数，返回值 函数名(参数列表)，没有返回值为void，没有参数列表为()
void Addnumber()
{
	//定义变量,并赋初值
	int num1 = 0, num2(0), result{0};
	std::cout << "input two number,split with space：" << std::endl;;
	using std::cin;
	cin >> num1 >> num2;
	result = num1 + num2;
	std::cout << "result:" << result << std::endl;

	std::string a = "AB V";
	std::string b = "AB V";
	//比较两个string对象时是可以利用“==”的，相等的话，则表达式的返回值为1，不等为0
	bool resul = (a == "AB V");
	std::cout << resul << std::endl;
	//比较字符数组是，比较的是地址
	char c[] = "aaa", d[] = "aaa";
	std::cout << (c==d) << std::endl;

	short A = 512, B, C;
	B = A << 3;
	C = 768 >> 4;
	std::cout << A << std::endl;
	std::cout << B << std::endl;
	std::cout << C << std::endl;


}