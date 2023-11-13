#include "GameClearScene.h"

void GameClearScene::Initialize()
{

}

void GameClearScene::Update()
{
	ImGui::Begin("SceneNum");
	ImGui::Text("Clear : SceneNum %d", sceneNum);
	ImGui::InputInt("SceneNum", &sceneNum);
	ImGui::End();
}

void GameClearScene::Draw()
{

}
