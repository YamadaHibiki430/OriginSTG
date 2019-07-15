#pragma once
#include "../Character/Character.h"
#include "../HitArea/HitArea.h"

class Player :public Character {
private:
	HitArea* hitarea;


public:
	Player();
	Character_Type GetType() { return TYPE_PLAYER; }
	void Update();
	void Draw3D();

};



