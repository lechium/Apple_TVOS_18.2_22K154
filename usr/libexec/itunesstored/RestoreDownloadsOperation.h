//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSOrderedSet, NSString;

@interface RestoreDownloadsOperation : ISOperation
{
    NSMutableDictionary *_accountIDsByAppleID;	// 96 = 0x60
    long long _cancelRetryAlertState;	// 104 = 0x68
    NSOrderedSet *_downloadIDs;	// 112 = 0x70
    NSMutableArray *_errors;	// 120 = 0x78
    _Bool _hadAutoRetrySoftFailure;	// 128 = 0x80
    _Bool _hadCancelFailure;	// 129 = 0x81
    NSString *_restoreReason;	// 136 = 0x88
}

+ (_Bool)shouldSuppressTermsAndConditionsDialogs;	// IMP=0x00200000000d9132
+ (void)setShouldSuppressTermsAndConditionsDialogs:(_Bool)arg1;	// IMP=0x00100000000d90ee
+ (void)resetShouldSuppressTermsAndConditionsDialogs;	// IMP=0x00100000000d90bf
- (_Bool)_updateDownloadEntity:(id)arg1 withTransaction:(id)arg2 storeDownload:(id)arg3 accountID:(id)arg4;	// IMP=0x00200000000e0030
- (id)_softFailRestoreItem:(id)arg1 download:(id)arg2 withRestoreState:(long long)arg3 error:(id)arg4;	// IMP=0x00100000000dfdfa
- (_Bool)_shouldAutomaticallyRetryAfterSoftFailError:(id)arg1;	// IMP=0x00100000000dfd32
- (_Bool)_shouldAuthenticateForCancelRetry;	// IMP=0x00100000000dfae0
- (void)_scheduleCancelRetry;	// IMP=0x00100000000dfada
- (void)_scheduleAutomaticRetry;	// IMP=0x00100000000dfad4
- (_Bool)_preflightAccountWithID:(id)arg1 isFamily:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000000df3c5
- (id)_newRestoreItemsWithDownloadIDs:(id)arg1;	// IMP=0x00100000000deaa8
- (id)_newDownloadWithStoreDownload:(id)arg1;	// IMP=0x00100000000de9bb
- (_Bool)_isErrorSoftFail:(id)arg1;	// IMP=0x00100000000de8a3
- (_Bool)_isErrorCancelFailure:(id)arg1;	// IMP=0x00100000000de859
- (void)_hardFailRestoreItem:(id)arg1 download:(id)arg2 transaction:(id)arg3 error:(id)arg4;	// IMP=0x00100000000de4cc
- (void)_establishPrimaryAccount;	// IMP=0x00100000000de2cd
- (long long)_downloadRestoreStateForError:(id)arg1;	// IMP=0x00100000000de26b
- (id)_copyDownloadSessionPropertiesForItem:(id)arg1 download:(id)arg2;	// IMP=0x00100000000de169
- (void)_applyResponses:(id)arg1 withTransaction:(id)arg2;	// IMP=0x00100000000dd03a
- (id)_accountIDForAccountName:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000dc7de
- (void)restorePodcastItemsOperation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00100000000dbe16
- (void)restoreDownloadItemsOperation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00100000000dbd4f
- (void)run;	// IMP=0x00100000000d98bc
- (_Bool)copyAccountID:(id *)arg1 credentialSource:(unsigned long long *)arg2 byAuthenticatingWithContext:(id)arg3 returningError:(id *)arg4;	// IMP=0x00100000000d91ea
@property(readonly) NSString *restoreReason;
@property(readonly) NSArray *errors;
@property(readonly) NSOrderedSet *downloadIdentifiers;
- (void)dealloc;	// IMP=0x00100000000d904b
- (id)initWithDownloadIdentifiers:(id)arg1 restoreReason:(id)arg2;	// IMP=0x00100000000d8fc3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

