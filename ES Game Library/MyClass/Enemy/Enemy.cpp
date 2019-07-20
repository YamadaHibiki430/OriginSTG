#include "Enemy.h"

Enemy::Enemy() {
	SetModel(_T("Model/Enemy/enemy.x"));
	SetPosition(MathHelper_Random(-100.f,100.f), 100.0f);
	hitarea = new HitArea();
	hitarea->SetHitPosition(x, y);
	hitarea->SetHitArea(-5.f, -5.f, 10.f, 10.f);
	hitarea->SetHitType(H_TYPE_ENEMY);

	model->SetScale(1.0f);
	model->SetRotation(Vector3(90.0f, 180.0f, 0.0f));
}

void Enemy::Update() {
	y -= 0.5f;
	hitarea->SetHitPosition(x, y);
	if (y < -100) {
		remove();
	}
}

void Enemy::Draw3D() {
	model->SetPosition(Vector3(x, y, 0));
	model->Draw();
	hitarea->Draw();
}
