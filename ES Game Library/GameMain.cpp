// #include "Extension\DirectX11\DXGraphics11.hpp"
#include "StdAfx.h"
#include "GameMain.h"

/// <summary>
/// Allows the game to perform any initialization it needs to before starting to run.
/// This is where it can query for any required services and load all of your content.
/// Initialize will enumerate through any components and initialize them as well.
/// </summary>
bool GameMain::Initialize()
{
	// TODO: Add your initialization logic here
	WindowTitle(_T("ES Game Library"));
	SceneManager::ChangeScene(SceneManager::MAIN);
	Input::Init();

	// ビューポート情報取得
	Viewport   view = GraphicsDevice.GetViewport();
	// カメラ設定
	Camera->SetView(Vector3(0.0f, 0.0f, -200.0f), Vector3(0.0f, 0.0f, 0.0f));
	Camera->SetPerspectiveFieldOfView(45.0f, (float)view.Width, (float)view.Height, 1.0f, 10000.0f);
	GraphicsDevice.SetCamera(Camera);
	return true;
}

/// <summary>
/// Finalize will be called once per game and is the place to release
/// all resource.
/// </summary>
void GameMain::Finalize()
{
	// TODO: Add your finalization logic here

}

/// <summary>
/// Allows the game to run logic such as updating the world,
/// checking for collisions, gathering input, and playing audio.
/// </summary>
/// <returns>
/// Scene continued value.
/// </returns>
int GameMain::Update()
{
	Input::Update();
	// TODO: Add your update logic here
	sceneManager.Update();

	return 0;
}

/// <summary>
/// This is called when the game should draw itself.
/// </summary>
void GameMain::Draw()
{
	// TODO: Add your drawing code here
	GraphicsDevice.Clear(Color_CornflowerBlue);

	GraphicsDevice.BeginScene();
	sceneManager.Draw3D();

	SpriteBatch.Begin();
	sceneManager.Draw2D();

	SpriteBatch.End();

	GraphicsDevice.EndScene();
}
