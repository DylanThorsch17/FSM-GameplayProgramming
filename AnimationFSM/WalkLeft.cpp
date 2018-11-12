#include <WalkLeft.h>
#include <Jumping.h>
#include <Idle.h>

#include <string>

void WalkLeft::idle(PlayerFSM* a)
{
	std::cout << "Walking Left -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void WalkLeft::jumping(PlayerFSM* a)
{
	std::cout << "Walking Left -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}