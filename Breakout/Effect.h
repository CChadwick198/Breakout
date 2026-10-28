#pragma once
#include "GameManager.h"
#include "CONSTANTS.h"

class EffectBase
{
public:
	EffectBase(GameManager* gameManager, float duration);

	virtual void update(float dt);

	virtual void applyEffect() = 0;
	virtual void endEffect() = 0;

	float getDuration() const;
	
protected:

	GameManager* _gameManager;
	float _duration;
};

