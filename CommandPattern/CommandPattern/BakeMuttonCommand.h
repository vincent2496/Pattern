#pragma once

#include "Command.h"
#include "Barbecuer.h"
class Command;
//class Barbecuer;

class BakeMuttonCommand : public Command
{
public:
	BakeMuttonCommand(Barbecuer receiver);
	void ExecuteCommand();
private:
	Barbecuer receiver;
};