#pragma once

class Vehicle
{
private:
	int Year;

public:
	int Price;

	// Constructor
	Vehicle();
	Vehicle(int _Year, int _Price);

	// Destruct
	~Vehicle();

	// Method
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int newYear);
};