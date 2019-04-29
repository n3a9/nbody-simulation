#ifndef body_utility_h
#define body_utility_h

#include "body.h"
#include "ofMain.h"

#include <math.h>
#include <stdio.h>

/*
  Class for a body interactions in the simulation.
*/
class BodyUtility {
 public:
  /* Calculate the distance between two bodies */
  static double Distance(Body a, Body b);

  /*
    Calculate the impact of body b presence to body a velocity using
    the corresponding time step
  */
  static Vector VelocityInteraction(Body a, Body b, double time_step);

  /*
    Use conservation of momentum given the mass and velocities of two bodies
  */
  static double ConserveMomentum(double m1, double m2, double v1, double v2);

  /*
    During an inelastic collision, generate a new body using the
    conservation of momentum.
  */
  static Body Collision(Body a, Body b);

  /*
    Function to determine if two bodies are touching
    (used for collision detection)
  */
  static bool SamePosition(Body a, Body b);
};

#endif /* body_utility_hpp */
