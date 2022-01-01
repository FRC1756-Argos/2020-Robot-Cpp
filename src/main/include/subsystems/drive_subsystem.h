/// \copyright Copyright (c) Argos FRC Team 1756.
///            Open Source Software; you can modify and/or share it under the terms of
///            the license file in the root directory of this project.

#pragma once

#include <argos_lib/general/swerve_utils.h>
#include <ctre/Phoenix.h>
#include <frc/kinematics/SwerveDriveKinematics.h>
#include <frc2/command/SubsystemBase.h>
#include <units/angular_velocity.h>
#include <units/velocity.h>

#include <memory>

class DriveSubsystem : public frc2::SubsystemBase {
 public:
  /**
  * @brief User control mode for swerve
  */
  enum class ControlMode {
    fieldCentric,  ///< Forward is constant relative to field
    robotCentric,  ///< Forward is constant relative to robot chassis
  };
  DriveSubsystem();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

 private:
  TalonFX m_motorDriveFrontLeft;
  TalonFX m_motorDriveFrontRight;
  TalonFX m_motorDriveRearRight;
  TalonFX m_motorDriveRearLeft;
  TalonFX m_motorTurnFrontLeft;
  TalonFX m_motorTurnFrontRight;
  TalonFX m_motorTurnRearRight;
  TalonFX m_motorTurnRearLeft;

  CANCoder m_encoderTurnFrontLeft;
  CANCoder m_encoderTurnFrontRight;
  CANCoder m_encoderTurnRearRight;
  CANCoder m_encoderTurnRearLeft;

  /// @todo Add IMU (https://github.com/wpilibsuite/allwpilib/pull/3777)

  units::angular_velocity::degrees_per_second_t m_maxAngularRate;
  units::feet_per_second_t m_maxVelocity;

  std::unique_ptr<frc::SwerveDriveKinematics<4>> m_pSwerveKinematicsModel;

  std::unique_ptr<argos_lib::swerve::SwerveHomeStorageInterface> m_pHomingStorage;

  ControlMode m_activeControlMode;
};
