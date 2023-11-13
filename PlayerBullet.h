#pragma once
#include <Novice.h>
#include "Vector2.h"

class PlayerBullet
{
public:
	void Initialize(const Vector2& pos);

	void Update();

	void Draw();

	Vector2 GetPos() { return pos_; }
	int GetRadius() { return radius_; }

	bool GetIsDead() { return isDead_; }
	void SetIsDead(bool isDead) { isDead_ = isDead; }

private:
	Vector2 pos_;
	int radius_;
	int speed_;
	bool isDead_ = false;
};

