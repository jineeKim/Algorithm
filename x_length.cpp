#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char * argv[]) {
	int a, b;
	float pi = 3.14159;
	cin >> a >> b;

	cout << fixed;
	cout.precision(3);
	cout << (a+b)*(pi+sqrt(2.0))<< endl;
 	return 0;
}