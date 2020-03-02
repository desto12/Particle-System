#include"particle.h"

void particle::setup(float veloc, bool wind, float lifeTime)
{
	pos.x = ofRandom(1000);
	pos.y = ofRandom(-15);
	pos.z = 0;
	size = ofRandom(2, 6);
	vel.x = ofRandom(0, 1);//starting speedvel
	vel.y = veloc;
	vel.z = 0;
	dt = 1.001;
	isWind = wind;
	deleteParticle = false;
	deleteTime = lifeTime;
	actualTime2 = ofGetElapsedTimeMillis();
}
void particle::draw()
{
	ofDrawCircle(pos.x, pos.y, size);
}

void particle::update(float f, float k, float n)
{


	airResistance(k);
	gravity(f);
	delete_particle();
	if (isWind)
	{
		wind(n);
	}
}
void particle::gravity(float g)
{
	vel.y = vel.y + g + resist_force.y;
	pos.y = pos.y + vel.y * dt;
}

void particle::airResistance(float C)
{
	direct_vec = -1 * vel;//kierunek odwrotny do przyspieszenia
	direct_vec = glm::normalize(direct_vec);
	resist_force = 0.5*C*sqrt(vel*vel)*size*direct_vec;
}
void particle::delete_particle()
{
	sucessTimer = ofGetElapsedTimeMillis();
	if (sucessTimer - actualTime2 > deleteTime) {
		deleteParticle = true;
		actualTime2 = ofGetElapsedTimeMillis();
	}
}

void particle::wind(float n)
{
	windfrc = ofSignedNoise(pos.x *0.0003, pos.y * 0.006, ofGetElapsedTimef() * 0.6)*n;
	vel.x = windfrc;
	pos.x = pos.x + vel.x *dt;
}