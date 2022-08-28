#pragma once
class BaseType
{
	//变量由数字、字母、下划线构成，切不能以数字开头，区分大小写
	//常量，定义之后不能修改
	const int number = 10;

	int i = 100;
	int io = 0124;	//八进制，数字0开始
	int i0x = 0x64;	//十六进制,0x开始

	long il =1+ 100L;	//申明整型(未加后缀为int)
	float fn =1+ 100.0F;	//声明浮点（未加后缀为double）
	unsigned uil = 100UL;

	char aNumber = 'Q';	//声明字符类型
	char bNumber = 65;
	

	//定义变量，并给初始值，定义变量确定内存存放位置和占用空间
	int age = 1;
	//&取地址符，指针指向内存中一块地址
	int* page = &age;

	//short 2个字节
	//int 2或4字节，与机器相关，一般为4字节
	//long 4字节
	//unsigned 无符号，
	// 有符号长整型 long [int]/signed long [int]	　　4 byte
	// long long	　　8 byte
	//有符号字符型 char 1 byte
	//单精度浮点型 float 	　　4 byte
	//双精度浮点型 double	　　8 byte
	// long double
	// bool,布尔，1为true，0为false，c++非0为true
// 
	//size_t,表示计数，为方便程序在系统中移植，在32位系统中位unsigned int,在64位系统中位unsigned long
	//自定义类型,typedef bigint long long,定义只有代码中可以使用bigint来表示long long
	
	//转义符
	//	/n,换行
	//	/r，回车
	//	/t，水平制表
	//	/v，垂直制表
	//	/b,退格，/f进格
	//	

	//字符串
	//字符串为字符不同，字符串以'\0'为结束符，"A"占两个字符，'A'占一个字符
};

