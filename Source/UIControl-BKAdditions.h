//
//  UIControl-BKAdditions.h
//  BlockKit
//
//  Created by Nick Paulson on 7/16/11.
//

#import "BKTypes.h"

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>

@interface UIControl (BKAdditions)

- (void)addActionForControlEvents:(UIControlEvents)controlEvents usingBlock:(BKVoidBlock)block;
- (void)removeAllActionBlocks;

@end
#endif