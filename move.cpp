#include <vector>
#include <iostream>
#include <string>

using namespace std;

void Move(vector <vector<string> > &board, string move, string player, int &xposition, int &yposition){
	if(move == "left"){
		xposition -=1;

	}
	if(move == "right"){
		xposition +=1;
		
	}
	if(move == "up"){
		yposition -= 1;
	}
	if(move == "down"){
		yposition += 1;
	}
}


int main(){
	vector <vector <string> > board;
	string player = "O";
	string empty = " ";
	string move;
	string answer;
	bool playing = true; 
	int xposition = 0;
	int yposition = 0;
	vector<string> v;

	for (int i = 0; i < 250; ++i)
	{
		v.push_back(empty);
	}
	for (int j = 0; j < 10; ++j)
	{
		board.push_back(v);
	}



	while(playing){
		cout << "Where would you like to move?" << endl;
		cin >> move;

		Move(board, move, player, xposition, yposition);

		for (int i = 0; i < board.size(); ++i)
		{
			for (int j = 0; j < board[i].size(); ++j)
			{
				if (j == xposition && i == yposition)
				{
					board[i][j] = player;
				}
			}
		}

		for (int i = 0; i < board.size(); ++i)
		{
			for (int j = 0; j < board[i].size(); ++j)
			{
				cout << board[i][j];
			}
			cout << endl;
		}

		cout << "Would you like to keep moving?(yes/no)" << endl;
		cin >> answer;

		if(answer == "no"){
			playing = false;
		}

	}



}