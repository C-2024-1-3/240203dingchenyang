#include"mytriangle.h"
int main()
{
	int side1, side2, side3;//�������߳�
	cout << "��ֱ��������߱߳�" << endl;//�����������߳�
	cin >> side1 >> side2 >> side3;//�������߳�
	int val = is_valid(side1, side2, side3);//�����ж��������Ƿ���Ч�ĺ���
	if (val == true)//�����Ч
	{
		double square = area(side1, side2, side3);//���ü����������
		cout << "����������������Ϊ:" << square << endl;//������
	}
	else//�����Ч
	{
		cout << "����������߳����Ϸ�" << endl;//��ʾ��Ч
	}
	return 0;
}