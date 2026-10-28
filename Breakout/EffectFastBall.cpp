#include "EffectFastBall.h"

void EffectFastBall::applyEffect()
{
	if (auto* ball = _gameManager->getBall())
	{
		ball->setVelocity(5.0f);
	}
}

void EffectFastBall::endEffect()
{
	if (auto* ball = _gameManager->getBall())
	{
		ball->setVelocity(1.0f);
	}
}
