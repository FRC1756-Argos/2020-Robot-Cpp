/// \copyright Copyright (c) Argos FRC Team 1756.
///            Open Source Software; you can modify and/or share it under the terms of
///            the license file in the root directory of this project.

#pragma once

#include <ctre/Phoenix.h>
#include <frc2/command/SubsystemBase.h>

#include <TMD37003.h>

class ControlPanelSubsystem : public frc2::SubsystemBase {
 public:
  ControlPanelSubsystem();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

 private:
  TalonSRX m_motorControlPanelRotate;
  frc::TMD37003 m_sensorColor;
};
