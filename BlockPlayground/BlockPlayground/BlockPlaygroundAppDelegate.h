//
//  BlockPlaygroundAppDelegate.h
//  BlockPlayground
//
//  Created by Nick Paulson on 7/16/11.
//  Copyright 2011 Linebreak. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BlockPlaygroundTableViewController;

@interface BlockPlaygroundAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) BlockPlaygroundTableViewController *viewController;

@end
