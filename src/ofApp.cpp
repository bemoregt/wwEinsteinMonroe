#include "ofApp.h"

using namespace ofxCv;
using namespace cv;
//--------------------------------------------------------------
void ofApp::setup(){

    filePath1= "/Users/kerbal/Desktop/aa.png";
    filePath2= "/Users/kerbal/Desktop/bb.png";
    
    image1.load(filePath1);
    image2.load(filePath2);

    cv::Mat kkk= toCv(image1);
    cv::Mat ttt= toCv(image2);
    cv::cvtColor(kkk, kkk, CV_BGR2GRAY);
    cv::cvtColor(ttt, ttt, CV_BGR2GRAY);
    // make gray
    
    // blur
    cv::GaussianBlur(kkk, kkk, cv::Size(19, 19), 19.5);
    toOf(kkk, after1);
    // HPF
    cv::Mat hhh, final;
    cv::GaussianBlur(ttt, hhh, cv::Size(15, 15), 19.5);
    cv::subtract(ttt, hhh, ttt);
    cv::add(kkk, ttt, final);
    toOf(final, after2);
    after2.update();
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255, 255, 255);
    image1.draw(0, 0, 256, 256);
    image2.draw(256, 0, 256, 256);
    after2.draw(512, 0, 256, 256);
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
