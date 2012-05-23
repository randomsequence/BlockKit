//
//  UIImage-BKAdditions.h
//  BlockKit
//
//  Created by Tristan O'Tierney on 2/11/09.
//

#import "BKTypes.h"

#if TARGET_OS_IPHONE

#import <UIKit/UIKit.h>

@interface UIImage (BKAdditions)

+ (UIImage *)imageWithSize:(CGSize)size scale:(CGFloat)scale block:(BKContextBlock)block;

@end

#endif