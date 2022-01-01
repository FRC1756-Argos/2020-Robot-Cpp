/// \copyright Copyright (c) Argos FRC Team 1756.
///            Open Source Software; you can modify and/or share it under the terms of
///            the license file in the root directory of this project.

#pragma once

#include <ctre/Phoenix.h>
#include <frc2/command/SubsystemBase.h>

#include <TimeOfFlight.h>

class ElevatorSubsystem : public frc2::SubsystemBase {
 public:
  ElevatorSubsystem();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

 private:
  TalonSRX m_motorElevator;
  TalonSRX m_motorHopper;
  frc::TimeOfFlight m_sensorBottomPresence;
  frc::TimeOfFlight m_sensorTopPresence;
};
