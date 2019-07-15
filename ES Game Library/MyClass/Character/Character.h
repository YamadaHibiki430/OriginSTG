#pragma once
#include "../../ESGLib.h"

enum Character_Type
{
	TYPE_NONE,
	TYPE_PLAYER,
	TYPE_ENEMY,
	TYPE_NUM
};



class Character {
private:
	static MODEL loaded_model[TYPE_NUM];
	bool remove_flag;
protected:
	MODEL model;
	float x, y;
	float width, height;
	float speed;
	void remove() { remove_flag = true; }
public:
	Character();
	void SetModel(LPCTSTR file_name);
	void SetPosition(float px, float py);
	bool IsRemove() { return remove_flag; }
	virtual Character_Type GetType() = 0;
	virtual void Update() = 0;
	virtual void Draw3D();
	virtual void hit() {};
};

