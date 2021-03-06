//
//  SettingsViewController.h
//  BallEscape
//
//  Created by Alberto Salido López on 25/11/12.
//  Copyright (c) 2012 Alberto Salido López. All rights reserved.
//

//  Framework references.
#import <UIKit/UIKit.h>

//  File References.
#import "MainViewController.h"

//  View Controller for handling the settings of the application.
//  The available settings for the application are the SFX sound,
//  if the ghost can pass throw walls and to reset the scores obtained.
//
@interface SettingsViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *soundLabel;
@property (weak, nonatomic) IBOutlet UILabel *ghostThoughWallsLabel;
@property (weak, nonatomic) IBOutlet UILabel *clearDataLabel;
@property (weak, nonatomic) IBOutlet UISwitch *soundSwitcher;
@property (weak, nonatomic) IBOutlet UISwitch *ghostThroughSwitcher;
@property (weak, nonatomic) IBOutlet UIButton *clearButton;

//  Returns to the  main menu.
- (IBAction)backToMenuButtonAction:(UIButton *)sender;

//  Turns on or off the sound.
- (IBAction)soundSwitcher:(UISwitch *)sender;

//  Reset the scores obtained.
- (IBAction)clearDataButtonAction:(UIButton *)sender;

//  Allow the ghost to pass throw the walls.
- (IBAction)ghostCanPassThroughWall:(UISwitch *)sender;

// Calibrates the game view using the position of the device.
- (IBAction)calibrateViewButtonAction:(UIButton *)sender;

// Reset the main calibration.
- (IBAction)resetCalibrationButtonAction:(UIButton *)sender;

// Show a message about the calibration.
- (IBAction)calibrationInfo:(UIButton *)sender;
@end
