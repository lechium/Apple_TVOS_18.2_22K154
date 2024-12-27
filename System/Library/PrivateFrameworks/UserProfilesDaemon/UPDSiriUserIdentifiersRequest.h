//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UPDSiriUserIdentifiersRequest : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_lock_siriUserIdentifierByAltDSID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004097a
- (void)_calloutQueue_completeWithSiriUserIdentifiers:(id)arg1 error:(id)arg2;	// IMP=0x0000000000040911
- (void)_calloutQueue_handleSiriSharedUserInfoCompletion;	// IMP=0x000000000004081b
- (void)_completeWithSiriUserIdentifiers:(id)arg1 error:(id)arg2;	// IMP=0x00000000000406f5
- (void)_handleSiriSharedUserInfo:(id)arg1 altDSID:(id)arg2;	// IMP=0x00000000000405d0
- (void)_fetchSiriUserIdentifiersForAccounts:(id)arg1;	// IMP=0x000000000003fff2
- (void)_handleAccounts:(id)arg1 error:(id)arg2;	// IMP=0x000000000003feca
- (_Bool)startWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003fc61
- (id)initWithCalloutQueue:(id)arg1;	// IMP=0x000000000003fb53

@end

