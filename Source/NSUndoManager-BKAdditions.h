//
//  NSUndoManager-BKAdditions.h
//  BlockKit
//
//  Created by Danny Greg on 18/07/2011.
//

#import <Foundation/Foundation.h>
#import "BKTypes.h"

@interface NSUndoManager (BKAdditions)

- (void)registerUndoWithBlock:(BKVoidBlock)block;

@end
