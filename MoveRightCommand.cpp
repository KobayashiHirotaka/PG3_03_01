#include "MoveRightCommand.h"
#include "Player.h"

MoveRightCommand::~MoveRightCommand()
{

}

void MoveRightCommand::Exec(Player& player) 
{
	player.MoveRight();
}
