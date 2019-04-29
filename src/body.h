#ifndef body_h
#define body_h

#include "constants.h"
#include "ofMain.h"

#include <math.h>
#include <stdio.h>

/*
  Struct to hold a 3 dimensional vector
*/
struct Vector {
  double x;
  double y;
  double z;

  Vector() {
    x = 0.0;
    y = 0.0;
    z = 0.0;
  }

  Vector(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
  }
};

/*
  Class for a body in the simulation.
*/
class Body {
 public:
  /* The position of the body in 3 dimensional space */
  Vector position_;

  /* The velocity of the body in 3 dimensional space */
  Vector velocity_;

  /* The mass of the body */
  double mass_;

  /* The radius of the body (visual only) */
  double radius_;

  Body(Vector p, Vector v, double m, double r) {
    position_ = p;
    velocity_ = v;
    mass_ = m;
    radius_ = r;
  }

  /* Will draw the body in the OpenFrameworks application */
  void Draw() const;

  /* Update the position of the body using the time step */
  void UpdatePosition(double time_step);
};

#endif /* body_h */
