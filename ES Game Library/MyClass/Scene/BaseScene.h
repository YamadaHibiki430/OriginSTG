#pragma once
#include "../../ESGLib.h"
#include "../Character/Character.h"
#include "../Player/Player.h"
#include "../Enemy/Enemy.h"
class BaseScene {
public:
	virtual void Initialize() = 0;
	virtual void Update() = 0;
	virtual void Draw3D() = 0;
	virtual void Draw2D() = 0;
	virtual void DrawAlpha3D() = 0;
};
