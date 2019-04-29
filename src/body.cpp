#include "body.h"

void Body::Draw() const {
  ofEnableAlphaBlending();
  ofSetColor(244, 107, 66);
  ofDrawSphere(position_.x, position_.y, position_.z, radius_);
}

void Body::UpdatePosition(double time_step) {
  position_.x += (velocity_.x * time_step);
  position_.y += (velocity_.y * time_step);
  position_.z += (velocity_.z * time_step);
}
