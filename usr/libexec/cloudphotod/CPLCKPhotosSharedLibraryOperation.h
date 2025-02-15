//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CPLCKPhotosSharedLibraryOperation : NSObject
{
}

+ (id)sendExitStatusFeedbackWithOperationID:(id)arg1 shareID:(id)arg2 status:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x002000000013b8c0
+ (id)sendExitMoveBatchFeedbackWithMoveBatchOperationID:(id)arg1 moveBatchID:(id)arg2 exitZoneID:(id)arg3 feedbackItems:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000013b6c0
+ (id)exitSharedLibraryOperationWithZoneID:(id)arg1 retentionPolicy:(long long)arg2 exitType:(long long)arg3 exitSource:(long long)arg4 stopAt:(long long)arg5 participantUserIDsToRemove:(id)arg6 participantIDsToRemove:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x001000000013b140
+ (id)moveBatchSharedLibraryOperationWithZoneID:(id)arg1 batchSize:(int)arg2 operationID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000013a290
+ (id)getNextBatchToMoveOperationWithZoneID:(id)arg1 batchSize:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000139bf0
+ (id)silentMoverServerRampOperationWithOperationID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000139530
- (id)init;	// IMP=0x004000000013b9d0

@end

