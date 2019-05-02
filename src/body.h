#ifndef body_h
#define body_h

#include "constants.h"
#include "ofMain.h"

#include <math.h>
#include <stdio.h>

/*
  Struct to hold a 3 dimensional vector with components x y z.
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
  Class for a body in the simulation that tracks the position, velocity, mass,
  and radius. Also carries the relevant functions for drawing the body in the
  simulation, as well as updating the body.
*/
class Body {
 public:
  Vector position_;
  Vector velocity_;
  double mass_;
  double radius_;

  Body(Vector p, Vector v, double m, double r) {
    position_ = p;
    velocity_ = v;
    mass_ = m;
    radius_ = r;
  }

  /* Will draw the body in the OpenFrameworks application. */
  void Draw() const;

  /*
    Update the position of the body by modeling the body movement with the
    given time step.
   */
  void UpdatePosition(double time_step);
};

#endif /* body_h */
