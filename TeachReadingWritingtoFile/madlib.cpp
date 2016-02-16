#include <iostream>
#include <fstream>

using namespace std;


string AskQuestion(string line, int & i){
	string question;
	string ChosenWord;
	i++;
	while(line[i] != '>'){
		question = question + line[i];
		i++;
	}
	cout << "Fill in the blank with a/an " << question << "."<< endl;
	cin >> ChosenWord;
	return ChosenWord;
}

int main(){
	//read in file name
	ofstream newLib("newLib.txt");

	string filename; 
	string line;

	cout << "What file would you like to use for your MadLib?" << endl;
	cin >> filename;

	ifstream oldLib(filename.c_str());
	
	if(oldLib.is_open()){
		while( getline (oldLib, line)){
			string Line;
			string word;
			for (int i = 0; i < line.size(); ++i)
			{
				//cout << word << endl;
				if (line[i] == '<')
				{
					//cout << "***FOUND IT****" << endl;
					word = AskQuestion(line, i);
					Line += word;
					
				}
				else{
					Line += line[i];
				}

			}
			newLib << Line << endl;
			
		}

		oldLib.close();
	}


}