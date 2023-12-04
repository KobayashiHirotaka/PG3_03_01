#include "Player.h"

void Player::Initialize()
{
	pos_.x = 640.0f;
	pos_.y = 560.0f;
	radius_ = 50;
	speed_ = 5;
}

void Player::Update()
{
	if (pos_.x <= 55.0f)
	{
		pos_.x = 55.0f;
	}

	if (pos_.x >= 1225.0f)
	{
		pos_.x = 1225.0f;
	}
}

void Player::Draw()
{
	Novice::DrawEllipse((int)pos_.x, (int)pos_.y, radius_, radius_, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveLeft() 
{
	pos_.x -= speed_;
}

void Player::MoveRight()
{
	pos_.x += speed_;
}
