//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;
@protocol CKShareAccessRequestOperationCallbacks><CKDOperationCallbackProxy;

@interface CKDShareAccessRequestOperation
{
    CDUnknownBlockType _shareAccessRequestCompletionBlock;	// 8 = 0x8
    NSMutableArray *_shareURLsToRequestAccessFor;	// 16 = 0x10
}

+ (id)nameForState:(unsigned long long)arg1;	// IMP=0x006000000003003f
- (void).cxx_destruct;	// IMP=0x00000000000318a0
@property(retain, nonatomic) NSMutableArray *shareURLsToRequestAccessFor; // @synthesize shareURLsToRequestAccessFor=_shareURLsToRequestAccessFor;
@property(copy, nonatomic) CDUnknownBlockType shareAccessRequestCompletionBlock; // @synthesize shareAccessRequestCompletionBlock=_shareAccessRequestCompletionBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000000317f3
- (void)main;	// IMP=0x000000000003178f
- (_Bool)_shareAccessRequest;	// IMP=0x00000000000307a9
- (_Bool)isPhoneNumber:(id)arg1;	// IMP=0x0000000000030727
- (_Bool)isEmail:(id)arg1;	// IMP=0x00000000000306a5
- (int)operationType;	// IMP=0x000000000003069a
- (void)_handleShareAccessRequestedForURL:(id)arg1 responseCode:(id)arg2;	// IMP=0x0000000000030281
- (void)_performCallbackForURL:(id)arg1 error:(id)arg2;	// IMP=0x000000000003008f
- (_Bool)makeStateTransition;	// IMP=0x000000000002ff7e
- (id)activityCreate;	// IMP=0x000000000002ff55
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000002fd93

// Remaining properties
@property(retain, nonatomic) id <CKShareAccessRequestOperationCallbacks><CKDOperationCallbackProxy> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

