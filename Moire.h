#pragma once
#include "ofMain.h"

class Moire
{
public:
	Moire();
	void update();
	void draw();
private:
	ofVec2f location;
	ofColor moire_color;
	float myalp;
	float myr;
	float myvelocity;
	bool isalive;
};