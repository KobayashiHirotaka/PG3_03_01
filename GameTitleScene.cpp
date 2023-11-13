#include "GameTitleScene.h"

void GameTitleScene::Initialize()
{

}

void GameTitleScene::Update()
{
	ImGui::Begin("SceneNum");
	ImGui::Text("Title : SceneNum %d", sceneNum);
	ImGui::InputInt("SceneNum", &sceneNum);
	ImGui::End();
}

void GameTitleScene::Draw()
{

}

