#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	srand (time(NULL));
	int cChoice = rand() % 3 + 1;
	int uChoice;
	//Prompt the user to select either Rock, Paper, Scissors, Lizard, or Spock
	cout << "Select one of the following:\n1) Rock\n2) Paper\n3) Scissors\n4) Lizard\n5) Spock\nYour Choice:";
	cin >> uChoice;
	//Instruct the computer to randomly select the option

	//Compare the choices to determine the winner 

	//Print out the winner
}
