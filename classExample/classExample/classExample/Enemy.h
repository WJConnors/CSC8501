#pragma once

class Enemy
{
public:
	static const int default_hp = 4;
	Enemy();
	Enemy(int hp);
	Enemy(const Enemy& src);
	Enemy& operator=(const Enemy& rhs);
	~Enemy();
	virtual int get_hp() const;
	virtual int get_score() const;
	virtual void set_hp(int new_hp);
	virtual void set_score(int new_score);
protected:
	int hp;
	int* score;
};