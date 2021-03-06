//
//  MenuViewController.h
//  MC-XMPP-CC
//
//  Created by Jan Schulte and Florian Kaluschke on 16.04.13.
//  Copyright (c) 2013 Jan Schulte and Florian Kaluschke. All rights reserved.
//

#import <UIKit/UIKit.h>

#include "XMPPConnection.h"
#import "DAKeyboardControl.h"


//
//  LoginViewController
//
//  Note: Is used to give the user the option to connect to a XMPP Server of his choosing
//
@interface LoginViewController : UIViewController <XMPPConnectionDelegate>

@property (weak, nonatomic) IBOutlet UITextField    *serverAddress;
@property (weak, nonatomic) IBOutlet UITextField    *serverPort;
@property (weak, nonatomic) IBOutlet UITextField    *jabberID;
@property (weak, nonatomic) IBOutlet UITextField    *password;
@property (weak, nonatomic) IBOutlet UILabel        *status;

- (IBAction)onConnectClick:(id)sender;

@end
