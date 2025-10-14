#include "soldadoRange.h"

#include <iostream>

using namespace std;

SoldadoRange::SoldadoRange(float maxHP, float maxStamina, float damage, bool isAlive, int posInArray, int minAttackRange, int maxAttackRange) : Soldado(maxHP, maxStamina, damage, isAlive, posInArray)
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

SoldadoRange::~SoldadoRange()
{
	cout << "Soldado Range Destruido" << endl;
}

void SoldadoRange::rest()
{
	currentHP = maxHP;
}

float SoldadoRange::getStamina()
{
	return currentStamina;
}

float SoldadoRange::getHP()
{
	return currentHP;
}

float SoldadoRange::Attack(float enemyHP)
{
	if (currentStamina < MIN_STAMINA_PER_ATTACK)
	{
		cout << "No tiene estamina! necesita descansar, Pierde el turno" << endl;
		rest();
	}
	else
	{

	}
}
