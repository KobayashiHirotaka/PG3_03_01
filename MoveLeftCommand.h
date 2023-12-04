#pragma once
#include "ICommand.h"

class MoveLeftCommand : public ICommand
{
public:
	~MoveLeftCommand() override;
	void Exec(Player& player) override;
};