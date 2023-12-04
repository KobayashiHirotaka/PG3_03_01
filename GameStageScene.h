#pragma once
#include <memory>
#include "IScene.h"
#include "Player.h"
#include "ImGuiManager.h"

class GameStageScene : public IScene
{
public:
	GameStageScene();
	~GameStageScene()override;
	void Initialize()override;
	void Update()override;
	void Draw()override;

private:
	std::unique_ptr<Player>player_;
};

