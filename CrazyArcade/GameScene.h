#pragma once
#include "Scene.h"
#include "Bomb.h"
#include "Player.h"
#include "Map.h"

class GameScene : public Scene
{
private:
	RECT ID_Rect;
	RECT SCORE_Rect;
	RECT LIFE_Rect;

	float Timer;
	wstring ScoreStr;
	int score;

	Player* MainChar;
	Player* OtherChar;
	Map* map;

	bool ColliderDrawMode;
	vector<Bomb*> OtherBombs;
public:
	GameScene();
	~GameScene();

	void DrawButtons();
	ButtonType CheckClick(POINT mpos, int flag);
	void CheckKeyDown();
	void ReceiveData(Packet* data);

	void Render();
	void Update();
	void ResetScene();
};

