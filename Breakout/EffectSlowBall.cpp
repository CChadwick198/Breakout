#include "EffectSlowBall.h"

void EffectSlowBall::applyEffect()
{
	if (auto* ball = _gameManager->getBall())
	{
		ball->setVelocity(0.5f);
	}
}

void EffectSlowBall::endEffect()
{
	if (auto* ball = _gameManager->getBall())
	{
		ball->setVelocity(1.0f);
	}
}
