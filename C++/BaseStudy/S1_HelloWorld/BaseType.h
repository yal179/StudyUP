#pragma once
class BaseType
{
	//���������֡���ĸ���»��߹��ɣ��в��������ֿ�ͷ�����ִ�Сд
	//����������֮�����޸�
	const int number = 10;

	int i = 100;
	int io = 0124;	//�˽��ƣ�����0��ʼ
	int i0x = 0x64;	//ʮ������,0x��ʼ

	long il =1+ 100L;	//��������(δ�Ӻ�׺Ϊint)
	float fn =1+ 100.0F;	//�������㣨δ�Ӻ�׺Ϊdouble��
	unsigned uil = 100UL;

	char aNumber = 'Q';	//�����ַ�����
	char bNumber = 65;
	

	//���������������ʼֵ���������ȷ���ڴ���λ�ú�ռ�ÿռ�
	int age = 1;
	//&ȡ��ַ����ָ��ָ���ڴ���һ���ַ
	int* page = &age;

	//short 2���ֽ�
	//int 2��4�ֽڣ��������أ�һ��Ϊ4�ֽ�
	//long 4�ֽ�
	//unsigned �޷��ţ�
	// �з��ų����� long [int]/signed long [int]	����4 byte
	// long long	����8 byte
	//�з����ַ��� char 1 byte
	//�����ȸ����� float 	����4 byte
	//˫���ȸ����� double	����8 byte
	// long double
	// bool,������1Ϊtrue��0Ϊfalse��c++��0Ϊtrue
// 
	//size_t,��ʾ������Ϊ���������ϵͳ����ֲ����32λϵͳ��λunsigned int,��64λϵͳ��λunsigned long
	//�Զ�������,typedef bigint long long,����ֻ�д����п���ʹ��bigint����ʾlong long
	
	//ת���
	//	/n,����
	//	/r���س�
	//	/t��ˮƽ�Ʊ�
	//	/v����ֱ�Ʊ�
	//	/b,�˸�/f����
	//	

	//�ַ���
	//�ַ���Ϊ�ַ���ͬ���ַ�����'\0'Ϊ��������"A"ռ�����ַ���'A'ռһ���ַ�
};

