#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	srand (time(NULL));
	int cChoice = rand() % 3 + 1;
	int uChoice;

	cout << cChoice;
	//Prompt the user to select either Rock, Paper, Scissors, Lizard, or Spock
	cout << "Select one of the following:\n1) Rock\n2) Paper\n3) Scissors\nYour Choice:";
	cin >> uChoice;

	if(uChoice == cChoice){
		cout << "It's a tie!";
	}

	switch(uChoice){
		case 1:
			cout << "User chose Rock";
	}
	//Compare the choices to determine the winner 

	//Print out the winner
}
