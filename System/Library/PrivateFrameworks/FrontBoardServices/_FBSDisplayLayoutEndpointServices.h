//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _FBSDisplayLayoutService;

__attribute__((visibility("hidden")))
@interface _FBSDisplayLayoutEndpointServices : NSObject
{
    _FBSDisplayLayoutService *_sharedLock_services[3];	// 8 = 0x8
    unsigned long long _sharedLock_servicesRefCnt[3];	// 32 = 0x20
}

+ (void)_checkinService:(id)arg1;	// IMP=0x0060000000045b2d
+ (id)_checkoutServiceWithEndpoint:(id)arg1 qos:(BOOL)arg2;	// IMP=0x00600000000457f9
- (void).cxx_destruct;	// IMP=0x0000000000045d99

@end

