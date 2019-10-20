#pragma once

#include "IGameState.h"
#include"Singleton.h"

class GameStateContext : public UnCopyable
{

protected:
	IGameState* m_CurrentState = nullptr;

	GameStateContext() {};

	friend Singleton<GameStateContext>;

public:
	IGameState* GetState() { return m_CurrentState; }

	void SetState(IGameState* gs);

	virtual void Run();

	virtual void Update();

	virtual void Draw();



};


typedef Singleton<GameStateContext> TheGameStateContext;