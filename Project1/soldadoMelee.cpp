#include "soldadoMelee.h"

#include <iostream>

using namespace std;

SoldadoMelee::SoldadoMelee(float maxHP, float maxStamina, float damage, bool isAlive, int posInArray, int attackRadius) : Soldado(maxHP, maxStamina, damage, isAlive, posInArray)
{
	this->maxHP = maxHP;
	this->currentHP = maxHP;
	this->maxStamina = maxStamina;
	this->currentStamina = maxStamina;
	this->damage = damage;
	this->isAlive = isAlive;
	this->posInArray = posInArray;
	this->attackRadius = attackRadius;
}

SoldadoMelee::~SoldadoMelee()
{
	cout << "Soldado Melee Destruido" << endl;
}

void SoldadoMelee::rest()
{
	currentHP = maxHP;
}

void SoldadoMelee::reciveDamage(float damageRecived)
{
	currentHP -= damageRecived;

	if (currentHP <= 0.0f)
	{
		currentHP = 0.0f;
	}
}

float SoldadoMelee::getStamina()
{
	return currentStamina;
}

float SoldadoMelee::getHP()
{
	return currentHP;
}
