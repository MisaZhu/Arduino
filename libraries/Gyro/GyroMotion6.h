#ifndef GYRO_MOTION6_H
#define GYRO_MOTION6_H 1

#include <Arduino.h>
#include "Gyro.h"

typedef struct Motion6_t {
  int16_t ax, ay, az, gx, gy, gz;
} Motion6T;

class GyroMotion6: public Gyro {
public:
  /**
  Read 6 axis motion data.
  @param m6 6 axis motion data (ax, ay, az, gx, gy, gz).
  @return false for failed, true for okay.
  */
  virtual bool readMotion6(Motion6T& m6);
};

#endif
