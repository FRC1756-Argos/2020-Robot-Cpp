/// \copyright Copyright (c) Argos FRC Team 1756.
///            Open Source Software; you can modify and/or share it under the terms of
///            the license file in the root directory of this project.

#include "subsystems/pneumatic_control_subsystem.h"

PneumaticControlSubsystem::PneumaticControlSubsystem(CompressorConfig compressorConfig)
    : m_compressor(compressorConfig.module, compressorConfig.moduleType) {}

// This method will be called once per scheduler run
void PneumaticControlSubsystem::Periodic() {}
