#include <iostream>
#include <string>

using namespace std;

int add(int &answer){
	int x = 0;
	int y = 0;
	cout << "What is the first number you would like to add?" << endl;
	cin >> x; 
	cout << "What is the second number you would like to add?" << endl;
	cin >> y;
	answer = x + y;
	return answer;
}

int subtract(int &answer){
	int x = 0;
	int y = 0;
	cout << "What is the first number you would like to subtract?" << endl;
	cin >> x; 
	cout << "What is the second number you would like to subtract?" << endl;
	cin >> y;
	answer = x - y;
	return answer;
}

int multiply(int &answer){
	int x = 0;
	int y = 0;
	cout << "What is the first number you would like to multiply?" << endl;
	cin >> x; 
	cout << "What is the second number you would like to multiply?" << endl;
	cin >> y;
	answer = x * y;
	return answer;
}

int divide(int &answer){
	int x = 0;
	int y = 0;
	cout << "What is the first number you would like to divide?" << endl;
	cin >> x; 
	cout << "What is the second number you would like to divide?" << endl;
	cin >> y;
	if(y == 0){
		cout << "ERROR: Can't Divide By Zero." << endl;
	}
	else{
		answer = x/y;
		return answer;
	}
}

int main(){
	int answer = 0;
	string calculation; 
	cout << "What calculation would you like to do?" << endl;
	cin >> calculation; 

	if (calculation == "add"){
		add(answer);
		cout << "The answer is " << answer << "." << endl;
	}

	if (calculation == "subtract")
	{
		subtract(answer);
		cout << "The answer is " << answer << "." << endl;
	}

	if (calculation == "multiply")
	{
		multiply(answer);
		cout << "The answer is " << answer << "." << endl;
	}

	if(calculation == "divide"){
		divide(answer);
		cout << "The answer is " << answer << "." << endl;
	}

	else{
		cout << "Unknown calculation" << endl;
	}
	return 0;
}