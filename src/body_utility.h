#ifndef body_utility_h
#define body_utility_h

#include "body.h"
#include "ofMain.h"

#include <math.h>
#include <stdio.h>

/*
  Class for a body interaction functions in the simulation. This includes
  distance, velocity interaction, conservation of momentum, collision handling,
  and collision detection.
*/
class BodyUtility {
 public:
  /*
    Will return the magnitude of the distance between the two given bodies (a)
    and (b) in the 3D space.
   */
  static double Distance(Body a, Body b);

  /*
    This function will find the impact of the gravitational acceleration on the
    velocity on the first body (a) from the second body (b). Specifically,
    it uses the force equation:

    F = m1 m2 G / |r|^3 * r,

    where we can cancel the masses from F=ma to find that

    a = m2 G / |r|^3 * r.

    Multiply this acceleration with the given time step (time_step) to find and
    return the change in velocity on the first body (a).
  */
  static Vector VelocityInteraction(Body a, Body b, double time_step);

  /*
    To conserve momentum between two bodies, use the given masses (m1) and (m2)
    as well as corresponding velocity vectors in 3D space (v1) and (v2) and use
    the equation

    ((m1 v1) + (m2 v2)) / (m1 + m2)

    to calculate the velocity in the corresponding component for the combined
    body.
  */
  static double ConserveMomentum(double m1, double m2, double v1, double v2);

  /*
    Will handle collision between two bodies by combining the two given bodies
    (a) and (b) together. This is done by calculating each component of velocity
    (x, y, z) for the final body using the conservation of momentum and adding
    the mass. For the visual simulation, the radius of the larger body is used
    for the new body.
  */
  static Body Collision(Body a, Body b);

  /*
    Detection if the two given bodies (a) and (b) are in the same position. This
    is calculated by determining if the planets are 'touching' by adding the
    radii with each other and finding if it is larger than the distance between
    the two bodies.
  */
  static bool SamePosition(Body a, Body b);
};

#endif /* body_utility_hpp */
