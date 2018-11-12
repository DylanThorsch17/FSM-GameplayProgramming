#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <Input.h>
#include <PlayerFSM.h>
#include <Debug.h>

class State
{
public:
	virtual void handleInput() {}

	virtual void update() {}

	virtual void idle(PlayerFSM* a)
	{
		DEBUG_MSG("State::Idling");
	}
	virtual void jumping(PlayerFSM* a)
	{
		DEBUG_MSG("State::Jumping");
	}
	virtual void climbing(PlayerFSM* a)
	{
		DEBUG_MSG("State::Climbing");
	}

	virtual void swording(PlayerFSM* a)
	{
		DEBUG_MSG("State::Swording");
	}

	virtual void shoveling(PlayerFSM* a)
	{
		DEBUG_MSG("State::Shoveling");
	}

	virtual void hammering(PlayerFSM* a)
	{
		DEBUG_MSG("State::Hammering");
	}

	virtual void walkleft(PlayerFSM* a)
	{
		DEBUG_MSG("State::WalkLeft");
	}

	virtual void walkright(PlayerFSM* a)
	{
		DEBUG_MSG("State::WalkRight");
	}
};

#endif // ! ANIMATION_H

