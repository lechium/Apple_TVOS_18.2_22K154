//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSTouchAuthenticationSpecification;

@interface _BKTouchAuthenticationSlotRecord : NSObject
{
    _Bool _registrantEntitled;	// 8 = 0x8
    BKSTouchAuthenticationSpecification *_authenticationSpecification;	// 16 = 0x10
    long long _validInitialSampleEvent;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000385cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000038538
- (unsigned long long)hash;	// IMP=0x00100000000384c6

@end

