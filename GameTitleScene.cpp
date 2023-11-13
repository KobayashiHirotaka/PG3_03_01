#include "GameTitleScene.h"

GameTitleScene::GameTitleScene()
{

}

GameTitleScene::~GameTitleScene()
{

}

void GameTitleScene::Initialize()
{
	inputManager_ = InputManager::GetInstance();
}

void GameTitleScene::Update()
{
	if (inputManager_->GetKeyDown(DIK_RETURN))
	{
		sceneNum = 1;
	}

	ImGui::Begin("TitleScene");
	ImGui::Text("ENTER : STAGESCENE");
	ImGui::End();
}

void GameTitleScene::Draw()
{

}

