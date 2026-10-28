#pragma once
#include "Effect.h"

class EffectBigPaddle : public EffectBase
{
public:
	EffectBigPaddle(GameManager* gameManager, float duration) : EffectBase(gameManager, duration) {}

	virtual void applyEffect() override;
	virtual void endEffect() override;
};

