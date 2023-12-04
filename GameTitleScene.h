#pragma once
#include "IScene.h"
#include "ImGuiManager.h"

class GameTitleScene : public IScene
{
public:
	GameTitleScene();
	~GameTitleScene()override;
	void Initialize()override;
	void Update()override;
	void Draw()override;
};

