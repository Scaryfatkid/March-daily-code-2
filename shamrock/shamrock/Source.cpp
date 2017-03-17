#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;
	string inventory[6];
	for (int i = 0;i < 6;i++)
		inventory[i] = "";

	cout << "pls get shamrock" << endl;
	getline(cin, input);
	if (input.compare("shamrock") == 0)
		inventory[3] = "shamrock";
	cout << endl << endl;
	if (inventory[3].compare("shamrock") == 0)
		cout << "you got a pot of gold! yay for you....." << endl << endl;
	else
		cout << "go away you slobbering idiot" << endl;
		system("pause");


}