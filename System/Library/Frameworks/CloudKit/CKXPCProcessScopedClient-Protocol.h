//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKFileOpenInfo, NSFileHandle, NSString;

@protocol CKXPCProcessScopedClient
- (void)noteSystemIsAvailable;
- (void)handleSignificantIssueBehavior:(unsigned long long)arg1 reason:(NSString *)arg2;
- (void)getFileMetadataWithFileHandle:(NSFileHandle *)arg1 openInfo:(CKFileOpenInfo *)arg2 reply:(void (^)(CKFileMetadata *, NSError *))arg3;
@end

