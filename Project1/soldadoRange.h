#pragma once

#include "soldado.h"

class SoldadoRange : public Soldado
{
protected:
	int minAttackRange;
	int maxAttackRange;

public:
	SoldadoRange(float maxHP, float maxStamina, float damage, bool isAlive, int posInArray, int minAttackRange, int maxAttackRange);
	~SoldadoRange();

	void rest() override;
	void reciveDamage(float damageRecived);
	virtual void Attack(Soldado* attackedSoldier[], int index) = 0;

	float getStamina();
	float getHP();

};