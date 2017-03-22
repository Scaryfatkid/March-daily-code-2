#include <iostream>
#include <string>
using namespace std;
int main() {
	
	string inventory[6];
	for (int i = 0;i < 6;i++)
		cin>>inventory[i] ;


	if (inventory[2].compare("shamrock") == 0)
		cout << "you got a pot of gold! yay for you....." << endl << endl;
	else
		cout << "go away you slobbering idiot" << endl;
		system("pause");


}