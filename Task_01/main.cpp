#include "main.h"
#include <iostream>


class Calculator {
private:

	double num1;
	double num2;

public:

	void SetNums(double num1, double num2) {
		this->num1 = num1;
		this->num2 = num2;
	}

	double Add() {

		return this->num1 + this->num2;
	}
	double multiply() {

		return this->num1 * this->num2;
	}
	double substract_1_2() {

		return this->num1 - this->num2;
	}
	double substract_2_1() {
		
		return this->num2 - this->num1;
	}
	double divide_1_2() {
	
		return this->num1 / this->num2;
	}
	double divide_2_1() {
	
		return this->num2 / this->num1;
	}

	bool set_num1(double num1) {
		if (num1 != 0) {
			this->num1 = num1;
			return true;
		}
		else {
			std::cout << "Неверный ввод!" << std::endl;
			return false;
		}
	}

	bool set_num2(double num2) {
		if (num2 != 0) {
			this->num2 = num2;
			return true;
		}
		else {
			std::cout << "Неверный ввод!" << std::endl;
			return false;
		}
	}

};

int main() {

	setlocale(LC_ALL, "ru");

	Calculator calc;
	double num1 = 0, num2 = 0;
	bool positive_num = true;

	do {

		do {
			std::cout << "Введите num1: ";
			std::cin >> num1;
		} while (positive_num != calc.set_num1(num1));

		do {
			std::cout << "Введите num2: ";
			std::cin >> num2;
		} while (positive_num != calc.set_num2(num2));
	
		calc.SetNums(num1, num2);

		std::cout << "num1 + num2 = " << calc.Add() << '\n'
			<< "num1 - num2 = " << calc.substract_1_2() << '\n'
			<< "num2 - num1 = " << calc.substract_2_1() << '\n'
			<< "num1 * num2 = " << calc.multiply() << '\n'
			<< "num1 / num2 = " << calc.divide_1_2() << '\n';
	
	} while (true);
	

}
