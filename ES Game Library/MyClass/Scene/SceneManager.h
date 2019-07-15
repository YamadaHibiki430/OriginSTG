#pragma once
#include"BaseScene.h"
#include"MainScene.h"
#include"TitleScene.h"
#include"ResultScene.h"

class SceneManager {
public:
	enum SCENE {
		TITLE,
		MAIN,
		RESULT
	};

	static void ChangeScene(SCENE scene);
	static void Update();
	static void Draw3D();
	static void Draw2D();
	static void DrawAlpha3D();

	static BaseScene *presently_scene;     

private:

};

