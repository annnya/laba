#include <iostream>
#include <string>

using namespace std;

class _friend;

class A {
public:
	int count_pass;

	void setCountPass(int n) { this->count_pass = n; }
	int getCountPass() { return count_pass; }
};

class B {
public:
	int count_wheels;

	void setCountWheels(int n) { this->count_wheels = n; }
	int getCountWheels() { return count_wheels; }
};

//множественное наследование, класс car забирает все из классов А и В
class car: public A, public B {
	static int count;
	struct dimensions {
		int height;
		int width;
		int lenght;
	};
public:
	car();
	car(const car& right);
	car(string b, string m, float p, int h, int w, int l);

	~car();

	static int get_count_car() { return count; }
	//friend class
	friend _friend;
	//перегрузка оператора помещения в поток и извлечения из потока
	friend std::ostream &operator << (std::ostream &, const car&);
	friend std::istream &operator >> (std::istream &, car&);

	//SET
	void setBrand(string b) { this->brand = b; }
	void setModel(string m) { this->model = m; }
	void setPower(float p) { this->power = p; }
	void setHeight(int h) { this->dimension.height = h; }
	void setWidth(int w) { this->dimension.width = w; }
	void setLength(int l) { this->dimension.lenght = l; }
	//GET
	string getBrand() { return this->brand; }
	string getModel() { return this->model; }
	float getPower() { return this->power; }
	int getHeight() { return this->dimension.height; }
	int getWidth() { return this->dimension.width; }
	int getLength() { return this->dimension.lenght; }

private:
	string brand;
	string model;
	float power;
	dimensions dimension;
};

class _friend {
public:
	//изменение private поле класса car без использования set метода
	void setNewModel(car &c, string m);
};