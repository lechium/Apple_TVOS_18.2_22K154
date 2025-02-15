//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, TCCDEventFilter, TCCDEventPublisher;

@interface (null) : NSObject
{
    TCCDEventFilter *_filter;	// 8 = 0x8
    TCCDEventPublisher *_publisher;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    long long _state;	// 32 = 0x20
    NSMutableArray *_pendingEvents;	// 40 = 0x28
    NSString *_codeSigningIdentity;	// 48 = 0x30
    unsigned long long _token;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000004a24a
@property(readonly, nonatomic) unsigned long long token; // @synthesize token=_token;
- (void)publish:(id)arg1;	// IMP=0x001000000004a1a5
- (void)_sendEvent:(id)arg1;	// IMP=0x001000000004a149
- (void)_publishPendingEvents;	// IMP=0x0010000000049ffd
- (void)_addPendingEvent:(id)arg1;	// IMP=0x0010000000049f33
- (void)_checkEntitlement;	// IMP=0x0010000000049d75
- (id)description;	// IMP=0x0010000000049d06
- (id)initWithToken:(unsigned long long)arg1 filter:(id)arg2 fromPublisher:(id)arg3;	// IMP=0x0010000000049c21

@end

