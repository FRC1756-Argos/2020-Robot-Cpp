/// \copyright Copyright (c) Argos FRC Team 1756.
///            Open Source Software; you can modify and/or share it under the terms of
///            the license file in the root directory of this project.

#pragma once

#include <ctre/Phoenix.h>
#include <frc/Solenoid.h>
#include <frc2/command/SubsystemBase.h>

class ClimberSubsystem : public frc2::SubsystemBase {
 public:
  ClimberSubsystem();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

 private:
  TalonSRX m_motorClimb;
  frc::Solenoid m_solClimbBrake;
};
