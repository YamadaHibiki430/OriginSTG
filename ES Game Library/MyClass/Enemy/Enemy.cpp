#include "Enemy.h"

Enemy::Enemy() {
	SetModel(_T("Model/Enemy/enemy.x"));
	SetPosition(MathHelper_Random(-100.f,100.f), 100.0f);
	hitarea = new HitArea();
	hitarea->SetHitPosition(x, y);
	hitarea->SetHitArea(10.f, 10.f, 10.f, 10.f);
	hitarea->SetHitType(H_TYPE_ENEMY);

	model->SetScale(1.0f);
	model->SetRotation(Vector3(90.0f, 180.0f, 0.0f));
}

void Enemy::Update() {
	y -= 0.5f;
}
