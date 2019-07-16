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
	PlayerMove();
	
}
void Player::Draw3D() {
	model->SetPosition(Vector3(x, y, 0));
	model->Draw();
}
void Player::Shot() {
	bulletfactory = new BulletStationeryFactory();
	BulletProduct* Nomal = bulletfactory->Create(NOMAL_TYPE);
	Nomal->Update();
}

void Player::PlayerMove() {
	speed = 1.f;
	if (Input::GetPadandKeybordInput(0, 2) == true) { speed = speed / 2.f; }
	if (Input::GetArrowkeyVector().x != 0 && Input::GetArrowkeyVector().y != 0) { speed = speed / 1.5f; }
	if (Input::GetArrowkeyVector().x == Vector3_Right.x) { x += speed; }
	if (Input::GetArrowkeyVector().x == Vector3_Left.x) { x -= speed; }
	if (Input::GetArrowkeyVector().y == Vector3_Up.y) { y += speed; }
	if (Input::GetArrowkeyVector().y == Vector3_Down.y) { y -= speed; }
	if (Input::GetPadandKeybordInput(0, 3) == true)Shot();

}