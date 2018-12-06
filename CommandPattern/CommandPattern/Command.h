#pragma once

//#include "StdAfx.h"
#include "Barbecuer.h"
//class Barbecuer;

class Command
{
public:
	Command(Barbecuer receiver);
	virtual void ExecuteCommand() = 0;
private:
	Barbecuer receiver;
};