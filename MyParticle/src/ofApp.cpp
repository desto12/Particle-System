#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0, 0, 25);
	snowSystem.setup();

	gui.setup();
	snowSystem.g.set("Gravity", g, 1, 10);
	snowSystem.emit[1].createTime.set("Create Time", snowSystem.emit[1].createTime, 100, 3000);
	snowSystem.n.set("Wind Force", n, 0.6, 3);
	snowSystem.c.set("Air Resistance", snowSystem.c, 0, 0.7);
	gui.add(snowSystem.g);
	gui.add(snowSystem.c);
	gui.add(snowSystem.n);
	gui.add(snowSystem.emit[1].createTime);
}

//--------------------------------------------------------------
void ofApp::update(){
	snowSystem.update();


}

//--------------------------------------------------------------
void ofApp::draw(){
	gui.draw();
	snowSystem.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
