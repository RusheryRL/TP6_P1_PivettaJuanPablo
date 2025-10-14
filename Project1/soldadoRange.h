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

	float getStamina();
	float getHP();
	float Attack(float enemyHP) override;
};