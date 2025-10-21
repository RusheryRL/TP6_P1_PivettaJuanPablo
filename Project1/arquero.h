#pragma once

#include "soldadoRange.h"

class Arquero : public SoldadoRange
{
protected:
public:
	Arquero(float maxHP, float maxStamina, float damage, bool isAlive, int posInArray, int minAttackRange, int maxAttackRange, int hitChance);
	~Arquero();

	void rest();
	void reciveDamage(float damageRecived);
	void Attack(Soldado* attackedSoldier[], int index) override;

	float getStamina();
	float getHP();
};