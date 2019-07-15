#include "Player.h"

Player::Player() {
	SetModel(_T("Model/Player/myship.x"));
	SetPosition(0.0f, 0.0f);
	hitarea = new HitArea;
	hitarea->SetHitPosition(x, y);
	hitarea->SetHitArea(10.f,10.f,10.f,10.f);
	model->SetScale(1.0f);
	model->SetRotation(Vector3(-90.0f, 0.0f, 0.0f));
}

void Player::Update() {


}
void Player::Draw3D() {
	model->SetPosition(Vector3(x, y, 0));
	model->Draw();
}