#pragma once

#include "soldadoRange.h"

class Ballestero : public SoldadoRange
{
protected:
	int hitChance;
public:
	Ballestero(float maxHP, float maxStamina, float damage, bool isAlive, int posInArray, int minAttackRange, int maxAttackRange, int hitChance);
	~Ballestero();

	void rest();
	void reciveDamage(float damageRecived);
	void Attack(Soldado* attackedSoldier[], int index) override;

	float getStamina();
	float getHP();
};