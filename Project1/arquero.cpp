#include "arquero.h"

#include <iostream>

using namespace std;

Arquero::Arquero(float maxHP, float maxStamina, float damage, bool isAlive, int posInArray, int minAttackRange, int maxAttackRange, int hitChance) : SoldadoRange(maxHP, maxStamina, damage, isAlive, posInArray, minAttackRange, maxAttackRange)
{
	this->maxHP = maxHP;
	this->currentHP = maxHP;
	this->maxStamina = maxStamina;
	this->currentStamina = maxStamina;
	this->damage = damage;
	this->isAlive = isAlive;
	this->posInArray = posInArray;
	this->minAttackRange = minAttackRange;
	this->maxAttackRange = maxAttackRange;
}

Arquero::~Arquero()
{

}

void Arquero::rest()
{
	currentStamina = maxStamina;
}

void Arquero::reciveDamage(float damageRecived)
{
	currentHP -= damageRecived;

	if (currentHP <= 0.0f)
	{
		currentHP = 0.0f;
	}
}

float Arquero::getStamina()
{
	return currentStamina;
}

float Arquero::getHP()
{
	return currentHP;
}

void Arquero::Attack(Soldado* attackedSoldier[], int index)
{
	float enemyHP = attackedSoldier[index]->getHP();

	if (enemyHP <= 0) //temp hasta hacer el ataque bien
	{
		cout << "el enemigo esta muerto" << endl;

		return;
	}

	if (index <= maxAttackRange && index >= minAttackRange)
	{
		attackedSoldier[index]->reciveDamage(damage);
	}
}
