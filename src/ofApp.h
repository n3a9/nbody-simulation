#pragma once

#include "body_utility.h"
#include "ofMain.h"
#include "ofxBloom.h"

#include <vector>

/*
  The main class for updating and maintaining the simulation. Tracks the current
  bodies, time step, as well as the time passed in the simulation.
*/
class ofApp : public ofBaseApp {
 private:
  /* Simulation variables */
  std::vector<Body> bodies;
  double time_step_ = kTimeScale * kSecondsInYear;
  double time_passed_;

  /* Camera utilities */
  ofEasyCam camera_;
  ofFbo fbo_;
  std::shared_ptr<ofxBloom> bloom_;

  /*
    Will generate static bodies (no initial velocity) into the simulation with
    random mass and random radius in the range defined in the constants file.
    Will generate positions given the width of the OpenFrameworks application.
  */
  void GenerateStaticBodies();

  /*
    Will generate kinetic bodies into the simulation with
    random velocities, mass, and radius in the range defined in the constants
    file. Will generate positions given the width of the OpenFrameworks
    application.
  */
  void GenerateKineticBodies();

  /*
    Will reset the simulation by clearing the bodies in the simulation and
    resetting the time passed.
  */
  void ResetSimulation();

 public:
  /* Will set up the application for the simulation. */
  void setup();

  /*
    Will update the application while running, including updating each body
    position and velocity.
  */
  void update();

  /*
    Will paint the bodies of the simulation, as well as the
    instructions and tracked simulation variables.
  */
  void draw();

  /*
    Will track when a key is pressed and run the corresponding action.
    1 : Generate static bodies
    2 : Generate kinetic bodies
    -> : Increase speed by 2x
    <- : Decrease speed by 2x
  */
  void keyPressed(int key);
};
