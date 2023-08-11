#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofEnableSmoothing();
    //setting for blend color
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    myImage.load("rikiya_icon.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 255, 255);
    myImage.draw(1000, 1000);
    //bitmap information place
    ofPixels pixels = myImage.getPixels();
    //get an image width and height
    int w = myImage.getWidth();
    int h = myImage.getHeight();
    for (int i = 0; i < w; i += 9){
        for(int j = 0; j < h; j += 9){
            //get a pixel's RGB value
            int valueR = pixels [j * 3 * w + i * 3];
            int valueG = pixels [j * 3 * w + i * 3 + 1];
            int valueB = pixels [j * 3 * w + i * 3 + 2];
            //draw a circle based on RGB value
            //pixel bright is using for circle radius
            ofSetColor(255, 0, 0, 63);
            ofDrawCircle(360 + i, 30 + j, 15 * valueR / 255.0);
            ofSetColor(0, 255, 0, 63);
            ofDrawCircle(360 + i, 30 + j, 15 * valueG / 255.0);
            ofSetColor(0, 0, 255, 63);
            ofDrawCircle(360 + i, 30 + j, 15 * valueB / 255.0);
        }
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    //push x key and capture an image
    if (key == 'x'){
        //setting an image position and size
        grabbedImage.grabScreen(430, 10, 1080, 720);
        //save image "grabbedImage.png"
        grabbedImage.save("grabbedImage.png");
    }
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
