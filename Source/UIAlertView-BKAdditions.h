//
//  UIAlertView-BKAdditions.h
//  BlockKit
//
//  Created by Tristan O'Tierney on 2/12/09.
//

#import "BKTypes.h"

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>

@interface UIAlertView (BKAdditions)

- (void)showUsingButtonBlock:(BKButtonIndexBlock)block;

@end

#endif