#include "StdAfx.h"
#include "BakeMuttonCommand.h"


BakeMuttonCommand::BakeMuttonCommand(Barbecuer receiver):Command(receiver)
{
	this->receiver = receiver;
}

void BakeMuttonCommand::ExecuteCommand()
{
	receiver.BakeMutton();
}