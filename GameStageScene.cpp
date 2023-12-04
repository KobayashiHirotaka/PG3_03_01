#include "GameStageScene.h"

GameStageScene::GameStageScene()
{

}

GameStageScene::~GameStageScene()
{

}

void GameStageScene::Initialize()
{
	inputHandler_ = std::make_unique<InputHandler>();
	
	inputHandler_->AssingMoveLeftCommand2PressKeyA();
	inputHandler_->AssingMoveRightCommand2PressKeyD();

	player_= std::make_unique<Player>();
	player_->Initialize();
}

void GameStageScene::Update()
{
	command_ = inputHandler_->HandleInput();

	if (this->command_) 
	{
		command_->Exec(*player_);
	}

	player_->Update();

	ImGui::Begin("STAGESCENE");
	ImGui::Text("AD : Move");
	ImGui::End();
}

void GameStageScene::Draw()
{
	player_->Draw();
}

