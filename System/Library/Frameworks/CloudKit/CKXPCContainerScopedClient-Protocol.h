//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordID, CKShare, NSArray, NSError;

@protocol CKXPCContainerScopedClient
- (void)handleSharingUIUpdatedShare:(CKShare *)arg1 recordID:(CKRecordID *)arg2 isDeleted:(_Bool)arg3 error:(NSError *)arg4 reply:(void (^)(NSError *))arg5;
- (void)consumeSandboxExtensions:(NSArray *)arg1 reply:(void (^)(NSError *))arg2;
@end

