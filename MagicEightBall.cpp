#include <iostream>
#include <cstdlib>
 
using namespace std;

int main(){
	string answer;
	string question;
	bool asking = true;
	while(asking){
		int answer_number = rand() % 6;

		cout << "Ask the Magic Eight Ball a question."<< endl;
		getline(cin, question);
		cout << question << endl;

		if (answer_number == 1)
		{
			cout << "Yes";
		}

		if (answer_number == 2)
		{
			cout << "No" << endl;
		}

		if (answer_number == 3)
		{
			cout << "Maybe"<< endl;
		}

		if (answer_number == 4)
		{
			cout << "Never"<<endl;
		}

		if (answer_number == 5)
		{
			cout << "Sometimes"<< endl;
		}

		if (answer_number == 6)
		{
			cout << "Try Again."<< endl;
		}

		cout << "Would you like to ask another question?" << endl;

		cin >> answer;
		if(answer == "yes"){
			asking = true;
			cout <<  "Okay" << endl;
			cin.i();
		}
		
		else if(answer == "no"){
			asking = false;
		}

		else{
			cout << "I didn't understand." << endl;
		}


	}
	
	
	return 0;
}