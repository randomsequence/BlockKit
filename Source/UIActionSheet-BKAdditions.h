//
//  UIActionSheet-CCAdditions.h
//  BlockKit
//
//  Created by Tristan O'Tierney on 3/19/09.
//

#import "BKTypes.h"

#if TARGET_OS_IPHONE

#import <UIKit/UIKit.h>

@interface UIActionSheet (BKAdditions)

- (void)showFromView:(UIView *)view;
- (void)showFromView:(UIView *)view buttonBlock:(BKButtonIndexBlock)block;
- (void)showFromRect:(CGRect)rect inView:(UIView *)view animated:(BOOL)animated buttonBlock:(BKButtonIndexBlock)block;

@end

#endif