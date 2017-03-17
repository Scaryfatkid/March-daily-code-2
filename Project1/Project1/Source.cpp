#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
int main() {
	string inventory[5];

	for (int i = 0; i < 5; i++)
		inventory[i] = "";
	cout << "here's your inventory!" << endl;
	for (int i = 0; i < 5; i++)
		cout << inventory[i] << endl;


	char input = 'a';
	int room = 1;

	while (input != 'q') {


		switch (room) {
		case 1:
			cout << "you're in room 1 you can go south(s) to continue your adventure" << endl;
			cin >> input;
			if (input == 's')
				room = 2;
			break;

		case 2:
			cout << "you are in a room and there is a key on the table" << endl;
			for (int i = 0; i < 1; i++)
				inventory[i] = "key";
			cout << "here's your inventory!" << endl;
			for (int i = 0; i < 1; i++)
				cout << inventory[i] << endl;

			cout << "you are in room 2 and can go east(e) or north(n)" << endl;
			cin >> input;
			if (input = 'n')
				room = 1;
			if (input = 'e')
				room = 3;
			break;

		case 3:
			cout << "you're in room 3 you can go south(s) to continue your adventure" << endl;
			cin >> input;
			if (input == 's')
				room = 4;
			break;

		case 4:
			cout << "you are in room 4 and can go south(s) or north(n)" << endl;
			cin >> input;
			if (input = 'n')
				room = 3;
			if (input = 's')
				room = 5;
			break;

		case 5:
			cout << "you are in room 5 and can go east(e) or north(n) south(s) or west(w)" << endl;
			cin >> input;
			if (input = 'n')
				room = 4;
			if (input = 'e')
				room = 6;
			if (input = 'w')
				room = 10;
			if (input = 's')
				room = 7;
			break;

		case 6:
			cout << "you are in room 6 and can go east(e) or south(s) west(w)" << endl;
			cin >> input;
			if (input = 'e')
				room = 21;
			if (input = 'w')
				room = 5;
			if (input = 's')
				room = 8;
			break;
		case 7:
			cout << "you are in room 7 and can go east(e) or north(n)" << endl;
			cin >> input;
			if (input = 'n')
				room = 5;
			if (input = 'e')
				room = 8;
			break;
		case 8:
			cout << "you are in room 8 and can go west(w) or north(n)or south(s)" << endl;
			cin >> input;
			if (input = 'n')
				room = 6;
			if (input = 'w')
				room = 7;
			if (input = 's')
				room = 16;
			break;
		case 9:
			cout << "you are in room 9 and can go south(s) or north(n) west(w)" << endl;
			cin >> input;
			if (input = 'n')
				room = 11;
			if (input = 'w')
				room = 21;
			if (input = 's')
				room = 15;
			break;
		case 10:
			cout << "you are in room 10 and can go east(e) or south(s)" << endl;
			cin >> input;
			if (input = 'e')
				room = 5;
			if (input = 's')
				room = 18;

		case 11:
			cout << "you are in room 11 and can go south(s) or north(n)" << endl;
			cin >> input;
			if (input = 'n')
				room = 12;
			if (input = 's')
				room = 9;

		case 12:
			cout << "you are in room 12 and can go south(s) or west(w)" << endl;
			cin >> input;
			if (input = 'w')
				room = 13;
			if (input = 's')
				room = 11;

		case 13:
			cout << "you are in room 13 can go east(e) or north(n)" << endl;
			cin >> input;
			if (input = 'n')
				room = 14;
			if (input = 'e')
				room = 12;

		case 14:
			cout << "you died by the magnificent ymerej " << endl;
			input = 'q';

		case 15:
			cout << "you are in room 15 and can go south(s) or north(n)" << endl;
			cin >> input;
			if (input = 'n')
				room = 9;
			if (input = 's')
				room = 17;

		case 16:
			cout << "you are in room 16 and can go north(n)" << endl;
			cin >> input;
			if (input = 'n')
				room = 17;
			break;

		case 17:
			cout << "you fall into a pit and reltih,you have died" << endl;
			input = 'q';
			break;

		case 18:
			cout << "youare in room 18 and can go south(s) or north(n)" << endl;
			cin >> input;
			if (input = 'n')
				room = 10;
			if (input = 's')
				room = 19;

		case 19:
			cout << "youare in room 19 and can go or north(n)" << endl;
			cin >> input;
			if (input = 'n')
				room = 18;

		case 20:
			cout << "You have reached the end are are made a king/queen of the kingdom of Snehta " << endl;
			system("pause");

		case 21:
			cout << "you are in a hidden room and find a tissue can go east(e) or west(w)" << endl;

			for (int i = 1; i < 1; i++)
				inventory[i] = "tissue";
			cout << "here's your inventory!" << endl;
			for (int i = 1; i < 1; i++)
				cout << inventory[i] << endl;

			cin >> input;
			if (input = 'e')
				room = 9;
			if (input = 'w')
				room = 6;


		case 22:
			cout << "you go through a tube and you see a light that goes down,you procede to it east(e)" << endl;
			if (input = 'e')
				room = 17;



































































































































































		}//end switch
	}




































































































}//end main

