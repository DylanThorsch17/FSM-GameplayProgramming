#ifndef WALKRIGHT_H
#define WALKRIGHT_H

#include <State.h>

class WalkRight : public State
{
public:
	WalkRight() {};
	~WalkRight() {};
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
};

#endif // !WALKRIGHT_H
