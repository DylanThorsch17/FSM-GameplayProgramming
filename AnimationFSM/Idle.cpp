#include <Idle.h>

#include <Jumping.h>
#include <Climbing.h>
#include <Swording.h>
#include <Shoveling.h>
#include <Hammering.h>
#include <WalkLeft.h>
#include <WalkRight.h>

#include <string>

void Idle::handleInput() {}
void Idle::update() {}

void Idle::jumping(PlayerFSM* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Idle::climbing(PlayerFSM* a)
{
	std::cout << "Idle -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Idle::swording(PlayerFSM* a)
{
	std::cout << "Idle -> Swording" << std::endl;
	a->setCurrent(new Swording());
	delete this;
}

void Idle::shoveling(PlayerFSM* a)
{
	std::cout << "Idle -> Shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}

void Idle::hammering(PlayerFSM* a)
{
	std::cout << "Idle -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void Idle::walkleft(PlayerFSM* a)
{
	std::cout << "Idle -> WalkLeft" << std::endl;
	a->setCurrent(new WalkLeft());
	delete this;
}

void Idle::walkright(PlayerFSM* a)
{
	std::cout << "Idle -> Walking Right" << std::endl;
	a->setCurrent(new WalkRight());
	delete this;
}