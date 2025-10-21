#include "soldado.h"

#include <iostream>

using namespace std;

Soldado::Soldado(float maxHP, float maxStamina, float damage, bool isAlive, int posInArray)
{
	this->maxHP = maxHP;
	this->currentHP = maxHP;
	this->maxStamina = maxStamina;
	this->currentStamina = maxStamina;
	this->damage = damage;
	this->isAlive = isAlive;
	this->posInArray = posInArray;
}

Soldado::~Soldado()
{
	cout << "Soldado Destruido" << endl;
}

float Soldado::getStamina()
{
	return currentStamina;
}

float Soldado::getHP()
{
	return currentHP;
}

void Soldado::reciveDamage(float damageRecived)
{
	currentHP -= damageRecived;

	if (currentHP <= 0.0f)
	{
		currentHP = 0.0f;
	}
}
