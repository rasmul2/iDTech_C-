#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
	int x = 0;
	int y = 0;
	int z = 0;
	cout << "What is the first number you would like to add?" << endl;
	cin >> x; 
	cout << "What is the second number you would like to add?" << endl;
	cin >> y;
	z = x + y;
	cout << "That equals "<< z << "." << endl;
	return 0;
}