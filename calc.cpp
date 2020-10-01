#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

	double num1, num2, result;
	int value;

	cout << "Select the operations" << endl;
	cout << "1. Addition \t\t 2. Subtraction \t\t 3. Division \t\t 4. Multiplication" << endl;
	cin >> value;

	cout << "Enter the two numbers" << endl;
	cout << "num1: ";
	cin >> num1;
	cout << "num2: ";
	cin >> num2;

	switch(value)
	{
		case 1:
			result = num1 + num2;
			cout << "Result "<< result << endl;
		  	break;

		case 2:
			result = num1 - num2;
			cout << "Result "<< result << endl;
		  	break;

		case 3:
			result = num1 / num2;
			cout << "Result "<< result << endl;
		  	break;

		case 4:
			result = num1 * num2;
			cout << "Result "<< result << endl;
		  	break;

		default:
			cout << "Error!! input" << endl;
	}
	  
	 
	system("pause");
	return 0;
}
