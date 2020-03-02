#pragma once

#include "ofMain.h"
#include "particleSystem.h"
#include "emiter.h"
#include "particle.h"
#include "ofxGui.h"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		particleSystem snowSystem;
		ofParameter<float> g = 1.5, c = 0.45, n = 0.3;
		ofxPanel gui;
		ofxFloatSlider slider;

};
