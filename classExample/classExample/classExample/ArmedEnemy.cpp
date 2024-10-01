#include <iostream>
#include "ArmedEnemy.h"

using namespace std;


ArmedEnemy::ArmedEnemy(int hps, int ammo) :
	Enemy(hps),
	ammo_level(ammo) {}

ArmedEnemy::~ArmedEnemy() {}

void ArmedEnemy::set_score(int new_score)
{
	*score = new_score;
	cout << "score is now " << *score << endl;
}

void ArmedEnemy::shoot()
{
	if (ammo_level > 0)
	{
		cout << "bang\n";
		ammo_level--;

	}
	else
	{
		cout << "out of ammo\n";
	}
}