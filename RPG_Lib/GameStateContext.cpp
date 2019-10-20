#include "GameStateContext.h"

void GameStateContext::SetState(IGameState* gs)
{
	if (m_CurrentState != nullptr)
		m_CurrentState->DeInitialize();
	
	if (gs != nullptr)
		gs->Initialize();
	
	m_CurrentState = gs;
}

void GameStateContext::Run()
{
	while (m_CurrentState != nullptr)
	{
		Update();
		Draw();
	}
}

void GameStateContext::Update()
{
	if (m_CurrentState != nullptr)
		m_CurrentState->Update();

}

void GameStateContext::Draw()
{

	if (m_CurrentState != nullptr)
		m_CurrentState->Draw();
}
