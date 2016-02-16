#include <string>
#include <iostream>

using namespace std;

int main(){
	string n = "          ";
	string p = "O";
	int pposition;
	int random;

	while(true){
		for (int i = 0; i < n.size() ; ++i)
		{
			if(i != pposition){
				cout << n[i];
			}
			else{
				cout << p;
			}
		}
		cout << endl;
		if (pposition <= 10)
		{
			pposition+= 1;
		}
		else{
			pposition-=1;
		}
		cin.ignore();
		cin >> random;
	}
}