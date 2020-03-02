#pragma once
#include "ofMain.h"
#include "emiter.h"
#include "particle.h"


class particleSystem
{
public:
	vector <particle> particles;
	//emiter emit;
	vector <emiter> emit;
	ofParameter<float> g = 1.5, c = 0.45, n = 0.3;



	void setup();
	void update();
	void draw();
	void emiterUpdate();
	void emiterSetup();
	void particlesControl();
};