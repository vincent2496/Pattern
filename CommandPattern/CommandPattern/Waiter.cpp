
#include "StdAfx.h"
#include "Waiter.h"
#include "Command.h"
//class Command;

void Waiter::SetOrder(Command* command)
{
	this->command = command;
}

void Waiter::Notify()
{
	//Command* c = NULL;
	command->ExecuteCommand();
	//Command* thisCommand = this->command;//->ExecuteCommand();
	//thisCommand->ExecuteCommand();
}