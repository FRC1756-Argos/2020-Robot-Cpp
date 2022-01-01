/// \copyright Copyright (c) Argos FRC Team 1756.
///            Open Source Software; you can modify and/or share it under the terms of
///            the license file in the root directory of this project.

#include "subsystems/intake_subsystem.h"

/// @todo Load actual configuration
IntakeSubsystem::IntakeSubsystem() : m_motorIntake{0}, m_solIntakeDeploy{0, frc::PneumaticsModuleType::CTREPCM, 0} {}

// This method will be called once per scheduler run
void IntakeSubsystem::Periodic() {}
