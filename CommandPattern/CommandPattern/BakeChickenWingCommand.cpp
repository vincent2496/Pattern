#include "StdAfx.h"
#include "BakeChickenWingCommand.h"


BakeChickenWingCommand::BakeChickenWingCommand(Barbecuer receiver):Command(receiver)
{
	this->receiver = receiver;
}

void BakeChickenWingCommand::ExecuteCommand()
{
	receiver.BakeChickenWing();
}