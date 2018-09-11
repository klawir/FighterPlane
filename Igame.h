#pragma once
#include "librares.h"
#include "rlutil.h"
#include "Missile.h"
#include "mob.h"
#include "Player.h"
#include "GameBoard.h"
#include "Keyboard.h"
#include "menu.h"
#include "Coordinates.h"

class IGame
{
	int enemyKilled;
	int fallingTime, enemyFallingTime;
	int indexX, indexY;
	int enemyKilledFallingSpeedModulo;
	int enemyKilledIncrementLifeModulo;
	int indexRestrictiveModulo;

	int counter;
	int bonusLife;
	int mobNumber;
	int index;
	bool mobBeginning;
	int coordColisionX, coordColisionY;
protected:
	Menu *menu;
	Mob *mob;
	Player *player;
	GameBoard *gameBoard;
	Missile *missile;
	Keyboard *keyboard;
	FighterAirPlane *fighterAirPlane;
public:
	IGame();
	~IGame();
	void CreateMenu();
	void CreateMob();
	void CreatePlayer();
	void CreateGameBoard();
	void CreateMissile();
	void CreateKeyboard();
	void CreateFighterAirPlane();

	Menu *GetMenu();
	Mob *GetMob();
	Player *GetPlayer();
	GameBoard *GetGameBoard();
	Missile *GetMissile();
	Keyboard *GetKeyboard();
	FighterAirPlane *GetFighterAirPlane();

	int EnemyRandom();
	void Enemy();
	void Missiles();
	void GameLoop();
	void Display();
	bool CheckHit();
	bool DetectGameOver();
	void GameOver();
};