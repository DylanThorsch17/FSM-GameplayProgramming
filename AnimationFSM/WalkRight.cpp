#include <WalkRight.h>
#include <Jumping.h>
#include <Idle.h>

#include <string>

void WalkRight::idle(PlayerFSM* a)
{
	std::cout << "Walking Right -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void WalkRight::jumping(PlayerFSM* a)
{
	std::cout << "Walking Right -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

