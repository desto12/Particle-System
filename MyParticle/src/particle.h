#pragma once
#include "ofMain.h" 

class particle
{
public:
	glm::vec3 pos;
	glm::vec3 vel;
	glm::vec3 resist_force;
	glm::vec3 direct_vec;
	float size,dt,windfrc;
	unsigned long actualTime2, sucessTimer;
	unsigned int deleteTime;
	bool deleteParticle, isWind;

	void draw();
	void update(float f, float k, float n);
	void setup(float veloc, bool wind,float lifeTime);
	void delete_particle();
	void gravity(float g);
	void airResistance(float C);
	void wind(float n);

};