#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;


int main(){
	
	srand(time(NULL));
	int randomnumber = rand() % 1000;
	int guess = 0;
	
	cout<<"                      ***************** WELCOME TO GUESSING THE NUMBER GAME *****************"<<endl;
	cout <<"\nEnter a number in between the range of ( 0 - 1000 )" << endl;
	
	while(1) {
		cout << "\nGuess the random number: ";
		cin >> guess;
		
		if(guess == randomnumber) {
			break;
		}
		
		if(guess - randomnumber > 500) {
			cout << "Your guess is very high";
			continue;
		}
		
		if(randomnumber - guess > 500) {
			cout << "Your guess is very low";
			continue;
		}
		
		if(guess - randomnumber > 100) {
			cout << "Your guess is high";
			continue;
		}
		
		if(randomnumber - guess > 100) {
			cout << "Your guess is low";
			continue;
		}
		
		if(guess - randomnumber > 10) {
			cout << "Your guess is close, try guessing lower";
			continue;
		}
		
		if(randomnumber - guess > 10) {
			cout << "Your guess is close, try guessing higher";
			continue;
		}
		
		if(guess - randomnumber > 0) {
			cout << "You almost made it, try guessing lower";
			continue;
		}
		
		if(randomnumber - guess > 0) {
			cout << "Your almost made it, try guessing higher";
			continue;
		}
		
		
	}
	cout << "Congratulations, you found the number, YAY!" << endl;
}