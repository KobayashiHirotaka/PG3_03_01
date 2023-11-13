#include "Player.h"

void Player::Initialize()
{
	posX_ = 640;
	posY_ = 560;
	radius_ = 50;
}

void Player::Update()
{
	/*bulletTimer_--;
	for (int i = 0; i < 10; i++)
	{
		if (keys[DIK_SPACE] && isBulletShot_[i] == 0 && bulletTimer_ <= 0)
		{
			isBulletShot_[i] = 1;
			bulletPosX_[i] = posX_;
			bulletPosY_[i] = posY_;
			bulletTimer_ = 10;
			break;
		}
	}


	for (int i = 0; i < 10; i++)
	{
		if (isBulletShot_[i] == 1)
		{
			bulletPosY_[i] -= bulletSpeed_;
		}

		if (bulletPosY_[i] <= -50)
		{
			isBulletShot_[i] = 0;
		}
	}*/
}

void Player::Draw()
{
	Novice::DrawEllipse(posX_, posY_, radius_, radius_, 0.0f, WHITE, kFillModeSolid);
}
