/// \copyright Copyright (c) Argos FRC Team 1756.
///            Open Source Software; you can modify and/or share it under the terms of
///            the license file in the root directory of this project.

#include "subsystems/drive_subsystem.h"

/// @todo Load actual configuration
DriveSubsystem::DriveSubsystem()
    : m_motorDriveFrontLeft{0}
    , m_motorDriveFrontRight{0}
    , m_motorDriveRearRight{0}
    , m_motorDriveRearLeft{0}
    , m_motorTurnFrontLeft{0}
    , m_motorTurnFrontRight{0}
    , m_motorTurnRearRight{0}
    , m_motorTurnRearLeft{0}
    , m_encoderTurnFrontLeft{0}
    , m_encoderTurnFrontRight{0}
    , m_encoderTurnRearRight{0}
    , m_encoderTurnRearLeft{0}
    , m_maxAngularRate{units::make_unit<units::degrees_per_second_t>(0)}
    , m_maxVelocity{0_fps}
    , m_pSwerveKinematicsModel{nullptr}
    , m_pHomingStorage{nullptr}
    , m_activeControlMode{ControlMode::robotCentric} {}

// This method will be called once per scheduler run
void DriveSubsystem::Periodic() {}
