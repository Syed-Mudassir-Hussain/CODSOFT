#include <iostream>
using namespace std;


int main()
{
	char op;
	float num1, num2;
    cout<<"            -------------------------";
    cout<<"\n           |Welcome To The Calculator|";
    cout<<"\n            -------------------------";
	
    cout<<"\nWhat Operation would you like to perform(+,-,*,/): ";
    cin >> op;

    cout<<"\n\nPlease Enter The First number: ";
	cin >> num1; 
    cout<<"\nPlease Enter The Second number: ";
    cin>> num2;

	switch (op) {
	case '+':
		cout <<"\nThe Result Is: "<<num1 + num2;
		break;

	case '-':
		cout <<"\nThe Result Is: "<<num1 - num2;
		break;

	case '*':
		cout <<"\nThe Result Is: "<<num1 * num2;
		break;

	case '/':
	if (num2<=0)
    {
        cout<<"\n           Second Number Cannot Be Zero!\n";
    }
    else
    {
    cout <<"\nThe Result Is: "<<num1 / num2;
    }
    
		break;

	default:
		cout << "\n           Kindly Check Your Operator!\n";
	}

	return 0;
}
