//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSUndoObject : NSObject
{
    _NSUndoObject *next;	// 8 = 0x8
    _NSUndoObject *previous;	// 16 = 0x10
    id _target;	// 24 = 0x18
}

- (id)target;	// IMP=0x0000000000889be3
- (void)invoke;	// IMP=0x0000000000889baf
- (_Bool)isEndMark;	// IMP=0x0000000000889ba7
- (_Bool)isBeginMark;	// IMP=0x0000000000889b9f
- (id)initWithTarget:(id)arg1;	// IMP=0x0000000000889b44
- (id)init;	// IMP=0x0000000000889b30

@end

