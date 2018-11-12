#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>

Player::Player()
{
	m_state.setCurrent(new Idle());
	m_state.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& s) : m_animated_sprite(s)
{
	m_state.setCurrent(new Idle());
	m_state.setPrevious(new Idle());
}

Player::~Player() {}

AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_animated_sprite.getCurrentFrame();
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(frame));
	return m_animated_sprite;
}

void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	switch (in.getCurrent())
	{
	case Input::Action::IDLE:
		//std::cout << "Player Idling" << std::endl;
		m_state.idle();
		break;
	case Input::Action::UP:
		//std::cout << "Player Up" << std::endl;
		//m_state.climbing();
		m_state.climbing();
		break;
	case Input::Action::LEFT:
		//std::cout << "Player Left" << std::endl;
		m_state.jumping();
		break;
	case Input::Action::RIGHT:
		//std::cout << "Player Idling" << std::endl;
		m_state.jumping();
		break;
	case Input::Action::SWORD:
		//std::cout << "Player Swording" << std::endl;
		m_state.swording();
		break;
	case Input::Action::SHOVEL:
		//std::cout << "Player Swording" << std::endl;
		m_state.shoveling();
		break;

	case Input::Action::HAMMER:
		//std::cout << "Player Swording" << std::endl;
		m_state.hammering();
		break;

	case Input::Action::WALKLEFT:
		//std::cout << "Player Swording" << std::endl;
		m_state.walkleft();
		break;

	case Input::Action::WALKRIGHT:
		//std::cout << "Player Swording" << std::endl;
		m_state.walkright();
		break;
	default:
		break;
	}
}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();
}