#pragma once
#include "Effect.h"

class EffectFireBall : public EffectBase
{
public:
	EffectFireBall(GameManager* gameManager, float duration) : EffectBase(gameManager, duration) {}

	virtual void update(float dt) override;
	virtual void applyEffect() override;
	virtual void endEffect() override;
};

