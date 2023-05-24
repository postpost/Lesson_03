#include "main.h"
#include <Windows.h>
#include <iostream>
#include <string>

class Counter {
private:
	int start_num = 1;
	
public:

	Counter() {

		this->start_num = 1;
	};

	Counter(int start_num) {
		this->start_num = start_num;
	}

	/*void SetCount(int start_num) {

		this->start_num = start_num;
	}*/

	int Increment() {
		return this->start_num++;
	}

	int Decrement() {
		return this->start_num--;
	}

	int Result() {
		return start_num;
	}

	void Calculate(Counter* count, std::string cmd) {
		
		if (cmd == "+") {
			Increment();
		}
		else if (cmd == "-") {
			Decrement();
		}
		else if (cmd == "=") {
			std::cout << Result() << std::endl;
		}
		else {
			count->Close();
		}
	}

	void Close() {
		std::cout << "�� ��������!" << std::endl;
	}
};

int main() {

	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	std::string cmd;
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
	std::cin >> cmd;
	if (cmd == "��") {
		int start_num = 0;
		std::cout << "������� ��������� �������� ��������: ";
		std::cin >> start_num;
		Counter* count_2 = new Counter (start_num);
		do {
			std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
			std::cin >> cmd;
			count_2->Calculate(count_2, cmd);
		} while (cmd != "�");
	}
	else {
		Counter* count = new Counter;
		do {
			std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
			std::cin >> cmd;
			count->Calculate(count, cmd);
		} while (cmd != "�");

	}
	
}