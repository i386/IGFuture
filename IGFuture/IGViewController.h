//
//  IGViewController.h
//  IGFuture
//
//  Created by Chong Francis on 13年4月2日.
//  Copyright (c) 2013年 Ignition Soft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IGViewController : UIViewController <UITableViewDataSource>

@property (strong, nonatomic) NSArray* data;
@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end
