#include "Enemy.h"

Enemy::Enemy(int hps) :
	hp(hps),
	score(new int(0)) {}

Enemy::~Enemy()
{
	delete score;
}

int Enemy::get_hp() const { return hp; }
int Enemy::get_score() const { return *score; };
void Enemy::set_hp(int new_hp)
{
	hp = new_hp;
}
void Enemy::set_score(int new_score)
{
	*score = new_score;
}
