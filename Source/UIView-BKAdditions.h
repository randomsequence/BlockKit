//
//  UIView-BKAdditions.h
//  BlockKit
//
//  Created by Nick Paulson on 7/16/11.
//

#import "BKTypes.h"

#if TARGET_OS_IPHONE

#import <UIKit/UIKit.h>

@interface UIView (BKAdditions)

extern BKViewBlock BKCenterViewInSuperviewBlock;

// Block based -drawRect:
// WARNING: One of these initializers must be used to use drawRectBlock.
- (id)initWithDrawRectBlock:(BKRectBlock)aDrawRectBlock;
- (id)initWithFrame:(CGRect)frame drawRectBlock:(BKRectBlock)aDrawRectBlock;

@property (nonatomic, copy) BKRectBlock drawRectBlock;
@property (nonatomic, copy) BKVoidBlock layoutSubviewsBlock;

@end

#endif