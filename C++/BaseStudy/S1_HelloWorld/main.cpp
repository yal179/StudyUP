//����ͷ�ļ�,����ע�ͣ�#��ʾ����Ԥ�����������ڱ���֮ǰ��ͷ�ļ�����
#include <iostream>
#include "enum_Info.h"
//����.h��������C++�й涨�ı�׼��Ŀ������ʹC++����������ֲ�ͻ��Ƕ��ʱ������չ��.h�����ƣ�������Ϊ.h����ɵĶ���Ĵ�����޸�
//����.h����c���Ե��÷���������c++��Ҳ֧�������÷�
//#include<iostream.h>�൱��#include<iostream> using namespace std;����������ռ�

//�ȶ��壬����main�����Ҳ���,�ֺű�ʾ���Ľ���
void Addnumber();

/// <summary>
/// ��������һ����������ֻ��һ��������
/// </summary>
/// <returns></returns>
int main() 
{
	//��������ռ䣬stdΪ��׼
	using namespace std;
	//cout��endl����std�����ռ��µģ�cout��ʾ�������endl��ʾ����
	cout << "hello world!" << endl;
	//���ú���
	Addnumber();
	//����
	return 0;
}

//�����c��c++��������������̺ͷ��ͱ�̻���
//����ע��
/* vs���������ʾ:�޷��򿪰����ļ�stdio.h ctype.h ucrtd.lib
* �����������->vc++Ŀ¼��
* ����Ŀ¼��
* c:\program files (x86)\windows kits\10\include\10.0.19041.0\ucrt
* ��Ŀ¼��
* c:\program files (x86)\windows kits\10\lib\10.0.19041.0\ucrt\x64
*/

//������̱�̵�3�ֻ����ṹ��˳�򡢷�֧��ѭ����
//��������̵�3�ֻ������ԣ��̳С���̬������

//ͷ�ļ�.h��.hpp�����ʵ�ַ���һ��
//Դ�ļ�.cpp

//c++�������
//cpp�ļ�->������->objĿ���ļ�->�����������ӿ��ļ���->���ɿ�ִ�г���

//����������ֵ ������(�����б�)��û�з���ֵΪvoid��û�в����б�Ϊ()
void Addnumber()
{
	//�������,������ֵ
	int num1 = 0, num2(0), result{0};
	std::cout << "input two number,split with space��" << std::endl;;
	using std::cin;
	cin >> num1 >> num2;
	result = num1 + num2;
	std::cout << "result:" << result << std::endl;

	std::string a = "AB V";
	std::string b = "AB V";
	//�Ƚ�����string����ʱ�ǿ������á�==���ģ���ȵĻ�������ʽ�ķ���ֵΪ1������Ϊ0
	bool resul = (a == "AB V");
	std::cout << resul << std::endl;
	//�Ƚ��ַ������ǣ��Ƚϵ��ǵ�ַ
	char c[] = "aaa", d[] = "aaa";
	std::cout << (c==d) << std::endl;

	short A = 512, B, C;
	B = A << 3;
	C = 768 >> 4;
	std::cout << A << std::endl;
	std::cout << B << std::endl;
	std::cout << C << std::endl;


}