#pragma once
#include <memory>
#include "IScene.h"
#include "Player.h"
#include "Enemy.h"
#include "ImGuiManager.h"
#include "InputManager.h"

class GameStageScene : public IScene
{
public:
	GameStageScene();
	~GameStageScene()override;
	void Initialize()override;
	void Update()override;
	void Draw()override;

private:
	InputManager* inputManager_ = nullptr;

	std::unique_ptr<Player>player_;
	std::unique_ptr<Enemy>enemy_;
};

