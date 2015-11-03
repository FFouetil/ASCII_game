#pragma once
class GameState
{
public:
	GameState();

	virtual ~GameState();

	virtual void Update() = 0;
	virtual void Display() = 0;
};

