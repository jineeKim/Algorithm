#include <iostream>

using namespace std;
int main(int argc, char* argv) {
	int a, b;
	int whole, part = 0;
	cin >> a >> b;

	whole = (a / 8) * (b / 8);

	if ((a % 8) != 0 && (b % 8) != 0) {
		part = (a / 8) + (b / 8) + 1;
	}else if ((a % 8) != 0) {
		part = b / 8;
	}
	else if ((b % 8) != 0) {
		part = a / 8;
	}
	

	cout << "The number of whole tiles is " << whole << " part tiles is " << part <<endl;

	return 0;
}