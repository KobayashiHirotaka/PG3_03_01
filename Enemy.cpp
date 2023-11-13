#include "Enemy.h"

void Enemy::Initialize()
{
	pos_.x = 640.0f;
	pos_.y = 160.0f;
	radius_ = 50;
	speed_ = 5;
}

void Enemy::Update()
{
	pos_.x += speed_;

	if (pos_.x > 1225.0f)
	{
		speed_ *= -1;
	}

	if (pos_.x < 55.0f)
	{
		speed_ *= -1;
	}

}

void Enemy::Draw()
{
	Novice::DrawEllipse((int)pos_.x, (int)pos_.y, radius_, radius_, 0.0f, RED, kFillModeSolid);
}

