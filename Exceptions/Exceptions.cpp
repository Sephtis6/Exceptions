#include <iostream>
#include <string>
#include <exception>
#include <vector>
using namespace std;

void main() {
	string input;
	int num = 0;
	vector<int> myVector(4, 0);

	do {
		cout << "Enter an integer (666 to end):  ";
		cin >> input;
		try {
			num = stoi(input);
			if (num <= -1) {
				throw "Cannot be lower than 0.";
			}
			if (num >= 2501) {
				throw "Cannot be higher than 2500.";
			}
			if (num == 1250) {
				throw "You have hit the middle of the pack. Congratulations";
			}
			if (num == 2018) {
				throw "That is the year that this program was made.";
			}
			else {
				myVector.at(0) = 1000 / num;
			}

			if (num != 666) cout << "Input = " << num << endl;
		}
		catch (int * msg)
		{
			cout << msg << endl;
		}
		catch (char * msg) {
			cout << msg << endl;
		}
		catch (exception& e) {
			cout << "Exception:  " << e.what() << '\n';
		}
		catch (...) {
			cout << "Catch Others." << endl;
		}
	} while (num != 666);

	cout << "End of Program." << endl;
	system("pause");
}