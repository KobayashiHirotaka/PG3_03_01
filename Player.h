#pragma once
#include <Novice.h>
#include <memory>
#include <list>
#include "Vector2.h"

class Player
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

