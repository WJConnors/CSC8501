#include "Enemy.h"

Enemy::Enemy() :
	hp(default_hp),
	score(new int(0)) {}

Enemy::Enemy(int hps) :
	hp(hps),
	score(new int(0)) {}

Enemy::Enemy(const Enemy& src) :
	hp(src.hp),
	score(new int(*src.score)) {}

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

Enemy& Enemy::operator=(const Enemy& rhs)
{
	if (this == &rhs) return *this;

	delete score;

	hp = rhs.hp;
	score = new int(*rhs.score);

	return *this;
}