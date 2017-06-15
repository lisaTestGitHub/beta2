//
//  DetailViewController.h
//  beta2
//
//  Created by local on 6/15/17.
//  Copyright © 2017 local. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "beta2+CoreDataModel.h"

@interface DetailViewController : UIViewController
//test
@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

