//Micah Pennington
//January 25 2022 ©
//Chapter 3 Program

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	/* -- Define variables to use -- */

	//DieRoll holds the random number generated as the dice roll
	int DieRoll;
	//Guess holds the user's inputed guess
	int Guess;
	//TODO: Implemented in chap 5
	int cnt1;
	//TODO: Implemented in chap 5
	int cnt2;

	//Set the seed for random numbers
	srand((unsigned int)time(NULL));

	/* -- Input -- */

	//Ask the user for input
	cout << "Please enter a guess between 1 and 6: ";

	//Get the input and put it in the Guess variable
	cin >> Guess;
	cout << '\n';

	//Make sure the user input the correct data
	if (Guess >= 1 && Guess <= 6) {

		//Generate the random number between 1 and 6
		DieRoll = rand() % 6 + 1;


		/* -- Output -- */

		//Display the user's guess
		cout << "Your guess: " << Guess << '\n';

		//Display the number rolled
		cout << "The number rolled: " << DieRoll << '\n';

		//if the numbers are the same display "WINNER"
		if (Guess == DieRoll) { cout << "WINNER\n"; }

		//if the number is odd display "DOUBLE WINNER"
		if (DieRoll % 2 == 1) { cout << "DOUBLE WINNER\n"; }

		//if the number is even and the sum of guess and die roll is even display "YOU ARE A LUCKY PERSON"
		if (DieRoll % 2 == 0 && Guess + DieRoll >= 10) { cout << "YOU ARE A LUCKY PERSON\n"; }
	}
	else { cout << "Incorrect input\n"; }


	/* --------------------------------------------------------------------- */


	//cnt1 starts at 1; while cnt1 is less than 5, display it's value and then add 1 to cnt1
	for (cnt1 = 1; cnt1 <= 5; cnt1++) cout << cnt1 << ' ';
	cout << '\n';


	//cnt1 starts at 100; while cnt1 is more than 0 and it is evenly divisible by 17, display it's value and then subtract 1 to cnt1
	for (cnt1 = 100; cnt1 >= 0; cnt1--)
		if (cnt1 % 17 == 0) cout << cnt1 << ' ';
	cout << '\n';


	//Same as previous
	//cnt1 starts at 100; while cnt1 is more than 0 and it is evenly divisible by 17, display it's value and then subtract 1 to cnt1
	cnt1 = 100;
	while (cnt1 >= 0) {
		if (cnt1 % 17 == 0) cout << cnt1 << " ";
		cnt1--;
	}
	cout << '\n';


	//A loop that asks the user for a number and returns the remainder of that number divided by 5 untill the user enters 0
	do {

		/* -- Input -- */


		//Ask the user for input
		cout << "Please enter a number (0 to exit loop): ";

		//Get the input and put it in the Guess variable
		cin >> Guess;
		cout << '\n';

		/* -- Output -- */


		//Output the remainder of the number they entered divided by 5
		cout << "The remainder of that number divided by 5 is: " << (Guess % 5) << '\n';

	} while (Guess != 0);


	//Nested loops that output a table of numbers;
	//The first loop counts to 5, the number of rows
	//The second loop counts to 6, the number of columns
	//Each cell is defined by the column number times the row number
	for (cnt1 = 1; cnt1 <= 5; cnt1++) {
		for (cnt2 = 1; cnt2 <= 6; cnt2++)
			cout << (cnt1 * cnt2) << '\t';
		cout << '\n';
	}

	//Exit
	return EXIT_SUCCESS;
}