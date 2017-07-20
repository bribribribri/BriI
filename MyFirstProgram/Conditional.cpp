#include <string>
#include <iostream>
using namespace std;

int main()
{
	int robotDistance = 3;
	if (robotDistance > 0)
	{
		robotDistance -= 1;
	}
		if (robotDistance > 0)
	{
		robotDistance -= 1;
	}
		if (robotDistance > 0)
	{
		robotDistance -= 1;
	}
		if (robotDistance > 0)
	{
		robotDistance -= 1;
	}
	else if (robotDistance == 0)
	{
		cout << "You are about to hit the wall!"
	}
	else {
		cout << "You ran into the wall!" << endl;
	}
	
	cout << robotDistance << endl;
}
