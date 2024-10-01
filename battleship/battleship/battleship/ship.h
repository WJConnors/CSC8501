#pragma once

class Ship
{
public:
	Ship(int hps);
	int get_hp() const;
	void hit();
private:
	int hp;
};