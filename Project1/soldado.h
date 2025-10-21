#pragma once

const float MIN_STAMINA_PER_ATTACK = 10.0f;

class Soldado
{
protected:

	float currentHP;
	float maxHP;
	float currentStamina;
	float maxStamina;
	float damage;

	bool isAlive;

	int posInArray;

public:

	Soldado(float maxHP, float maxStamina, float damage, bool isAlive, int posInArray);
	virtual ~Soldado();

	virtual void rest() = 0;
	virtual void Attack(Soldado* attackedSoldier[], int index) = 0;
	virtual void reciveDamage(float damageRecived);

	float getStamina();
	float getHP();

};