#ifndef constants_h
#define constants_h

/* Universal Gravitational Constant */
const double kG = 6.67E-11;

/* Number of bodies to be run in the simulation */
const int kBodyCount = 500;

/* Mass constants - scaled for compiler */
const double kMassScale = 1E-15;
const double kSolarMass = 1.989E30;
const double kSolarMassScaled = kMassScale * kSolarMass;

/* Time constants - scaled due to mass scale */
const double kTimeScale = 1E-10;
const double kSecondsInYear = 3.154E7;

/* Random velocity range for bodies */
const int kMetersInKiloMeters = 1000;
const double kMinVelocity = -0.5 * kMetersInKiloMeters;
const double kMaxVelocity = 0.5 * kMetersInKiloMeters;

/* Random mass range for bodies */
const double kMinMass = 0.025 * kSolarMassScaled;
const double kMaxMass = 100 * kSolarMassScaled;

/* Random radius range for bodies */
const double kMinRadius = 5;
const double kMaxRadius = 25;

#endif /* constants_h */
