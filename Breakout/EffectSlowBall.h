#pragma once
#include "Effect.h"

class EffectSlowBall : public EffectBase
{
public:
	EffectSlowBall(GameManager* gameManager, float duration) : EffectBase(gameManager, duration) {}

	virtual void applyEffect() override;
	virtual void endEffect() override;

};

