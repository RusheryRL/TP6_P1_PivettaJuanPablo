#pragma once

#include "soldadoMelee.h"

class Espadachin : public SoldadoMelee
{
protected:

public:
	Espadachin(float maxHP, float maxStamina, float damage, bool isAlive, int posInArray, int attackRadius);
	~Espadachin();

	void rest();
	void reciveDamage(float damageRecived);
	void Attack(Soldado* attackedSoldier[], int index) override;

	float getStamina();
	float getHP();

};