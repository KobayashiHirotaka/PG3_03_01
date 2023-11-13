#include "GameClearScene.h"

GameClearScene::GameClearScene()
{

}

GameClearScene::~GameClearScene()
{

}

void GameClearScene::Initialize()
{
	inputManager_ = InputManager::GetInstance();
}

void GameClearScene::Update()
{
	if (inputManager_->GetKeyDown(DIK_RETURN))
	{
		sceneNum = 0;
	}

	ImGui::Begin("ClearScene");
	ImGui::Text("ENTER : TITLESCENE");
	ImGui::End();
}

void GameClearScene::Draw()
{

}
