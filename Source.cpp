#include <iostream>
#include "car.h"


int main() {
	auto c = car(); //использования конструктора без параментров
	car c1(c);// использование конструктора копирования
	cout << c.getModel() << "    " << c1.getModel() << endl;
	_friend fr;//создание объекта дружеского класса
	fr.setNewModel(c1, "Mazda");//изменение внутреннего параметра через метод дружественного класса
	cout << c1.getModel() << endl;

	cout << c1; // показ помещения в поток
	car c2;
	cin >> c2; // и извлечение из потока
	cout << c2;

	cout << "getCountPass" << c2.getCountPass() << endl;
	c2.setCountPass(4);
	cout << "getCountPass" << c2.getCountPass() << endl;

	cout << "getCountWheels" << c2.getCountWheels() << endl;
	c2.setCountWheels(13);
	cout << "getCountWheels" << c2.getCountWheels() << endl;


	cout << car::get_count_car() << endl; // использование статического метода
	return 0;
}