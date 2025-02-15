//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@protocol CDPDSecureBackupDisableCapable <NSObject>
- (void)disableRecoveryKeyFromAllSystemsWithCompletion:(void (^)(NSError *))arg1;
- (void)disableRecoveryKeyWithCompletion:(void (^)(NSError *))arg1;
- (void)disableSecureBackupWithCompletion:(void (^)(NSError *))arg1;
- (void)deleteAllBackupRecordsWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end

