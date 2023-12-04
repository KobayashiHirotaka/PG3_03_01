#pragma once
#include <Novice.h>
#include "MoveLeftCommand.h"
#include "MoveRightCommand.h"

class InputHandler
{
public:
	ICommand* HandleInput();

	void AssingMoveLeftCommand2PressKeyA();
	void AssingMoveRightCommand2PressKeyD();

private:
	ICommand* pressKeyA_;
	ICommand* pressKeyD_;
};
