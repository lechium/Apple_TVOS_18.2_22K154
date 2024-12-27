//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GCSController, NSArray, NSObject, NSString;
@protocol GCSSettingsStoreService;

@protocol GCSControllers
@property(readonly, nonatomic) NSArray *values;
@property(readonly, nonatomic) __weak id <GCSSettingsStoreService> settingsStore;
- (void)removeObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2;
- (void)removeObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2 context:(void *)arg3;
- (void)addObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (GCSController *)controllerForPersistentIdentifier:(NSString *)arg1;
- (_Bool)storeVersionIsCompatible;
@end

