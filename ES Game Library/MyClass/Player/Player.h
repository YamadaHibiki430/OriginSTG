#pragma once
#include "../Character/Character.h"
#include "../Input/Input.h"

class Player :public Character {
private:
	HitArea* hitarea;
	BulletFactory* bulletfactory;
	void PlayerMove();
	void Shot();

	float speed;
public:
	Player();
	Character_Type GetType() { return TYPE_PLAYER; }
	void Update();
	void Draw3D();

};



