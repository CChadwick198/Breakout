#include "Effect.h"

void Effect::update(float dt)
{
	_duration -= dt;

	if (_duration <= 0)
	{
		endEffect();
	}
}