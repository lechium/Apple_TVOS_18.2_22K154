//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFObject.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue, OS_nw_browser;

__attribute__((visibility("hidden")))
@interface _HMFNetworkBrowser : HMFObject
{
    NSString *_domain;	// 8 = 0x8
    NSString *_serviceType;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSObject<OS_nw_browser> *_nw_browser;	// 32 = 0x20
    CDUnknownBlockType _updateBlock;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x006000000004f4bc
- (void).cxx_destruct;	// IMP=0x000000000004f5e5
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain, nonatomic) NSObject<OS_nw_browser> *nw_browser; // @synthesize nw_browser=_nw_browser;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)logIdentifier;	// IMP=0x000000000004f523
- (id)stopBrowsing;	// IMP=0x000000000004f3ab
- (void)stop;	// IMP=0x000000000004f323
- (id)startBrowsing;	// IMP=0x000000000004eede
- (id)shortDescription;	// IMP=0x000000000004ee4b
- (id)workContext;	// IMP=0x000000000004ed72
- (id)initWithQueue:(id)arg1 domain:(id)arg2 serviceType:(id)arg3 updateBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000004ec1d

@end

