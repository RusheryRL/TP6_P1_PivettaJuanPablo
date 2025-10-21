#include "lancero.h"

#include <iostream>

using namespace std;

Lancero::Lancero(float maxHP, float maxStamina, float damage, bool isAlive, int posInArray, int attackRadius) : SoldadoMelee(maxHP, maxStamina, damage, isAlive, posInArray, attackRadius)
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

Lancero::~Lancero()
{
	cout << "Lancero Destruido" << endl;
}

void Lancero::rest()
{
	currentStamina = maxStamina;
}

void Lancero::reciveDamage(float damageRecived)
{
	currentHP -= damageRecived;

	if (currentHP <= 0.0f)
	{
		currentHP = 0.0f;
	}
}

float Lancero::getStamina()
{
	return currentStamina;
}

float Lancero::getHP()
{
	return currentHP;
}

void Lancero::Attack(Soldado* attackedSoldier[], int index)
{
	float enemyHP = attackedSoldier[index]->getHP();

	if (enemyHP <= 0) //temp hasta hacer el ataque bien
	{
		cout << "el enemigo esta muerto" << endl;

		return;
	}

	if (posInArray < index)
	{
		for (int i = posInArray; i <= index; i++)
		{
			attackedSoldier[i]->reciveDamage(damage);
		}
	}
	else
	{
		for (int i = index; i <= posInArray; i++)
		{
			attackedSoldier[i]->reciveDamage(damage);
		}
	}
}
