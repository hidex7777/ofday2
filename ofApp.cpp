#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(255);
	ofSetWindowTitle("ofday2");
	ofEnableAlphaBlending();
	ofSetCircleResolution(64);

	for (int i = 0; i < 500; i++) {
		this->moires.push_back(shared_ptr<Moire>(new Moire()));
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < this->moires.size(); i++) {
		this->moires[i]->update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < this->moires.size(); i++) {
		this->moires[i]->draw();
	}

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
	string now = ofGetTimestampString("%Y%m%d%H%M%S");
	grabbedImage.grabScreen(0, 0, 1000, 1000);
	grabbedImage.saveImage("of" + now + ".jpg");
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
