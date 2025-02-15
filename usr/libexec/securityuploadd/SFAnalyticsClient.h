//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SFAnalyticsSQLiteStore;
@protocol OS_dispatch_queue;

@interface SFAnalyticsClient : NSObject
{
    NSString *_name;	// 8 = 0x8
    _Bool _requireDeviceAnalytics;	// 16 = 0x10
    _Bool _requireiCloudAnalytics;	// 17 = 0x11
    SFAnalyticsSQLiteStore *_store;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)getSharedClientNamed:(id)arg1 orCreateWithStorePath:(id)arg2 requireDeviceAnalytics:(_Bool)arg3 requireiCloudAnalytics:(_Bool)arg4;	// IMP=0x0040000000001a8c
+ (void)clearSFAnalyticsClientGlobalCache;	// IMP=0x0010000000001a51
- (void).cxx_destruct;	// IMP=0x0020000000001818
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) SFAnalyticsSQLiteStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) _Bool requireiCloudAnalytics; // @synthesize requireiCloudAnalytics=_requireiCloudAnalytics;
@property(readonly, nonatomic) _Bool requireDeviceAnalytics; // @synthesize requireDeviceAnalytics=_requireDeviceAnalytics;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)withStore:(CDUnknownBlockType)arg1;	// IMP=0x001000000000172f
- (id)initWithStore:(id)arg1 queue:(id)arg2 name:(id)arg3 requireDeviceAnalytics:(_Bool)arg4 requireiCloudAnalytics:(_Bool)arg5;	// IMP=0x0010000000001664
- (id)initFromExistingClient:(id)arg1 name:(id)arg2 requireDeviceAnalytics:(_Bool)arg3 requireiCloudAnalytics:(_Bool)arg4;	// IMP=0x001000000000150c
- (id)initWithStorePath:(id)arg1 name:(id)arg2 requireDeviceAnalytics:(_Bool)arg3 requireiCloudAnalytics:(_Bool)arg4;	// IMP=0x00100000000013c4
@property(readonly, nonatomic) NSString *storePath;

@end

