#include <iostream>
#include <string>

using namespace std;

void Square(int width, int height){
	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < width; ++j)
		{
			cout << "x";
		}
		cout << endl;
	}
}

void Triangle(int width, int height){
	int k = height;
	int l = height;
	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < width ; ++j)
		{ 
			//cout << 'o';
			//cout << j << " " << k << endl;
			if (j+1 >= k)
			{
				if (j+1 <= l)
				{
					cout << 'x';
				}
				else{
					cout << " ";
				}
				
			}

			else{
				cout << ' ';
			}
		}
		l++;
		k--;
		cout << endl;
	}
}

void Diamond(int width, int height){
	int k = (height+1)/2;
	int l = (height+1)/2;
	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < width ; ++j)
		{ 
			//cout << 'o';
			//cout << l << " " << k << endl;
			if (j+1 >= k)
			{
				if (j+1 <= l)
				{
					cout << 'x';
				}
				else{
					cout << " ";
				}
				
			}

			else{
				cout << ' ';
			}
		}

		if (i >= (height-1)/2)
		{
			l--;
			k++;
		}
		else{
			l++;
			k--;
		}
		
		cout << endl;
	}
}

int main(){
	string shape;
	int width;
	int height;

	cout << "What shape do you want to make?" << endl;
	cin >> shape; 

	cout << "What is the width of that shape?" << endl;
	cin >> width;

	cout << "What is the height of that shape?" << endl;
	cin >> height; 

	if (shape == "square" || shape == "rectangle")
	{
		Square(width, height);
	}

	if (shape == "triangle")
	{
		if ((width % 2) != 1)
		{
			cout << "Error: width must be an odd number." << endl;
		}
		if (((width+1)/2) != height)
		{
			cout << "Error: you need a height equal to width+1/2." << endl;
		}
		else{
			Triangle(width, height);
		}

	}

	if (shape == "diamond"){
		if (width != height)
		{
			cout << "Error: width does not equal height." << endl;
		}

		if (width%2 != 1 || height%2 != 1)
		{
			cout << "Must be odd numbers" << endl;
		}
		
		else{
			Diamond(width, height);
		}
	}


}