//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAutoAssetSelector, NSString;
@protocol OS_dispatch_queue;

@interface OTAAutoAssetClient : NSObject
{
    _Bool _recheckAssetVersion;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 16 = 0x10
    CDUnknownBlockType _assetDidChangeHandler;	// 24 = 0x18
    unsigned long long _lastCurrentVersion;	// 32 = 0x20
    unsigned long long _lastAvailableVersion;	// 40 = 0x28
    NSString *_lastAssetPath;	// 48 = 0x30
    MAAutoAssetSelector *_currentAssetSelector;	// 56 = 0x38
}

+ (id)savedTrustStoreAssetPath;	// IMP=0x0040000000056209
+ (_Bool)saveTrustStoreAssetPath:(id)arg1;	// IMP=0x0010000000055eba
+ (_Bool)retryReadSavedTrustStoreAssetPath:(id)arg1;	// IMP=0x0010000000055d1e
+ (id)validTrustStoreAssetPath:(id)arg1 mustExist:(_Bool)arg2;	// IMP=0x0010000000055a24
- (void).cxx_destruct;	// IMP=0x0020000000054de3
@property(retain, nonatomic) MAAutoAssetSelector *currentAssetSelector; // @synthesize currentAssetSelector=_currentAssetSelector;
@property(retain, nonatomic) NSString *lastAssetPath; // @synthesize lastAssetPath=_lastAssetPath;
@property(nonatomic) unsigned long long lastAvailableVersion; // @synthesize lastAvailableVersion=_lastAvailableVersion;
@property(nonatomic) unsigned long long lastCurrentVersion; // @synthesize lastCurrentVersion=_lastCurrentVersion;
@property(nonatomic) _Bool recheckAssetVersion; // @synthesize recheckAssetVersion=_recheckAssetVersion;
@property(copy, nonatomic) CDUnknownBlockType assetDidChangeHandler; // @synthesize assetDidChangeHandler=_assetDidChangeHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
- (void)_endLocalAssetLocks;	// IMP=0x0010000000054ce8
- (void)_lockLocalAsset:(id)arg1;	// IMP=0x00100000000549b8
- (void)stopUsingLocalAsset;	// IMP=0x00100000000549a6
- (id)startUsingLocalAsset;	// IMP=0x0010000000054917
- (_Bool)_removeInterestInAssetType:(id)arg1 withAssetSpecifier:(id)arg2 withError:(id *)arg3;	// IMP=0x001000000005484b
- (_Bool)_createInterestInAssetType:(id)arg1 withAssetSpecifier:(id)arg2 withError:(id *)arg3;	// IMP=0x00100000000546a5
- (void)_recheckAssetVersion;	// IMP=0x0010000000054471
- (id)_createAutoAssetWithType:(id)arg1 specifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000054296
- (void)registerForAssetChangedNotificationsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000054254
- (void)_registerForNotificationsForAssetType:(id)arg1 andAssetSpecifier:(id)arg2;	// IMP=0x00100000000540e7
- (void)_handleAssetChangedNotification;	// IMP=0x0010000000054076
- (id)initWithError:(id *)arg1;	// IMP=0x0010000000053faf

@end

