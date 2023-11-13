#include "Enemy.h"

void Enemy::Initialize()
{
	posX_ = 640;
	posY_ = 160;
	radius_ = 50;
	speed_ = 5;
}

void Enemy::Update()
{
	posX_ += speed_;

	if (posX_ > 1225)
	{
		speed_ *= -1;
	}

	if (posX_ < 55)
	{
		speed_ *= -1;
	}

}

void Enemy::Draw()
{
	Novice::DrawEllipse(posX_, posY_, radius_, radius_, 0.0f, WHITE, kFillModeSolid);
}

