#include "MoveLeftCommand.h"
#include "Player.h"

MoveLeftCommand::~MoveLeftCommand()
{

}

void MoveLeftCommand::Exec(Player& player) 
{
	player.MoveLeft();
}
