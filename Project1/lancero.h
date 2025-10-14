#pragma once

#include "soldadoMelee.h"

class Lancero : public SoldadoMelee
{
protected:

public:
	Lancero(float maxHP, float maxStamina, float damage, bool isAlive, int posInArray, int attackRadius, int maxEnemiesInAttack);
	~Lancero();

	void rest();

	float getStamina();
	float getHP();
	//ataque
};