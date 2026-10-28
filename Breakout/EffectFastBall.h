#pragma once
#include "Effect.h"

class EffectFastBall : public EffectBase
{
public:
	EffectFastBall(GameManager* gameManager, float duration) : EffectBase(gameManager, duration) {}

	virtual void applyEffect() override;
	virtual void endEffect() override;

};

