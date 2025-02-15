//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HMHomeDelegatePrivate-Protocol.h>

@class HMHome, HMRoom, NSError, NSSet;

@protocol HFHomeObserver <HMHomeDelegatePrivate>

@optional
- (void)home:(HMHome *)arg1 didUpdateSiriTriggerPhraseOptions:(unsigned long long)arg2;
- (void)homeDidUpdateHomeEnergyManagerEnabled:(HMHome *)arg1;
- (void)home:(HMHome *)arg1 didFailAccessorySetupWithError:(NSError *)arg2;
- (void)home:(HMHome *)arg1 remoteAccessStateDidChange:(unsigned long long)arg2;
- (void)home:(HMHome *)arg1 didUpdateWallpaperForRoom:(HMRoom *)arg2;
- (void)homeDidUpdateWallpaper:(HMHome *)arg1;
- (void)home:(HMHome *)arg1 didSelectRoom:(HMRoom *)arg2;
- (void)home:(HMHome *)arg1 didExecuteActionSets:(NSSet *)arg2 failedActionSets:(NSSet *)arg3;
- (void)home:(HMHome *)arg1 didWriteValuesForCharacteristics:(NSSet *)arg2 failedCharacteristics:(NSSet *)arg3;
- (void)home:(HMHome *)arg1 didReadValuesForCharacteristics:(NSSet *)arg2 failedCharacteristics:(NSSet *)arg3;
- (void)home:(HMHome *)arg1 willExecuteActionSets:(NSSet *)arg2;
- (void)home:(HMHome *)arg1 willWriteValuesForCharacteristics:(NSSet *)arg2;
- (void)home:(HMHome *)arg1 willReadValuesForCharacteristics:(NSSet *)arg2;
@end

