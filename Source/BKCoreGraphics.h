//
//  BKCoreGraphics.h
//  BlockKit
//
//  Created by Tristan O'Tierney on 3/8/09.
//

#import "BKTypes.h"

#if TARGET_OS_IPHONE

#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

UIImage *BKImageWithContextBlock(CGSize size, CGFloat scale, BKContextBlock block);
void BKContextGStateBlock(CGContextRef context, BKVoidBlock block);
void BKContextTransparentLayerBlock(CGContextRef context, BKVoidBlock block);

#endif