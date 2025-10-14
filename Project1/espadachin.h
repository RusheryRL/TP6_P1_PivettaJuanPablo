#pragma once

#include "soldadoMelee.h"

class Espadachin : public SoldadoMelee
{
protected:

public:
	Espadachin(float maxHP, float maxStamina, float damage, bool isAlive, int posInArray, int attackRadius, int maxEnemiesInAttack);
	~Espadachin();

	void rest();

	float getStamina();
	float getHP();
	float Attack(Soldado* attackedSoldier[]) = 0;
};