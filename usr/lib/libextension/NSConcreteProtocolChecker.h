//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSProtocolChecker.h"

@class NSObject, Protocol;

__attribute__((visibility("hidden")))
@interface NSConcreteProtocolChecker : NSProtocolChecker
{
    NSObject *_target;	// 8 = 0x8
    Protocol *_protocol;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x0000000000849b2b
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;	// IMP=0x0000000000849af7
- (id)target;	// IMP=0x0000000000849ad9
- (id)protocol;	// IMP=0x0000000000849abb

@end

