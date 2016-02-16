#include <iostream>
#include <string>
using namespace std;

class Class{
		int Health;
		int Strength;
		int Speed;
		int Magic;
		string name;
	public:
		Class(string);
		getHealth() {return Health;}
		getStrength() {return Strength;}
		getSpeed() {return Speed;}
		//getName() {return name;}
		getMagic() {return Magic;}
			
};

Class::Class(string name){
	if(name == "mage"){
		Health = 300;
		Strength = 50;
		Speed = 200;
		Magic = 300;
	}
	if(name == "tank"){
		Health = 300;
		Strength = 300 ;
		Speed = 50;
		Magic = 200;
	}
}

int main(){
	Class magi("mage");
	cout << magi.getHealth() << endl;
}

