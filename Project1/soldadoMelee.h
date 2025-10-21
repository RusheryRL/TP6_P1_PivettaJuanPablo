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
	void reciveDamage(float damageRecived);
	virtual void Attack(Soldado* attackedSoldier[], int index) = 0;

	float getStamina();
	float getHP();
};