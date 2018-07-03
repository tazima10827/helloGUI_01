#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(Slider_0.setup("pos_x_offset",0,-100,100));
    gui.add(Slider_1.setup("pos_y_offset",0,-100,100));
    gui.add(Slider_2.setup("size",100,-300,300));
    gui.add(resolution.setup("circle res",8,3,64));
    gui.add(bgColor.setup("color",ofColor(125),ofColor(0,0),ofColor(255,255)));
    
    gui.add(show.setup("drawObject",true));
    gui.add(fullScreen.setup("fullScreen",false));
    showGUI = true;
    
    fullScreen.addListener(this, &ofApp::toggleFullscreemChanged);
//    fullScreen.addListener(this, ofApp::toggleFullscreemChanged);
    
    

}

void ofApp::toggleFullscreemChanged(bool & val){
    ofToggleFullscreen();
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(bgColor);
    
    if(show == true){
        ofSetCircleResolution(resolution);
        ofSetColor(255);
        ofDrawCircle(ofGetWidth()/2 + Slider_0, ofGetHeight()/2 + Slider_1, Slider_2);
    }
    if (showGUI==true){
        gui.draw();
    }
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == ' '){
        showGUI = !showGUI;
        
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
