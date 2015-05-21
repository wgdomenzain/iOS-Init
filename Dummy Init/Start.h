//
//  ViewController.h
//  Dummy Init
//
//  Created by Walter Gonzalez Domenzain on 21/05/15.
//  Copyright (c) 2015 Smartplace. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Declarations.h"

@interface Start : UIViewController

//Buttons
@property (strong, nonatomic) IBOutlet UIButton *btnChange;


//Labels
@property (strong, nonatomic) IBOutlet UILabel *lblName;
@property (strong, nonatomic) IBOutlet UILabel *lblNumber;

- (IBAction)btnChangePressed:(id)sender;


@end

