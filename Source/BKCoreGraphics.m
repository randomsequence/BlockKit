//
//  BKCoreGraphics.m
//  BlockKit
//
//  Created by Tristan O'Tierney on 3/8/09.
//

#import "BKCoreGraphics.h"

#if TARGET_OS_IPHONE

void BKContextGStateBlock(CGContextRef context, BKVoidBlock block)
{
    CGContextSaveGState(context);
    if (block) {
        block();
    }
    CGContextRestoreGState(context);
}

void BKContextTransparentLayerBlock(CGContextRef context, BKVoidBlock block)
{
    CGContextBeginTransparencyLayer(context, NULL);
    if (block) {
        block();
    }
    CGContextEndTransparencyLayer(context);

}

UIImage *BKImageWithContextBlock(CGSize size, CGFloat scale, BKContextBlock block)
{
    UIGraphicsBeginImageContextWithOptions(size, NO, scale);
    
    if (block) {
        block(UIGraphicsGetCurrentContext());
    }
    
    UIImage *createdImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();

    return createdImage;
}

#endif