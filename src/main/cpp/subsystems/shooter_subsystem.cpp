/// \copyright Copyright (c) Argos FRC Team 1756.
///            Open Source Software; you can modify and/or share it under the terms of
///            the license file in the root directory of this project.

#include "subsystems/shooter_subsystem.h"

/// @todo Load actual configuration
ShooterSubsystem::ShooterSubsystem()
    : m_motorHood{0}, m_motorTurretRotate{0}, m_motorShooterLeader{0}, m_motorShooterFollower{0} {}

// This method will be called once per scheduler run
void ShooterSubsystem::Periodic() {}
