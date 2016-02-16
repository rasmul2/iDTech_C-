#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
	int MaxNumber;
	int SecretNumber;
	int Guess;
	bool guessing = true;
	cout << "What will the secret number be between? 0 and...." << endl;
	cin >> MaxNumber;
	SecretNumber = rand() % MaxNumber;

	while(guessing){
		cout << "Guess the Secret Number...." << endl;
		cin >> Guess;

		if (Guess > SecretNumber)
		{
			cout << "The Secret Number is less than your guess." << endl;
		}

		if(Guess < SecretNumber)
		{
			cout << "The Secret Number is greater than your guess." << endl;
		}

		if(Guess == SecretNumber){
			cout << "Good job! That was the Secret Number" << endl;
			guessing = false;
		}
	}
	
}