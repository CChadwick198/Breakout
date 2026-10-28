#include "EffectManager.h"

EffectManager::EffectManager(sf::RenderWindow* window, GameManager* gameManager)
	: _window(window), _gameManager(gameManager)
{
}

void EffectManager::update(float dt)
{
	for (auto it = _activeEffects.begin(); it != _activeEffects.end();)
	{
		if ((*it)->getDuration() <= 0.f)
		{
			/* Get the index we are currently at so we can remove it from the pair list. */
			size_t index = std::distance(_activeEffects.begin(), it);
			_activePowerups.erase(std::next(_activePowerups.begin(), index));

			/* _activeEffects elements are unique_ptrs so (hopefully) they delete themselves when removed from the list. */
			it = _activeEffects.erase(it);
		}
		else
		{
			(*it)->update(dt);
			++it;
		}
	}
}

void EffectManager::addEffect(std::pair<POWERUPS, float> givenPowerup)
{
	if (givenPowerup.first == none) { return; }

	/* Create new unique_ptr for the given powerup and add it to the effects list. */

	switch (givenPowerup.first)
	{
	case bigPaddle:
		_activeEffects.push_back(std::make_unique<EffectBigPaddle>(_gameManager, givenPowerup.second));
		break;
	case smallPaddle:
		_activeEffects.push_back(std::make_unique<EffectSmallPaddle>(_gameManager, givenPowerup.second));
		break;
	case fastBall:
		_activeEffects.push_back(std::make_unique<EffectFastBall>(_gameManager, givenPowerup.second));
		break;
	case slowBall:
		_activeEffects.push_back(std::make_unique<EffectSlowBall>(_gameManager, givenPowerup.second));
		break;
	case fireBall:
		_activeEffects.push_back(std::make_unique<EffectFireBall>(_gameManager, givenPowerup.second));
		break;
	}

	_activePowerups.push_back(givenPowerup);
}



std::vector<std::pair<POWERUPS, float>> EffectManager::getActivePowerups() const { return _activePowerups; }
