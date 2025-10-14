#include "espadachin.h"

#include <iostream>

using namespace std;

Espadachin::Espadachin(float maxHP, float maxStamina, float damage, bool isAlive, int posInArray, int attackRadius, int maxEnemiesInAttack) : SoldadoMelee(maxHP, maxStamina, damage, isAlive, posInArray, attackRadius)
{
	this->maxHP = maxHP;
	this->currentHP = maxHP;
	this->maxStamina = maxStamina;
	this->currentStamina = maxStamina;
	this->damage = damage;
	this->isAlive = isAlive;
	this->posInArray = posInArray;
	this->attackRadius = attackRadius;
	this->maxEnemiesInAttack = maxEnemiesInAttack;
}

Espadachin::~Espadachin()
{
	cout << "Espadachin Destruido" << endl;
}

void Espadachin::rest()
{
	currentHP = maxHP;
}

float Espadachin::getStamina()
{
	return currentStamina;
}

float Espadachin::getHP()
{
	return currentHP;
}

float SoldadoMelee::Attack(Soldado* attackedSoldier[])
{
	if (currentStamina < MIN_STAMINA_PER_ATTACK)
	{
		cout << "No tiene estamina! necesita descansar, Pierde el turno" << endl;
		rest();
	}
	else
	{
		currentStamina -= MIN_STAMINA_PER_ATTACK;

		enemyHP -= damage;
	}

	return enemyHP;
}
