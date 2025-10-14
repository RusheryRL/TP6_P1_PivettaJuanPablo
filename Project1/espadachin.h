#pragma once

#include "soldadoMelee.h"

class Espadachin : public SoldadoMelee
{
protected:


public:
	Espadachin();
	~Espadachin();

	void rest();

	float getStamina();
	float getHP();
	float Attack(float enemyHP) override;
};