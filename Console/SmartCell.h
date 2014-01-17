//
//  SmartCell.h
//  Console
//
//  Created by Jessiah Ratliff on 1/16/14.
//  Copyright (c) 2014 Jessiah Ratliff. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SmartCell : UICollectionViewCell
@property (nonatomic, strong) NSString  *body;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSNumber * level;

@property (weak, nonatomic) IBOutlet UILabel *level;
@property (weak, nonatomic) IBOutlet UITextView *bodyPreview;
@property (weak, nonatomic) IBOutlet UILabel *Heading;
@end
