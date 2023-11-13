#include "PlayerBullet.h"

void PlayerBullet::Initialize(const Vector2& pos)
{
	pos_ = pos;
	radius_ = 15;
	speed_ = 10;
}

void PlayerBullet::Update()
{
	pos_.y -= speed_;

	if (pos_.y <= 0.0f)
	{
		isDead_ = true;
	}
}

void PlayerBullet::Draw()
{
	Novice::DrawEllipse((int)pos_.x, (int)pos_.y, radius_, radius_, 0.0f, WHITE, kFillModeSolid);
}

