#pragma once
#include"BaseScene.h"

class MainScene:public BaseScene{
private:
	
	std::list<Character_Ref> Character_List;
	void AddLList(Character_Ref& chara);
public:
	void Initialize();
	void Update();
	void Draw3D() ;
	void Draw2D() ;
	void DrawAlpha3D();
};