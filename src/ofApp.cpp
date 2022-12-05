#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofEnableSmoothing();
    //setting for blend color
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    myImage.load("Última_Cena_-_Da_Vinci_5.jpg");

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 255, 255);
    myImage.draw(5193, 2926);
    //bitmap information place
    ofPixels pixels = myImage.getPixels();
    //get an image width and height
    int w = myImage.getWidth();
    int h = myImage.getHeight();
    for (int i = 0; i < w; i += 8){
        for(int j = 0; j < h; j += 8){
            //get a pixel's RGB value
            int valueR = pixels [j * 3 * w + i * 3];
            int valueG = pixels [j * 3 * w + i * 3 + 1];
            int valueB = pixels [j * 3 * w + i * 3 + 2];
            //draw a circle based on RGB value
            //pixel bright is using for circle radius
            ofSetColor(255, 0, 0, 63);
            ofDrawCircle(440 + i, 20 + j, 10 * valueR / 255.0);
            ofSetColor(0, 255, 0, 63);
            ofDrawCircle(440 + i, 20 + j, 10 * valueG / 255.0);
            ofSetColor(0, 0, 255, 63);
            ofDrawCircle(440 + i, 20 + j, 10 * valueB / 255.0);
        }
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    //push x key and capture an image
    if (key == 'x'){
        //setting an image position and size
        grabbedImage.grabScreen(5193, 10, 2926, 642);
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
