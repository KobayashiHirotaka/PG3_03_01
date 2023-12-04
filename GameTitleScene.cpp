#include "GameTitleScene.h"

GameTitleScene::GameTitleScene()
{

}

GameTitleScene::~GameTitleScene()
{

}

void GameTitleScene::Initialize()
{
	
}

void GameTitleScene::Update()
{
	sceneNum = 1;

	ImGui::Begin("TitleScene");
	ImGui::Text("ENTER : STAGESCENE");
	ImGui::End();
}

void GameTitleScene::Draw()
{

}

