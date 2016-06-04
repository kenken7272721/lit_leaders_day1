#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 0, 0);
    ofSetColor(255, 255, 255, 255);
    
    for (int i = 0; i <= 1024; i += 128){
        ofLine(i, 0, i, 768);
    }
    
    for (int j = 0; j <= 768; j += 128){
        ofLine(0, j, 1024, j);
    }
    
    ofPushMatrix();
    
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofRotate(45);
        ofSetColor(200);
        ofRect(-150, -150, 300, 300);
    
    ofPopMatrix();
    
    /*
    ofEllipse(128, 354, 100, 600);
    ofEllipse(300, 100, 200, 100);
    ofRect(512, 384, 256, 124);
    ofTriangle(400, 680, 400, 750, 510, 750);
    */
     
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
