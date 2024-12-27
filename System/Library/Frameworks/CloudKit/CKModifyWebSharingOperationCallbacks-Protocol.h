//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKOperationCallbacks-Protocol.h>

@class CKRecordID, NSData, NSError, NSString;

@protocol CKModifyWebSharingOperationCallbacks <CKOperationCallbacks>
- (void)handleWebSharingRevocationForRecordID:(CKRecordID *)arg1 error:(NSError *)arg2;
- (void)handleWebSharingInitiationForRecordID:(CKRecordID *)arg1 sharingKey:(NSData *)arg2 baseSharingToken:(NSString *)arg3 error:(NSError *)arg4;
@end

