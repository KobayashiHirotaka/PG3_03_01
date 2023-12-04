#pragma once
#include <Novice.h>
#include <memory>
#include <list>
#include "Vector2.h"
#include "PlayerBullet.h"

class Player
{
public:
	void Initialize();

	void Update();

	void Draw();

	Vector2 GetPos() { return pos_; }
	int GetRadius() { return radius_; }

	const std::list<std::unique_ptr<PlayerBullet>>& GetBullets() { return bullets_; }

private:
	Vector2 pos_;
	int radius_;
	int speed_;

	std::list<std::unique_ptr<PlayerBullet>> bullets_;
	int bulletTimer_;
};

