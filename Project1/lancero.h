#pragma once

#include "soldadoMelee.h"

class Lancero : public SoldadoMelee
{
protected:

public:
	Lancero(float maxHP, float maxStamina, float damage, bool isAlive, int posInArray, int attackRadius);
	~Lancero();

	void rest();
	void reciveDamage(float damageRecived);
	void Attack(Soldado* attackedSoldier[], int index) override;

	float getStamina();
	float getHP();
};