#include"SceneManager.h"

BaseScene *SceneManager::presently_scene = nullptr;    

void SceneManager::ChangeScene(SCENE scene) {

	if (presently_scene != nullptr) {delete presently_scene;}

	switch (scene) {          
	case SCENE::TITLE:
		presently_scene = new TitleScene();      
	case SCENE::MAIN:
		presently_scene = new MainScene();      
		break;
	case SCENE::RESULT:
		presently_scene = new ResultScene();     
		break;
	}
	presently_scene->Initialize();
}

void SceneManager::Update() {
	presently_scene->Update();        
}

void SceneManager::Draw2D() {
	presently_scene->Draw2D();
}

void SceneManager::Draw3D() {
	presently_scene->Draw3D();          }

void SceneManager::DrawAlpha3D() {
	presently_scene->DrawAlpha3D();
}

void SceneManager::DrawCanvas() {
	presently_scene->DrawCanvas();
}
