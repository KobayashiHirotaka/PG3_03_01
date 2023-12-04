#include "InputHandler.h"

void InputHandler::AssingMoveLeftCommand2PressKeyA() 
{
	pressKeyA_ = new MoveLeftCommand();
	this->pressKeyA_ = pressKeyA_;
}

void InputHandler::AssingMoveRightCommand2PressKeyD()
{
	pressKeyD_ = new MoveRightCommand();
	this->pressKeyD_ = pressKeyD_;
}

ICommand* InputHandler::HandleInput()
{
	if (Novice::CheckHitKey(DIK_A))
	{
		return pressKeyA_;
	}

	if (Novice::CheckHitKey(DIK_D))
	{
		return pressKeyD_;
	}

	return nullptr;
}
