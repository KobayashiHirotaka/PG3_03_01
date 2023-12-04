#pragma once
#include <Novice.h>
#include <memory>
#include "ImGuiManager.h"
#include "IScene.h"
#include "GameTitleScene.h"
#include "GameStageScene.h"
#include "GameClearScene.h"

class SceneManager
{
public:
	void Initialize();

	void Update();

	//void Draw();

	void Release();

	void Run();

	enum GameSceneNum
	{
		TITLE,
		PLAY,
		CLEAR
	};

private:
	std::unique_ptr<IScene>state[3];
	int currentSceneNum_;
	int prevSceneNum_;
};
