#include <iostream>
#include <windows.h>
using namespace std;
void randombeep();

int main() {
	
	for (int i = 0;i < 500;i++)
		randombeep();
}


void randombeep() {
	int number = rand() % 600;
	int number2 = rand() % 899;
	Beep(number, number2);
}//Main ( Ignore This Blake Its Isaak)
