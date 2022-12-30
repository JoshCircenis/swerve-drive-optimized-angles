#include<iostream>

using namespace std;

int main() {
	int desired;
	int current;
	cout << "Enter current angle: ";
	cin >> current;
	cout << endl;
	cout << "Enter desired angle: ";
	cin >> desired;
	cout << endl;
	int angle1 = (desired - (current % 2048));
	int angle2 = ((2048 - abs(desired % 2048)) + (2048 - abs(current % 2048)));
	int shortest;
	int check1;
	cout << "Angle 1: " << angle1 << " Angle 2: " << angle2 << endl;
	if (abs(angle2) < abs(angle1)) {
		shortest = angle2;
		check1 = true;
	}
	else {
		shortest = angle1;
		check1 = false;
	}

	angle1 = ((desired - 2048) - (current % 2048));
	angle2 = ((2048 - (abs(desired % 2048)-2048)) + (2048 - (abs(current % 2048))));
	cout << "Angle 12: " << angle1 << " Angle 22: " << angle2 << endl;
	int shortest2;
	bool check2;
	if (abs(angle2) < abs(angle1)) {
		shortest2 = angle2;
		check2 = true;
	}
	else {
		shortest2 = angle1;
		check2 = false;
	}

	if (abs(shortest) < abs(shortest2)) {
		if (check1 == true) {
			if (current < 0) {
				current -= shortest;
			}
			else {
				current += shortest;
			}
		}
		else {
			current += shortest;
		}
	}
	else {
		if (check2 == true) {
			if (current < 0) {
				current -= shortest2;
			}
			else {
				current += shortest2;
			}
		}
		else {
			current += shortest2;
		}
	}

	cout << "Final angle: " << current << endl;
	system("pause");
	system("CLS");
	main();
}