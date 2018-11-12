#ifndef WALKLEFT_H
#define WALKLEFT_H

#include <State.h>

class WalkLeft : public State
{
public:
	WalkLeft() {};
	~WalkLeft() {};
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
};

#endif // !WALKLEFT_H