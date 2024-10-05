// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Shooter.h"

Shooter::Shooter() = default;

// This method will be called once per scheduler run
void Shooter::Periodic() {

}

void Shooter::Shoot() {
    m_left_motor.Set(-0.8);
    m_right_motor.Set(1.0);
}

void Shooter::Stop() {
    m_left_motor.Set(0);
    m_right_motor.Set(0);
}
