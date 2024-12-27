//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSError, NSString;

@protocol IMDaemonListenerAnyProtocol <NSObject>
- (void)didFetchCloudKitSyncDebuggingInfo:(NSDictionary *)arg1;
- (void)didAttemptToDisableiCloudBackups:(long long)arg1 error:(NSError *)arg2;
- (void)didFetchRampState:(NSDictionary *)arg1;
- (void)didFetchSyncStateStats:(NSDictionary *)arg1;
- (void)oneTimeCodesDidChange:(NSArray *)arg1;
- (void)stickerPackRemoved:(NSArray *)arg1;
- (void)stickerPackUpdated:(NSDictionary *)arg1;
- (void)persistentProperty:(NSString *)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)property:(NSString *)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)networkDataAvailabilityChanged:(_Bool)arg1;
- (void)newSetupInfoAvailable;
@end

