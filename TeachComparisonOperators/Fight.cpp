#include <iostream>
#include <string>
#include <random>

using namespace std;

bool flee(float PlayerHealth, float PokemonHealth){
	if (PokemonHealth/PlayerHealth > 0.9)
	{
		return false;
	}
	else{
		return true;
	}
}

bool fight(float &PlayerHealth, float& PokemonHealth){
	int PlayerPower = rand() % 200;
	int PokemonPower = rand() % 150;

	cout << "You attack first." << endl;

	PokemonHealth -=PlayerPower;
	
	if (PokemonHealth <= 0)
	{
		cout << "The pokemon fainted." << endl;
		return false;
	}
	else{
		cout << "The Pokemon's health is " << PokemonHealth << '.' << endl;
	}

	if (PokemonPower <= 0)
	{
		cout << "The pokemon missed" << endl;
	}
	else{
		PlayerHealth-=PokemonPower;
	}

	if (PlayerHealth <= 0)
	{
		cout << "The Pokemon attacked, your pokemon fainted." << endl;
		return false;
	}
	else{
		cout << "The Pokemon attacked, your health is " << PlayerHealth << '.'<< endl;
		return true;
	}
	
}

bool catchp(float PlayerHealth, float PokemonHealth){
	if (PokemonHealth/PlayerHealth < 0.3)
	{
		cout << "You caught the pokemon." << endl;
		return true;
	}
	else{
		cout << "The pokemon isn't weak enough." << endl;
		return false;
	}
}

void heal(float & PlayerHealth, float & PokemonHealth){
	PlayerHealth+=50;
	cout << "You healed, your pokemon's health is " << PlayerHealth << endl;
}



int main(){
	string choice;
	float PlayerHealth = 300;
	float PokemonHealth = 0;
	
	bool fighting = true;
	bool walking = true;
	
	string answer;

	while(walking){
		cout << "A wild Pokemon appeared." << endl;
		PokemonHealth = rand() % 500;

		while(fighting){
			cout << "What would you like to do? (run/fight/item)" << endl;
			cin >> choice;

			if (choice == "run")
			{
				if(flee(PlayerHealth, PokemonHealth)){
					cout << "You got away succesfully." << endl;
					fighting = false;
				}
				else{
					cout << "The Pokemon is too strong for you to flee" << endl;
				}
			}

			if (choice == "fight"){
				cout << "You have chosen to fight." << endl;
				if(!fight(PlayerHealth, PokemonHealth)){
					fighting = false;
				}
			}

			if(choice == "item"){
				string item;
				cout << "What item would you like to use? (pokeball/potion)" << endl;
				cin >> item;
				if(item == "pokeball"){
					if(catchp(PlayerHealth, PokemonHealth)){
						fighting = false;
					}
				}
				if (item == "potion")
				{
					heal(PlayerHealth, PokemonHealth);
				}
			}
		}

		cout << "Would you like to continue? (y,n)" << endl;
		cin >> answer;
		if (answer == "n")
		{
			walking = false;
		}
		if (answer == "y")
		{
			fighting = true;
		}

	}
	
	

} 