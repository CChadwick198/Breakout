#pragma once

class Effect
{
public:
	Effect(float duration) : _duration(duration) {}

	virtual void update(float dt);
	
protected:
	virtual void applyEffect() = 0;
	virtual void endEffect() = 0;

	float _duration;
};

