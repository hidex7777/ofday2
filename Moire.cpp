#include "Moire.h"

Moire::Moire() {
	this->location.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
	moire_color.r = 93;
	moire_color.g = 126;
	moire_color.b = 160;
	this->isalive = false;

}

void Moire::update() {
	if (this->isalive == false) {
		if (ofRandom(10) > 9.99) {
			this->isalive = true;
			this->myr = ofRandom(10, 40);
			this->myalp = ofRandom(127, 200);
			this->myvelocity = ofRandom(0.1, 0.3);
		}
	}
	if (this->isalive == true) {
		this->myr = myr + this->myvelocity;
		this->myalp = myalp - (this->myvelocity/2);
	}
	if (this->myalp < 0) {
		this->isalive = false;
	}
}

void Moire::draw() {
	if (this->isalive) {
		ofNoFill();
		ofSetColor(moire_color, this->myalp);
		ofDrawCircle(this->location, this->myr);

	}
}