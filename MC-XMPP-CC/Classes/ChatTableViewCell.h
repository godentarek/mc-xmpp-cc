//
//  ChatTableViewCell.h
//  test-app
//
//  Created by Jan Schulte and Florian Kaluschke on 16.04.13.
//  Copyright (c) 2013 Jan Schulte and Florian Kaluschke. All rights reserved.
//

#import <UIKit/UIKit.h>

//
//  ChatTableViewCell
//
//  Note: Used in ChatViewController for the Sender Message
//
@interface ChatTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView    *avatarImage;
@property (weak, nonatomic) IBOutlet UILabel        *chatText;

@end


