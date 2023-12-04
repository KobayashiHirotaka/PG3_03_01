#pragma once
#include "ICommand.h"

class MoveRightCommand : public ICommand 
{
public:
	~MoveRightCommand() override;
	void Exec(Player& player) override;
};