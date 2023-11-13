#include "GameStageScene.h"

void GameStageScene::Initialize()
{
	player_= std::make_unique<Player>();
	player_->Initialize();

	enemy_ = std::make_unique<Enemy>();
	enemy_->Initialize();
}

void GameStageScene::Update()
{
	player_->Update();
	enemy_->Update();

	ImGui::Begin("SceneNum");
	ImGui::Text("Stage : SceneNum %d", sceneNum);
	ImGui::InputInt("SceneNum", &sceneNum);
	ImGui::End();
}

void GameStageScene::Draw()
{
	player_->Draw();
	enemy_->Draw();
}

