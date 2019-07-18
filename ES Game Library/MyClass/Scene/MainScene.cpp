#include"MainScene.h"

void MainScene::Initialize() {
	Character_Ref player(new Player());
	AddLList(player);
}
void MainScene::Update() {
	if (MathHelper_Random(0, 50) == 0) {
		Character_Ref enemy(new Enemy());
		AddLList(enemy);
	}
	std::for_each(Character_List.begin(), Character_List.end(), [](Character_Ref& chara) {chara->Update(); });
}
void MainScene::Draw3D() {
	std::for_each(Character_List.begin(), Character_List.end(), [](Character_Ref& chara) {chara->Draw3D(); });
}
void MainScene::Draw2D() {
	
}
void MainScene::DrawAlpha3D() {
	
}
void MainScene::DrawCanvas() {
	std::for_each(Character_List.begin(), Character_List.end(), [](Character_Ref& chara) {chara->DrawCanvas(); });
}

void MainScene::AddLList(Character_Ref& chara) {
	Character_List.push_back(chara);
}