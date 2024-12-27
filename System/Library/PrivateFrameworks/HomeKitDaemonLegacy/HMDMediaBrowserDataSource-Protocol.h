//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMAccessoryCategory, HMDDevice, HMDHomeKitVersion, HMDUnassociatedAppleMediaAccessory, HMFMessageDispatcher, HMFProductInfo, HMFSystemInfo, NSData, NSOperation, NSString;
@protocol HMFCancellable;

@protocol HMDMediaBrowserDataSource
@property(readonly) unsigned long long appleMediaAccessoryVariant;
@property(readonly) HMDDevice *currentDevice;
@property(readonly) HMFProductInfo *productInfo;
@property(readonly) HMFSystemInfo *systemInfo;
@property(readonly) _Bool requiresHomePod2ndGenPairing;
@property(readonly) unsigned long long supportedStereoPairVersions;
@property(readonly) _Bool requiresHomePodMiniPairing;
@property(readonly) _Bool isAppleMediaAccessory;
@property(readonly) NSString *currentAccessoryMediaRouteIdentifier;
- (HMDUnassociatedAppleMediaAccessory *)createUnassociatedHomePodAccessory:(NSString *)arg1 name:(NSString *)arg2 category:(HMAccessoryCategory *)arg3 productColor:(long long)arg4 idsIdentifierString:(NSString *)arg5 requiredPairingCapabilities:(unsigned long long)arg6 minimumPairingSoftware:(HMDHomeKitVersion *)arg7 rawAccessoryCapabilities:(NSData *)arg8 rawResidentCapabilities:(NSData *)arg9 messageDispatcher:(HMFMessageDispatcher *)arg10;
- (HMDUnassociatedAppleMediaAccessory *)createUnassociatedAppleMediaAccessory:(NSString *)arg1 name:(NSString *)arg2 category:(HMAccessoryCategory *)arg3 productColor:(long long)arg4 idsIdentifierString:(NSString *)arg5 rawAccessoryCapabilities:(NSData *)arg6 rawResidentCapabilities:(NSData *)arg7 messageDispatcher:(HMFMessageDispatcher *)arg8;
- (id <HMFCancellable>)performOperation:(NSOperation *)arg1;
@end

