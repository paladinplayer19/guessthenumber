
#include <iostream>
#include <time.h>
#include <stdlib.h>

char playGame();

int main()
{
	char answer;
	
	do {
		answer = playGame();

		 if (answer == 'N' || answer == 'n')
		 {
			return 0;
		 }

	} while(answer == 'Y' || answer == 'y');
}
char playGame() {

	int guess = 0;
	int count = 0;
	int range = 10;
	char restart;

	srand(time(NULL));
	int numb = std::rand() % range;

	  
		do
		{

			std::cout << "Please enter your guess between 0 and 9!\n";
			std::cin >> guess;
			if (guess > numb)
			{
				std::cout << "Guess lower!\n";
			}
			else if (guess < numb)
			{
				std::cout << "Guess higher!\n";
			}
			else {
				std::cout << "\n";
				std::cout << "Well done you have guessed the correct number!";
			}
			count += 1;
		} while (guess != numb);


		std::cout << "\n";
		std::cout << "You guessed the number " << count << " times\n";
		std::cout << "\n";
		std::cout << "Do you wish to play again? (Y/N)\n";
		std::cin >> restart;
	
		return restart;
}
