//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSBag, AMSProcessInfo, AMSSnapshotBag, NSDate, NSMutableArray, NSString;

@interface URLBag : NSObject
{
    AMSBag *_bag;	// 8 = 0x8
    struct os_unfair_lock_s _asyncLock;	// 16 = 0x10
    NSMutableArray *_asyncLock_completionHandlers;	// 24 = 0x18
    AMSSnapshotBag *_asyncLock_snapshotBag;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000155bd1
- (id)URLForKey:(id)arg1 account:(id)arg2;	// IMP=0x0010000000155bbb
- (id)URLForKey:(id)arg1;	// IMP=0x0010000000155ba5
- (id)stringForKey:(id)arg1;	// IMP=0x0010000000155b8f
- (id)integerForKey:(id)arg1;	// IMP=0x0010000000155b79
- (id)doubleForKey:(id)arg1;	// IMP=0x0010000000155b63
- (id)dictionaryForKey:(id)arg1;	// IMP=0x0010000000155950
- (id)boolForKey:(id)arg1;	// IMP=0x001000000015593a
- (id)arrayForKey:(id)arg1;	// IMP=0x0010000000155924
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000015590e
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)init;	// IMP=0x0010000000153c3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"AMSProcessInfo",?,R,C,N

@property(readonly) Class superclass;

@end

