#pragma once
#include"GameStateContext.h"

class IGameStateContext : public GameStateContext
{
public:
	virtual void Update() = 0;
	virtual void Draw() = 0;
};
