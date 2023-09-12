#pragma once
class Car
{
private:
	char* model;
	char* color;
	int year;
	double price;
public:
	Car();
	Car(const char* m, const char* c, int y, double p);
	~Car();
	void inputCar();
	void printCar();
	char* getModel();
	char* getColor();
	int getYear();
	double getPrice();
	void setModel(const char* m);
	void setColor(const char* c);
	void setYear(int y);
	void setPrice(double p);

};