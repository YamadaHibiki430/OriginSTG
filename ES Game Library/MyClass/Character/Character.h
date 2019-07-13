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
	static SPRITE loaded_images[TYPE_NUM];
	bool remove_flag;
protected:
	SPRITE image;
	float width, height;
	float hit_x, hit_y;
	float hit_width, hit_height;
	float speed;
	void remove() { remove_flag = true; }
public:
	Character();


};

