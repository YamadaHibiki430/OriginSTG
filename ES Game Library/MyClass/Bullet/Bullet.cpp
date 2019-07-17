#include "Bullet.h"

NomalBullet::NomalBullet() {
	model = GraphicsDevice.CreateModelFromFile(_T("Model/Bullet/bullet_medium_blue.x"));
	hitarea = new HitArea();
	hitarea->SetHitPosition(x, y);
	model->SetScale(1.f);
	model->SetRotation(Vector3(-90.0f, 0.0f, 0.0f));
}

void NomalBullet::Update() {
	y += speed;
}

void NomalBullet::Draw3D() {
	model->SetPosition(Vector3(x, y, 0.f));
	model->Draw();
}

void NomalBullet::SetPosition(float px, float py) {
	x = px; y = py;
}

NomalBullet::~NomalBullet() {
	delete this;
}