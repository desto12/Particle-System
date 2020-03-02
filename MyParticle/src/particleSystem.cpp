#include "particleSystem.h"

void particleSystem::setup()
{
	for (int i = 0; i < 10; i++)
	{
		emiter tempEmit;
		emit.push_back(tempEmit);
	}
	//emit.setup();
	emiterSetup();


}
void particleSystem::draw()
{
	for (int i = 0; i < particles.size(); i++) {
		particles[i].draw();
	}
}
void particleSystem::update()
{

	//emit.update();
	emiterUpdate();
	particlesControl();

}
void particleSystem::emiterUpdate()
{
		for (int i = 0; i < emit.size(); i++)
	{
		emit[i].update();
	}
}

void particleSystem::emiterSetup()
{
	for (int i = 0; i < emit.size(); i++)
	{
		emit[i].setup();
	}
}
void particleSystem::particlesControl()
{
	for (int i = 0; i < emit.size(); i++)
	{
		if (emit[i].aftertime)//adding particles after time
		{
			particles.push_back(emit[i].emit_particle());
		}
	}


	for (int i = 0; i < particles.size(); i++) {
		if (particles[i].deleteParticle == true)
		{
			particles.erase(particles.begin() + i);
		}
	}

	for (int i = 0; i < particles.size(); i++) {
		particles[i].update(g, c, n);
	}

}

