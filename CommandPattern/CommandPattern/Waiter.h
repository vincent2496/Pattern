//#ifndef _WAITER_
//#endif _WAITER_
#pragma once
//#include "Command.h"
class Command;


class Waiter
{
public:
	void SetOrder(Command* command);
	void Notify();
private:
	Command* command;
};