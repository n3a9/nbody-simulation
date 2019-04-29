#include "body_utility.h"

double BodyUtility::Distance(Body a, Body b) {
  return sqrt(
      ((a.position_.x - b.position_.x) * (a.position_.x - b.position_.x)) +
      ((a.position_.y - b.position_.y) * (a.position_.y - b.position_.y)) +
      ((a.position_.z - b.position_.z) * (a.position_.z - b.position_.z)));
}

Vector BodyUtility::VelocityInteraction(Body a, Body b, double time_step) {
  double distance = Distance(a, b);
  double g = (b.mass_ * kG / (distance * distance * distance)) * time_step;
  return Vector(g * (a.position_.x - b.position_.x),
                g * (a.position_.y - b.position_.y),
                g * (a.position_.z - b.position_.z));
}

double BodyUtility::ConserveMomentum(double m1, double m2, double v1,
                                     double v2) {
  return ((m1 * v1) + (m2 * v2)) / (m1 + m2);
}

Body BodyUtility::Collision(Body a, Body b) {
  Vector velocity =
      Vector(ConserveMomentum(a.mass_, b.mass_, a.velocity_.x, b.velocity_.x),
             ConserveMomentum(a.mass_, b.mass_, a.velocity_.y, b.velocity_.y),
             ConserveMomentum(a.mass_, b.mass_, a.velocity_.z, b.velocity_.z));
  return Body(a.position_, velocity, a.mass_ + b.mass_,
              std::max(a.radius_, b.radius_));
}

bool BodyUtility::SamePosition(Body a, Body b) {
  return a.radius_ + b.radius_ > Distance(a, b);
}
