#include "EffectBigPaddle.h"

void EffectBigPaddle::applyEffect()
{
	if (auto* paddle = _gameManager->getPaddle())
	{
		paddle->setWidth(1.5f);
	}
}

void EffectBigPaddle::endEffect()
{
	if (auto* paddle = _gameManager->getPaddle())
	{
		paddle->setWidth(1.0f);
	}
}
