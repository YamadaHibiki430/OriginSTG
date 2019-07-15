#pragma once
#include "../../ESGLib.h"

enum Hit_Type
{
	TYPE_NONE,
	TYPE_PLAYER,
	TYPE_SHOT,
	TYPE_ENEMY,
	TYPE_NUM
};

class HitArea {
private:
	static std::list<HitArea*> HitArea_List;
	float x, y;
	float hit_x, hit_y;
	float hit_width, hit_height;
	Hit_Type type;
public:
	void Init();
	void SetHitType(Hit_Type hittype);
	Hit_Type GetHitType() { return type; }
	void SetHitPosition(float px, float py);
	void SetHitArea(float hx, float hy, float hw, float hh);
	bool IsHitType(Hit_Type hittype);
	bool IsHit(HitArea* other);

	HitArea* HitArea::GetThis() { return this; }
	std::list<HitArea*> HitArea::IsHitArea_List();
};

