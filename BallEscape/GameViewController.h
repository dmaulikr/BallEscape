//
//  GameViewController.h
//  BallEscape
//
//  Created by Alberto Salido López on 15/11/12.
//  Copyright (c) 2012 Alberto Salido López. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LevelManager.h"
#import "Score.h"
#import "MainViewController.h"
#import "OpenGLViewController.h"

//  Controller previous to the game.
//  It loads the current level to play and manages the information
//  about the game.
//
@interface GameViewController : UIViewController

//  Property with the time used by the player
//  in complete the game.
@property float timeUsedInCompleteLevel;

// Current view, will change denpends on if the user wins the level or loses.
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

//  Property indicating if the user losses the last game.
@property BOOL gameOver;

//  Settings.
@property BOOL ghostThroughWall;

//  Manages the information about each level. Returns importat
//  data about the levels; number of levels in the game, current level
//  played and the position of every element into the game.
@property (nonatomic, strong, readonly) LevelManager *levelManager;

//  Congratulates the player and show the time to complete
//  the labyrinth.
@property (weak, nonatomic) IBOutlet UILabel *showTime;
@property (weak, nonatomic) IBOutlet UILabel *congratulationsMessage;

//  Indicates if the user got a new High Score.
@property (weak, nonatomic) IBOutlet UILabel *labelNewHighScore;

//  Label with the current level to play.
@property (weak, nonatomic) IBOutlet UILabel *levelToPlayLabel;

//  Play button.
@property (weak, nonatomic) IBOutlet UIButton *playButton;

//  Continue button.
@property (weak, nonatomic) IBOutlet UIButton *continueButton;

//  Menu button.
@property (weak, nonatomic) IBOutlet UIButton *menuButton;

//  Restart the current level.
@property (weak, nonatomic) IBOutlet UIButton *restartLevelButton;

@property (strong, nonatomic) NSArray *calibrationCoordinates;

//  Starts a new game.
- (IBAction)playGame:(UIButton *)sender;

//  Continues with the next level.
- (IBAction)continueWithNextLevel:(UIButton *)sender;

//  Goes back to the main menu.
- (IBAction)goBackToMenu:(UIButton *)sender;

//  Play the last level again.
- (IBAction)restartCurrentLevel:(UIButton *)sender;
@end
