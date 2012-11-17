//
//  GameViewController.h
//  BallEscape
//
//  Created by Alberto Salido López on 15/11/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LevelManager.h"

@interface GameViewController : UIViewController

//  Property with the time used by the player
//  in complete the game.
@property float timeUsedInCompleteLevel;

//  Manages the information about each level. Returns importat
//  data about the levels; number of levels in the game, current level
//  played and the position of every element into the game.
@property (nonatomic, strong, readonly) LevelManager *levelManager;

//  Congratulates the player and show the time to complete
//  the labyrinth.
@property (weak, nonatomic) IBOutlet UILabel *showTime;
@property (weak, nonatomic) IBOutlet UILabel *congratulationsMessage;

//  Play button.
@property (weak, nonatomic) IBOutlet UIButton *playButton;

//  Continue button.
@property (weak, nonatomic) IBOutlet UIButton *continueButton;

//  Menu button.
@property (weak, nonatomic) IBOutlet UIButton *menuButton;

//  Restart the current level.
@property (weak, nonatomic) IBOutlet UIButton *restartLevelButton;

//  Starts a new game.
- (IBAction)playGame:(UIButton *)sender;

//  Continues with the next level.
- (IBAction)continueWithNextLevel:(UIButton *)sender;

//  Goes back to the main menu.
- (IBAction)goBackToMenu:(UIButton *)sender;

//  Play the last level again.
- (IBAction)restartCurrentLevel:(UIButton *)sender;
@end