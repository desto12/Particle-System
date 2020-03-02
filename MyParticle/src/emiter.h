#pragma once
#include "ofMain.h"
#include "particle.h"

class emiter
{
public:
	unsigned long actualTime, sucessTimer;
	ofParameter<unsigned int> createTime;
	bool aftertime, wind;
	float time, lifeTime, veloc;

	particle emit_particle();
	void setup();
	void update();
	void create_particle();
	

	
	
};