//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (NSDelayedPerforming)
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1;	// IMP=0x006000000084fa52
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;	// IMP=0x006000000084f67b
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;	// IMP=0x001000000084f28e
- (void)performSelector:(SEL)arg1 object:(id)arg2 afterDelay:(double)arg3;	// IMP=0x001000000084f27c
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3;	// IMP=0x001000000084f214
@end

