//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKOperationCallbacks-Protocol.h>

@class CKAsset, CKRecordID, NSError, NSString;

@protocol CKPublishAssetsOperationCallbacks <CKOperationCallbacks>
- (void)handleAssetPublishCompletionForRecordID:(CKRecordID *)arg1 publishedAsset:(CKAsset *)arg2 recordKey:(NSString *)arg3 error:(NSError *)arg4;
@end

