// Problem 1 - Building A Calculator

#include <iostream>

using namespace std;

double Add(double a, double b)
{
	return a + b;
}

double Subtract(double a, double b)
{
	return a - b;
}

double Multiply(double a, double b)
{
	return a * b;
}

double Divide(double a, double b)
{
	return a / b;
}

double Modulus(int a, int b)
{
	return a % b;
}
// Calculator Menu's
void Menu()
{
	cout << "\nMENU" << endl;
	cout << "\n1. Add" << endl;
	cout << "\n2. Subtract" << endl;
	cout << "\n3. Multiply" << endl;
	cout << "\n4. Divide" << endl;
	cout << "\n5. Modulus" << endl;
}

int main()
{
	int operation = 0;
	double number1 = 0.0, number2 = 0.0;
	char press_key;

	Menu();

	while (true)
	{
		cout << "\nChoose the operation you want to do" << endl;
		cin >> operation;
		cin.clear();
		if (operation > 5 || operation < 1)
		{
			cout << "No operation available. Please choose a number beetween 1-5";
			continue;
		}
		cout << "\nChoose 2 numbers to operate" << endl;
		cin >> number1 >> number2;
		cin.clear();

		switch (operation)
		{
			case 1:
				cout << Add(number1, number2) << endl;
				break;
			case 2:
				cout << Subtract(number1, number2) << endl;
				break;
			case 3:
				cout << Multiply(number1, number2) << endl;
				break;
			case 4:
				cout << Divide(number1, number2) << endl;
				break;
			case 5:
				cout << Modulus(number1, number2) << endl;
				break;
		}
		cout << "\nDo you want to do another operation? If yes, press y" << endl;
		cin >> press_key;
		cin.clear();
		if (press_key == 'y')
			;
		else
			break;

	}

}
