#include "car.h"

car::car() {
	brand = "default";
	model = "default";
	power = 0.;
	dimension.height = 0;
	dimension.width = 0;
	dimension.lenght = 0;
	count++;
}

car::car(string b, string m, float p, int h, int w, int l) {
	brand = b;
	model = m;
	power = p;
	dimension.height = h;
	dimension.width = w;
	dimension.lenght = l;
	count++;
}

car::~car() {
	count--;
}

car::car(const car& right) {
	*this = right;
	count++;
}

int car::count = 0;

void _friend::setNewModel(car& c, string m) {
	c.model = m;	
}

std::ostream &operator << (std::ostream &output, const car &a) {
	output << "Brand: " << a.brand << endl
		<< "Marka: " << a.model << endl
		<< "Power: " << a.power << endl
		<< "Height: " << a.dimension.height << endl
		<< "Width: " << a.dimension.width << endl
		<< "Lenght: " << a.dimension.lenght << endl
		<< "=========end block information=============" << endl;
		
	return output;
}

std::istream &operator >> (std::istream &input, car &a) {
	input >> a.brand;
	input >> a.model;
	input >> a.power;
	input >> a.dimension.height;
	input >> a.dimension.width;
	input >> a.dimension.lenght;
	return input;
}