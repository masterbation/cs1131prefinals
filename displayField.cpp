#include <iostream>
using namespace std;

void displayField();
//116x18
string field[20] = {" .____________________________________________________________________________________________________________________.",
					" |                                                                                                                    |",
					" |                                                                                                                    |",
					" |                                                                                                                    |",
					" |                                                                                                                    |",
					" |                                                                                                                    |",
					" |            ________                                                                            ________            |",
					" |           /        \\                                                                          /        \\           |",
					" |          /   _______\\                                                                        /_______   \\          |",
					" |         /   /  _ _|  \\   ()                                                            ()   /  |0 0  \\   |         |",
					" |         |   \\  ___|  |   ||                                                            ||   |  |___  /   |         |",
					" |          \\   Y  - \\_/    ||                                                            ||    \\_/ -  Y   /          |",
					" |          /    \\   /______||                                                           _||______\\___/    \\          |",
					" |         |      \\_/|     |_ /                                                          \\ _|     |         |         |",
					" |         |         |     |||                                                            |||     |         |         |",
					" |         |         |\\____|||                                                            |||____/|         |         |",
					" |         |         |      ||                                                            ||      |         |         |",
					" |_________|         |      ||____________________________________________________________||      |         |_________|",
					" |                                                                                                                    |",
					" .____________________________________________________________________________________________________________________."};

int main() {
	displayField();
}

void displayField() {
	for (int i=0; i<20; i++) cout << field[i] << endl;
}


