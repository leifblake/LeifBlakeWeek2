#include <iostream>
using namespace std;
int main()
{
	float A;
	float B;
	float X;
	cout << "Hi everyone. Lets do some math! We are going to solve: " << endl;
	cout << "Ax + B = 0 " << endl;
	cout << "for x! " << endl;
	cout << "Please type a value for A, then hit enter: " << endl;
	cin >> A;
	cout << "Please type a value for B, then hit enter: " << endl;
	cin >> B;
	cout << "Solving" << A;
	cout << "x+" << B;
	cout << "=0 for x..." << endl;
	X = -B / A;
	cout << "The answer is:" << endl;
	cout << X << endl;
}