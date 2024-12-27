//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSDictionary, NSError, NSSet, TUNearbyDeviceHandle, TUNearbySuggestionAdvertisement, TUNeighborhoodActivityConduitXPCClient, TUSplitSessionInfo;

@protocol TUNeighborhoodActivityConduitXPCClientDelegate <NSObject>
- (void)continuitySessionsUpdated;
- (void)suggestionAdvertisementUpdated:(TUNearbySuggestionAdvertisement *)arg1 fromDevice:(TUNearbyDeviceHandle *)arg2;
- (void)handoffFailedWithError:(NSError *)arg1;
- (void)splitSessionUpdated:(TUSplitSessionInfo *)arg1;
- (void)contactsUpdated:(NSDictionary *)arg1 fromDevice:(TUNearbyDeviceHandle *)arg2;
- (void)joinableNearbyConversationsChanged:(NSDictionary *)arg1 nearbyConversationInfos:(NSSet *)arg2;
- (void)connectionLostForClient:(TUNeighborhoodActivityConduitXPCClient *)arg1;
- (void)connectionEstablishedForClient:(TUNeighborhoodActivityConduitXPCClient *)arg1;
@end

