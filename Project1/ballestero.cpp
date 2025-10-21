#include "ballestero.h"

#include <iostream>
#include <ctime>

using namespace std;

Ballestero::Ballestero(float maxHP, float maxStamina, float damage, bool isAlive, int posInArray, int minAttackRange, int maxAttackRange, int hitChance)  : SoldadoRange(maxHP, maxStamina, damage, isAlive, posInArray, minAttackRange, maxAttackRange)
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
	this->hitChance = hitChance;
}

Ballestero::~Ballestero()
{
	cout << "Ballestero destruido" << endl;
}

void Ballestero::rest()
{
	currentStamina = maxStamina;
}

void Ballestero::reciveDamage(float damageRecived)
{
	currentHP -= damageRecived;

	if (currentHP <= 0.0f)
	{
		currentHP = 0.0f;
	}
}

float Ballestero::getStamina()
{
	return currentStamina;
}

float Ballestero::getHP()
{
	return currentHP;
}

void Ballestero::Attack(Soldado* attackedSoldier[], int index)
{
	float enemyHP = attackedSoldier[index]->getHP();

	for (int i = 0; i < 2; i++)
	{
		if (enemyHP == 0) //temp hasta hacer el ataque bien
		{
			cout << "el enemigo esta muerto" << endl;

			continue;
		}

		float chance = rand() % 10;

		if (hitChance < chance)
		{
			attackedSoldier[index]->reciveDamage(damage);
		}
	}
}