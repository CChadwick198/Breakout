#include "Effect.h"

EffectBase::EffectBase(GameManager* gameManager, float duration)
	: _gameManager(gameManager), _duration(duration)
{
	//	applyEffect();
}

void EffectBase::update(float dt)
{
	_duration -= dt;

	if (_duration <= 0)
	{
		endEffect();
	}
}

float EffectBase::getDuration() const { return _duration; }
