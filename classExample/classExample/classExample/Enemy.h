#pragma once

class Enemy
{
public:
	Enemy(int hp);
	~Enemy();
	int get_hp() const;
	int get_score() const;
	void set_hp(int new_hp);
	void set_score(int new_score);
private:
	int hp;
	int* score;
};