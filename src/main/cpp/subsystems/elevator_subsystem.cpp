/// \copyright Copyright (c) Argos FRC Team 1756.
///            Open Source Software; you can modify and/or share it under the terms of
///            the license file in the root directory of this project.

#include "subsystems/elevator_subsystem.h"

/// @todo Load actual configuration
ElevatorSubsystem::ElevatorSubsystem()
    : m_motorElevator{0}, m_motorHopper{0}, m_sensorBottomPresence{0}, m_sensorTopPresence{0} {}

// This method will be called once per scheduler run
void ElevatorSubsystem::Periodic() {}
