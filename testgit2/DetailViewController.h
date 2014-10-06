//
//  DetailViewController.h
//  testgit2
//
//  Created by SafeCode on 7/10/2014.
//  Copyright (c) 2014 SafeCode. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

