#include <iostream>
#include "car.h"


int main() {
	auto c = car(); //������������� ������������ ��� �����������
	car c1(c);// ������������� ������������ �����������
	cout << c.getModel() << "    " << c1.getModel() << endl;
	_friend fr;//�������� ������� ���������� ������
	fr.setNewModel(c1, "Mazda");//��������� ����������� ��������� ����� ����� �������������� ������
	cout << c1.getModel() << endl;

	cout << c1; // ����� ��������� � �����
	car c2;
	cin >> c2; // � ���������� �� ������
	cout << c2;

	cout << "getCountPass" << c2.getCountPass() << endl;
	c2.setCountPass(4);
	cout << "getCountPass" << c2.getCountPass() << endl;

	cout << "getCountWheels" << c2.getCountWheels() << endl;
	c2.setCountWheels(13);
	cout << "getCountWheels" << c2.getCountWheels() << endl;


	cout << car::get_count_car() << endl; // ������������� ������������ ������
	return 0;
}