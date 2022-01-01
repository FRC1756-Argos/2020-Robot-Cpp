/// \copyright Copyright (c) Argos FRC Team 1756.
///            Open Source Software; you can modify and/or share it under the terms of
///            the license file in the root directory of this project.

#pragma once

#include <frc2/command/Command.h>

// General
#include "subsystems/pneumatic_control_subsystem.h"

// Control
#include <argos_lib/subsystems/swappable_controllers_subsystem.h>

// Drive
#include "subsystems/drive_subsystem.h"

// Game Piece Implements
#include "subsystems/intake_subsystem.h"
#include "subsystems/elevator_subsystem.h"
#include "subsystems/shooter_subsystem.h"

// Miscellaneous Implements
#include "subsystems/control_panel_subsystem.h"
#include "subsystems/climber_subsystem.h"

/**
 * This class is where the bulk of the robot should be declared.  Since
 * Command-based is a "declarative" paradigm, very little robot logic should
 * actually be handled in the {@link Robot} periodic methods (other than the
 * scheduler calls).  Instead, the structure of the robot (including subsystems,
 * commands, and button mappings) should be declared here.
 */
class RobotContainer {
 public:
  RobotContainer();

  frc2::Command* GetAutonomousCommand();

 private:
  // General
  PneumaticControlSubsystem m_pneumaticControl;

  // Control
  argos_lib::SwappableControllersSubsystem m_controllers;

  // Drive
  DriveSubsystem m_drive;

  // Game Piece Implements
  IntakeSubsystem m_intake;
  ElevatorSubsystem m_elevator;
  ShooterSubsystem m_shooter;

  // Miscellaneous Implements
  ControlPanelSubsystem m_controlPanel;
  ClimberSubsystem m_climber;

  void ConfigureButtonBindings();
};
