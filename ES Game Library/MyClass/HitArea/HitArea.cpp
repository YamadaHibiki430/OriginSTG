#include "HitArea.h"

std::list<HitArea*> HitArea::HitArea_List;

HitArea::HitArea() {
	SetHitArea(1.f, 1.f, 1.f, 1.f);
	HitArea_List.push_back(this);
	SetHitType(H_TYPE_NONE);
}

void HitArea::SetHitType(Hit_Type hittype) {
	type = hittype;
}

void HitArea::SetHitPosition(float px, float py) {
	x = px; y = py;
}

void HitArea::SetHitArea(float hx, float hy, float hw, float hh) {
	hit_x = hx; hit_y = hy;
	hit_width = hw; hit_height = hh;
}

bool HitArea::IsHitType(Hit_Type hittype) {
	bool result = false;
	std::list<HitArea*> HitList = this->IsHitArea_List();
	for (auto&& other : HitList) {
		if (other->GetHitType() == hittype)result = true;
	}
	
	return result;
}

bool HitArea::IsHit(HitArea* other) {
	int x1 = x + hit_x;
	int y1 = y + hit_y;
	int w1 = hit_width;
	int h1 = hit_height;

	int x2 = other->x + other->hit_x;
	int y2 = other->y + other->hit_y;
	int w2 = other->hit_width;
	int h2 = other->hit_height;

	if (x1 + w1 > x2 && x1 < x2 + w2 && y1 + h1 > y2 && y1 < y2 + h2) return true;
	return false;
}


std::list<HitArea*> HitArea::IsHitArea_List() {
std::list<HitArea*> result;
for (auto&& h : HitArea_List) {
	if (h->GetThis() == this) continue;
	if (h->IsHit(this)) result.push_back(h->GetThis());
}
return result;
}