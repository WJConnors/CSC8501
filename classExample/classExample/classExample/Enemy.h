#pragma once

class Enemy
{
public:
	Enemy(int hp);
	~Enemy();
	virtual int get_hp() const;
	virtual int get_score() const;
	virtual void set_hp(int new_hp);
	virtual void set_score(int new_score);
protected:
	int hp;
	int* score;
};