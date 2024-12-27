//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVContentKeyPSSHRequestTracker : NSObject
{
    long long _totalExpectedRequestCount;	// 8 = 0x8
    NSMutableArray *_requests;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x0000000000185cdf
- (id)requests;	// IMP=0x0000000000185cc8
- (_Bool)haveAllRequestsBeenReceived;	// IMP=0x0000000000185ca0
- (void)addRequest:(id)arg1;	// IMP=0x0000000000185c8a
- (id)initWithRequestCount:(long long)arg1;	// IMP=0x0000000000185c33

@end

