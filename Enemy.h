#pragma once
#include <Novice.h>
#include "Vector2.h"

class Enemy
{
public:
	void Initialize();

	void Update();

	void Draw();

	Vector2 GetPos() { return pos_; }
	int GetRadius() { return radius_; }

private:
	Vector2 pos_;
	int radius_;
	int speed_;
};

