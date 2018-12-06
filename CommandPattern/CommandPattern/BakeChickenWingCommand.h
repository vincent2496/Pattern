#pragma once

#include "Command.h"
#include "Barbecuer.h"
class Command;
//class Barbecuer;

class BakeChickenWingCommand : public Command
{
public:
	BakeChickenWingCommand(Barbecuer receiver);
	void ExecuteCommand();
private:
	Barbecuer receiver;
};