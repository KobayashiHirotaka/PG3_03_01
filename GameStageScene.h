#pragma once
#include <memory>
#include "IScene.h"
#include "Player.h"
#include "InputHandler.h"
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

	std::unique_ptr<InputHandler> inputHandler_;
	
	ICommand* command_;
};

