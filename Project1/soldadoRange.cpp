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

void SoldadoRange::reciveDamage(float damageRecived)
{
	currentHP -= damageRecived;

	if (currentHP <= 0.0f)
	{
		currentHP = 0.0f;
	}
}

float SoldadoRange::getStamina()
{
	return currentStamina;
}

float SoldadoRange::getHP()
{
	return currentHP;
}

