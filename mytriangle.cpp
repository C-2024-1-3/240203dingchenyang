#include"mytriangle.h"
bool is_valid(double side1, double side2, double side3)//�ж��������Ƿ���Ч
{
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)//����֮�ʹ��ڵ�����
	{
		return true;//����true
	}
	else
	{
		return false;//����false
	}
}
double area(double side1, double side2, double side3)//�������
{
	double s = (side1 + side2 + side3) / 2;//�����ʽ
	double square = sqrt(s * (s - side1) * (s - side2) * (s - side3));//�����ʽ
	return square;//���������С
}