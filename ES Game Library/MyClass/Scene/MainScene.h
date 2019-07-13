#pragma once
#include"BaseScreen.h"

class MainScene:public BaseScene{
public:
	void Initialize();
	void Update();
	void Draw3D() ;
	void Draw2D() ;
	void DrawAlpha3D();
};