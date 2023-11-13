#include "Player.h"

void Player::Initialize()
{
	inputManager_ = InputManager::GetInstance();

	pos_.x = 640.0f;
	pos_.y = 560.0f;
	radius_ = 50;
	speed_ = 5;
}

void Player::Update()
{
	bullets_.remove_if([](std::unique_ptr<PlayerBullet>& bullet) {
		if (bullet->GetIsDead())
		{
			bullet.reset();
			return true;
		}
		return false;
		});

	if (inputManager_->GetKey(DIK_A))
	{
		pos_.x -= speed_;
	}

	if (inputManager_->GetKey(DIK_D))
	{
		pos_.x += speed_;
	}

	if (pos_.x <= 55.0f)
	{
		pos_.x = 55.0f;
	}

	if (pos_.x >= 1225.0f)
	{
		pos_.x = 1225.0f;
	}

	const int kShotInterval = 10;

	if (inputManager_->GetKey(DIK_SPACE))
	{
		if (--bulletTimer_ < 0.0f) 
		{
			bulletTimer_ = kShotInterval;
			PlayerBullet* newBullet = new PlayerBullet();
			newBullet->Initialize({ pos_.x,pos_.y });
			bullets_.push_back(std::unique_ptr<PlayerBullet>(newBullet));
		}
	}

	for (std::unique_ptr<PlayerBullet>& bullet : bullets_)
	{
		bullet->Update();
	}
}

void Player::Draw()
{
	for (std::unique_ptr<PlayerBullet>& bullet : bullets_)
	{
		bullet->Draw();
	}

	Novice::DrawEllipse((int)pos_.x, (int)pos_.y, radius_, radius_, 0.0f, WHITE, kFillModeSolid);
}
