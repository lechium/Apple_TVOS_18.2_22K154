//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHAPAccessory, NSData, NSNumber, NSString;

@protocol HMDAccessoryBrowserHapProtocol
- (void)updateStateForIdentifier:(NSString *)arg1 stateNumber:(NSNumber *)arg2;
- (void)configureAccessory:(HMDHAPAccessory *)arg1 trackState:(_Bool)arg2 connectionPriority:(_Bool)arg3;
- (void)updateBroadcastKeyForIdentifier:(NSString *)arg1 key:(NSData *)arg2 keyUpdatedStateNumber:(NSNumber *)arg3 keyUpdatedTime:(double)arg4;
- (void)retrieveCurrentStateForIdentifier:(NSString *)arg1 stateNumber:(id *)arg2 isReachable:(_Bool *)arg3 linkQuality:(unsigned long long *)arg4 lastSeen:(id *)arg5;
@end

