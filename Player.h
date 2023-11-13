#pragma once
#include <Novice.h>

class Player
{
public:
	void Initialize();

	void Update();

	void Draw();

private:
	int posX_;
	int posY_;
	int radius_;

	int bulletPosX_[10];
	int bulletPosY_[10];
	int bulletSpeed_ = 10;
	int bulletTimer_ = 10;
	bool isBulletShot_[10];
};

