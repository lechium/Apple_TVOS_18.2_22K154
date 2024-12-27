//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSNumber, NSString, SAAppSizer;
@protocol OS_dispatch_queue;

@interface TVSettingsUsageFacade : NSObject
{
    NSObject<OS_dispatch_queue> *_usage_queue;	// 8 = 0x8
    _Bool _usageUpdateCancelled;	// 16 = 0x10
    NSMutableDictionary *_mediaCache;	// 24 = 0x18
    NSArray *_usageBundlesCache;	// 32 = 0x20
    _Bool _loadingInstalledApps;	// 40 = 0x28
    _Bool _useSpaceAttribution;	// 41 = 0x29
    NSNumber *_usedAppStorage;	// 48 = 0x30
    NSNumber *_totalAppStorage;	// 56 = 0x38
    NSArray *_installedUserApps;	// 64 = 0x40
    SAAppSizer *_appSizer;	// 72 = 0x48
}

+ (void)initialize;	// IMP=0x00200000000a3cb3
- (void).cxx_destruct;	// IMP=0x00200000000a506a
@property(retain, nonatomic) SAAppSizer *appSizer; // @synthesize appSizer=_appSizer;
@property(nonatomic) _Bool useSpaceAttribution; // @synthesize useSpaceAttribution=_useSpaceAttribution;
@property(copy, nonatomic) NSArray *installedUserApps; // @synthesize installedUserApps=_installedUserApps;
@property(nonatomic) _Bool loadingInstalledApps; // @synthesize loadingInstalledApps=_loadingInstalledApps;
@property(readonly, nonatomic) NSNumber *totalAppStorage; // @synthesize totalAppStorage=_totalAppStorage;
@property(retain, nonatomic) NSNumber *usedAppStorage; // @synthesize usedAppStorage=_usedAppStorage;
- (void)_fetchAppUsageInfoLS;	// IMP=0x00100000000a4a48
- (void)_fetchAppUsageInfoSA;	// IMP=0x00100000000a4235
- (void)_fetchAppUsageInfo;	// IMP=0x00100000000a4211
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x00100000000a41ff
- (void)uninstallApp:(id)arg1;	// IMP=0x00100000000a3f4a
- (void)dealloc;	// IMP=0x00100000000a3e6f
- (id)init;	// IMP=0x00100000000a3d48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

