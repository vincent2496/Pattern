#include "stdafx.h"

#include "Barbecuer.h"
#include "Command.h"
#include "BakeMuttonCommand.h"
#include "BakeChickenWingCommand.h"
#include "Waiter.h"

int main()
{
	Barbecuer* boy = new Barbecuer();

	Command* bakeMuttonCommand1 = new BakeMuttonCommand(*boy);
	Command* bakeMuttonCommand2 = new BakeMuttonCommand(*boy);
	Command* bakeChickenWingCommand1 = new BakeChickenWingCommand(*boy);
	Waiter* girl = new Waiter();

	girl->SetOrder(bakeMuttonCommand1);
	girl->Notify();
	girl->SetOrder(bakeMuttonCommand2);
	girl->Notify();
	girl->SetOrder(bakeChickenWingCommand1);
	girl->Notify();

	return 0;
};