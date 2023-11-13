#pragma once

class IScene
{
public:
	IScene();
	virtual ~IScene();
	virtual void Initialize() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	static int sceneNum;
};