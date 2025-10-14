#pragma once

#include "soldado.h"

class SoldadoMelee : public Soldado
{	
protected:
	int attackRadius;

public:
	SoldadoMelee(float maxHP, float maxStamina, float damage, bool isAlive, int posInArray, int attackRadius);
	~SoldadoMelee();

	void rest() override;

	float getStamina();
	float getHP();
	float Attack(Soldado* attackedSoldier[]) = 0;
};