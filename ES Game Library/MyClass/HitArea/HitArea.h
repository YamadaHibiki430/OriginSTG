#pragma once
#include "../../ESGLib.h"

enum Hit_Type
{
	H_TYPE_NONE,
	H_TYPE_PLAYER,
	H_TYPE_SHOT,
	H_TYPE_ENEMY,
	H_YPE_NUM
};

class HitArea {
private:
	static std::list<HitArea*> HitArea_List;
	float x, y;
	float hit_x, hit_y;
	float hit_width, hit_height;
	Hit_Type type;
public:
	HitArea();
	void SetHitType(Hit_Type hittype);
	Hit_Type GetHitType() { return type; }
	void SetHitPosition(float px, float py);
	void SetHitArea(float hx, float hy, float hw, float hh);
	bool IsHitType(Hit_Type hittype);
	bool IsHit(HitArea* other);


	HitArea* HitArea::GetThis() { return this; }
	std::list<HitArea*> HitArea::IsHitArea_List();
};

