/// \copyright Copyright (c) Argos FRC Team 1756.
///            Open Source Software; you can modify and/or share it under the terms of
///            the license file in the root directory of this project.

#pragma once

#include <ctre/Phoenix.h>
#include <frc2/command/SubsystemBase.h>

class ShooterSubsystem : public frc2::SubsystemBase {
 public:
  ShooterSubsystem();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

 private:
  TalonSRX m_motorHood;
  TalonSRX m_motorTurretRotate;
  TalonFX m_motorShooterLeader;
  TalonFX m_motorShooterFollower;

  /// @todo Add homing storage like in DriveSubsystem
};
