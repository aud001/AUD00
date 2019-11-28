#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string intro;                       //intro = introduction.
	ofstream mynr;
	mynr.open("intro.txt");             //mynr = My Name Reg number.
	cout << " Enter your Name:\n";
	cout << " Enter your age: \n";
	if(mynr)
	{
		getline(cin, intro);         
		mynr << intro;
	}
	else
		cout << " Intro not created";
	mynr.close();
	ifstream file("intro.txt");
	if (mynr)                                     
	{
		while (getline(file ,intro))               //Display the characters.
		{
			cout << intro << endl;
		}
	}
}