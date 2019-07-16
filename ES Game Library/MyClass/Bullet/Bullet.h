#pragma once
#include "../../ESGLib.h"
#include "../HitArea/HitArea.h"

enum Bullet_Type {
	NOMAL_TYPE,
	LASER_TYPE,
	AIMING_TYPE
};

class BulletProduct {
public:
	virtual void Update() = 0;
	virtual void Draw3D() = 0;
	virtual void SetPosition(float px, float py) = 0;
};

class NomalBullet :public BulletProduct {
private:
	HitArea* hitarea;
	MODEL model;
	float x, y;
	float speed;
public:
	NomalBullet();
	void Update();
	void Draw3D();
	void SetPosition(float px, float py);
	~NomalBullet();
};

class BulletFactory {
private:
	virtual BulletProduct* CreateBP(Bullet_Type type) = 0;
public:
	BulletProduct* Create(Bullet_Type type) {
		BulletProduct* bp = CreateBP(type);
		return bp;
	}
};

class BulletStationeryFactory :public BulletFactory {

	BulletProduct* CreateBP(Bullet_Type type) {
		switch (type)
		{
		case NOMAL_TYPE:
			return new NomalBullet();
			break;
		default:
			return nullptr;
			break;
		}
	}
};
