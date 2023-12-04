#include "GameStageScene.h"

GameStageScene::GameStageScene()
{

}

GameStageScene::~GameStageScene()
{

}

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

	ImGui::Begin("STAGESCENE");
	ImGui::Text("AD : Move");
	ImGui::Text("SPACE : Shot");
	ImGui::End();
}

void GameStageScene::Draw()
{
	player_->Draw();
	enemy_->Draw();
}

