#pragma once
#include "SteeringBehavior.h"
#include "FlockingAgent.h"

class CohesionBehavior : public SteeringBehavior
{
	
public:
	
	CohesionBehavior();
	~CohesionBehavior();
	
	Vector2D CalculateForces(Agent* agent, Vector2D target, float dtime) override;
	Vector2D CalculateForces(Agent* agent, Agent* target, float dtime) override;
};
