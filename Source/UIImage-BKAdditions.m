//
//  UIImage-BKAdditions.m
//  BlockKit
//
//  Created by Tristan O'Tierney on 2/11/09.
//

#import "UIImage-BKAdditions.h"
#import "BKCoreGraphics.h"

#if TARGET_OS_IPHONE

@implementation UIImage (BKAdditions)

#pragma mark Static Methods

+ (UIImage *)imageWithSize:(CGSize)size scale:(CGFloat)scale block:(BKContextBlock)block;
{
    return BKImageWithContextBlock(size, scale, block);
}

@end

#endif