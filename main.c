#include <stdio.h>

// Function to model self-aligning torque as a function of steering angle
// For simplicity, assume linear proportionality with a negative sign (torque opposes steering angle)
double selfAlignTorque(double angle) {
    double stiffness = 5.0; // Nm per rad
    return -stiffness * angle;
}

int main() {
    double angles[] = {-0.2, -0.1, 0.0, 0.1, 0.2}; // steering angles in radians
    int n = sizeof(angles) / sizeof(angles[0]);
    for (int i = 0; i < n; i++) {
        double torque = selfAlignTorque(angles[i]);
        printf("Angle %.2f rad -> self-aligning torque %.2f Nm\n", angles[i], torque);
    }
    return 0;
}
