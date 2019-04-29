#pragma once

#include "body_utility.h"
#include "ofMain.h"
#include "ofxBloom.h"

#include <vector>

class ofApp : public ofBaseApp {
 private:
  /* The bodies in the simulation */
  std::vector<Body> bodies;

  /* The current time step of the simulation */
  double time_step_ = kTimeScale * kSecondsInYear;

  /* The time that has passed in the simulation */
  double time_passed_;

  /* The camera utilities for viewing the simulation */
  ofEasyCam camera_;
  ofFbo fbo_;
  std::shared_ptr<ofxBloom> bloom_;

  /*
    Will generate static bodies into the simulation with
    random mass and random radius as defined in constants
  */
  void GenerateStaticBodies();

  /*
    Will generate kinetic bodies into the simulation with
    random velocity, mass, and radius as defined in constants
  */
  void GenerateKineticBodies();

  /* Will clear the bodies in the simulation and reset time */
  void ResetSimulation();

 public:
  /* Will set up the application for the simulation */
  void setup();

  /* Will update the application while running */
  void update();

  /*
    Will paint the bodies of the simulation, as well as the
    instructions and usage
  */
  void draw();

  /*
    Will track when a key is pressed and correspond to the
    action - change speed or set simulation
  */
  void keyPressed(int key);
};
