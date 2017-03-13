#include <iostream>
#include <windows.h>
using namespace std;
void randombeep();

int main() {
	
	for (int i = 0;i < 500;i++)
		randombeep();
}


void randombeep() {
	int number = rand() % 400;
	int number2 = rand() % 1400;
	Beep(number, number2);
}