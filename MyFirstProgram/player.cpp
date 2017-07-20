#include "player.h"

player::player()
{
	name="Default";
}

player::player(string theName)
{
	name=theName;
}
void player::Greet()
{
	cout << "Hello" << name << "!" <<
	endl;
}
