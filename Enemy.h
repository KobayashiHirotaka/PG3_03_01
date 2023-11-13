#pragma once
#include <Novice.h>

class Enemy
{
public:
	void Initialize();

	void Update();

	void Draw();

private:
	int posX_;
	int posY_;
	int radius_;
	int speed_;
};

