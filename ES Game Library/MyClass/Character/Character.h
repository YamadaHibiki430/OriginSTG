#pragma once
#include "../../ESGLib.h"
#include "../HitArea/HitArea.h"
#include "../Bullet/Bullet.h"

enum Character_Type
{
	TYPE_NONE,
	TYPE_PLAYER,
	TYPE_ENEMY,
	TYPE_NUM
};

class Character;

typedef std::shared_ptr<Character> Character_Ref;

class Character {
private:
	static MODEL loaded_model[TYPE_NUM];
	bool remove_flag;
protected:
	MODEL model;
	float x, y;
	void remove() { remove_flag = true; }
public:
	
	void SetModel(LPCTSTR file_name);
	void SetPosition(float px, float py);
	bool IsRemove() { return remove_flag; }
	virtual Character_Type GetType() = 0;
	virtual void Update() = 0;
	virtual void Draw3D();
};

