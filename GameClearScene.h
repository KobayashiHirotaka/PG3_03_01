#pragma once
#include "IScene.h"
#include "ImGuiManager.h"

class GameClearScene : public IScene
{
public:
	GameClearScene();
	~GameClearScene()override;
	void Initialize()override;
	void Update()override;
	void Draw()override;

private:
};
