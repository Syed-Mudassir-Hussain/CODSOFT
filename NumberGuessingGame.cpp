#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int number, guess, tries = 10;
	srand(time(0)); 
	number = rand() % 100 + 1; 
	cout << "                    --------------------\n";
    cout << "                   |Number Guessing Game|\n";
    cout << "                    --------------------\n";
    cout << "Make Sure To Think Before Entering\n";
    cout << "Because You only have 10 Guesses\n";
    cout << "              ^_^                \n\n";
	do
	{
      
        cout << "What's your guess between 1 and 100 : ";
		cin >> guess;
		tries--;
		if (tries==0)
		{
			cout<<"\n                 You Lost The Round Please Try Again!";
		}
		else
		
		
		if (guess > number)
			cout << "          Too high!\n\n";
		else if (guess < number)
			cout << "          Too low!\n\n";
		else
			cout << "\nCongratulations, You guessed the number right in " << 10-tries << " tries!\n";
	} while (guess != number);
	
	return 0;
	
}