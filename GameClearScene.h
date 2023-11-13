#pragma once
#include "IScene.h"
#include "ImGuiManager.h"
#include "InputManager.h"

class GameClearScene : public IScene
{
public:
	GameClearScene();
	~GameClearScene()override;
	void Initialize()override;
	void Update()override;
	void Draw()override;

private:
	InputManager* inputManager_ = nullptr;
};
