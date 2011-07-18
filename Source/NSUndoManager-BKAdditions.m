//
//  NSUndoManager-BKAdditions.m
//  BlockKit
//
//  Created by Danny Greg on 18/07/2011.
//

#import "NSUndoManager-BKAdditions.h"

@implementation NSUndoManager (BKAdditions)

- (void)bk_performUndoBlock:(BKVoidBlock)block
{
    block();
}

- (void)registerUndoWithBlock:(BKVoidBlock)block
{
    [self registerUndoWithTarget:self selector:@selector(bk_performUndoBlock:) object:block];
}

@end
