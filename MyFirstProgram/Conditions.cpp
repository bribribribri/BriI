#include <iostream>
using namespace std;

int main()
{
	
	
	int pointsUser = 0;
	int pointsRobot =0; 
	int userInput;
	
	cout << "Who would win in a fight, you or a Robot?" << endl;
	cout << "Answer the following questions, and this program will tell you!" << endl;
	
	cout << "On a scale of 1-10, how strong are you?" << endl;
	cin >> userInput;
	if (userInput > 7) 
	{
		pointsUser += 1;
	}
	else
	{
		pointsRobot += 1;
	}
	
	cout << "On a scale of 1-10, how tactical of a planner are you?";
	cin >> userInput;
	if (userInput <= 8)
	{
		pointsRobot += 1;
	}
	else
	{
		pointsUser += 1;
	}
	
	
	char userYN;
	cout << "Would you be scared of a giant robot speeding at you? (y/n)" << endl;
	cin >> userYN;
	if (userYN != 'n')
	{
		pointsRobot += 1;
	}
	else
	{
		pointsUser += 1;
	}

	if (pointsUser <= pointsRobot)
	{
		cout << "The robot would win! There is no shame in that." << endl;
	}
	else
	{
		cout << "Wou would win in a fight against the robot." << endl;
		cout << "Are you certain that you are not in fact a robot yourself?" << endl;}
	{}
}

