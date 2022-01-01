/// \copyright Copyright (c) Argos FRC Team 1756.
///            Open Source Software; you can modify and/or share it under the terms of
///            the license file in the root directory of this project.

#pragma once

#include <frc/Compressor.h>
#include <frc2/command/SubsystemBase.h>

class PneumaticControlSubsystem : public frc2::SubsystemBase {
 public:
  /**
   * @brief Structured configuration parameters for a compressor object
   */
  struct CompressorConfig {
    int module;                            ///< Address of the pneumatic module controlling compressor
    frc::PneumaticsModuleType moduleType;  ///< Vendor of the pneumatic module controlling compressor
  };

  explicit PneumaticControlSubsystem(CompressorConfig compressorConfig);

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

 private:
  frc::Compressor m_compressor;
};
