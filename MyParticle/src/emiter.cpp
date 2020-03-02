#include"emiter.h"

void emiter::setup()
{

	createTime = 200;
	actualTime = ofGetElapsedTimeMillis();
	aftertime = false;
	lifeTime = 8000;
	wind = true;
	veloc = 2;
	cout << "urworzono emiter" << endl;

}


void emiter::update()
{
	create_particle();

}
void emiter::create_particle()
{
	sucessTimer = ofGetElapsedTimeMillis();
	if (sucessTimer - actualTime > createTime) {
		aftertime = true;
		actualTime = ofGetElapsedTimeMillis();
	}

}
particle emiter::emit_particle()
{
	particle tempParticle;
	tempParticle.setup(veloc, wind, lifeTime);
	aftertime = false;
	return tempParticle;
}