#pragma once
#include "../Character/Character.h"

class Enemy : public Character {
private:
	HitArea* hitarea;
	BulletFactory* bulletfactory;
	std::list<BulletProduct*> Bullet_List;
	void AddBulletList(BulletProduct* bullet);
public:
	Enemy();
	Character_Type GetType() { return TYPE_ENEMY; }
	void Update();
	void DrawCanvas() {};
};