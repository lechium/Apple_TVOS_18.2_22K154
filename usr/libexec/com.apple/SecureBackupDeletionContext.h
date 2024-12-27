//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EscrowService, NSError, NSMutableArray, SecureBackup;

@interface SecureBackupDeletionContext : NSObject
{
    SecureBackup *_request;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
    EscrowService *_escrowService;	// 24 = 0x18
    NSMutableArray *_recordIDs;	// 32 = 0x20
    NSError *_deleteError;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000011d97
@property(retain) NSError *deleteError; // @synthesize deleteError=_deleteError;
@property(retain) NSMutableArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(retain) EscrowService *escrowService; // @synthesize escrowService=_escrowService;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) SecureBackup *request; // @synthesize request=_request;

@end

