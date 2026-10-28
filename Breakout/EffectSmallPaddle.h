#pragma once
#include "Effect.h"

class EffectSmallPaddle : public EffectBase
{
public:
	EffectSmallPaddle(GameManager* gameManager, float duration) : EffectBase(gameManager, duration) {}

	virtual void applyEffect() override;
	virtual void endEffect() override;

};

