//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, AMSPromise, AMSSnapshotBag, NSDate, NSString;
@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSEngagementOfflineBag : NSObject
{
    AMSPromise *_snapshotPromise;	// 8 = 0x8
    id <AMSBagProtocol> _underlyingBag;	// 16 = 0x10
    AMSSnapshotBag *_underlyingOfflineBag;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000050c7
@property(retain, nonatomic) AMSSnapshotBag *underlyingOfflineBag; // @synthesize underlyingOfflineBag=_underlyingOfflineBag;
@property(retain, nonatomic) id <AMSBagProtocol> underlyingBag; // @synthesize underlyingBag=_underlyingBag;
@property(retain, nonatomic) AMSPromise *snapshotPromise; // @synthesize snapshotPromise=_snapshotPromise;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004f9f
- (id)dictionaryForKey:(id)arg1;	// IMP=0x0000000000004ec2
- (id)URLForKey:(id)arg1 account:(id)arg2;	// IMP=0x0000000000004dc5
- (id)URLForKey:(id)arg1;	// IMP=0x0000000000004ce8
- (id)stringForKey:(id)arg1;	// IMP=0x0000000000004c0b
- (id)integerForKey:(id)arg1;	// IMP=0x0000000000004b2e
- (id)doubleForKey:(id)arg1;	// IMP=0x0000000000004a51
- (id)boolForKey:(id)arg1;	// IMP=0x0000000000004974
- (id)arrayForKey:(id)arg1;	// IMP=0x0000000000004897
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) NSDate *expirationDate;
- (id)_getSnapshotResult;	// IMP=0x00000000000040c4
- (id)_getOfflineBagData;	// IMP=0x0000000000003db2
- (id)_attemptBagLoad;	// IMP=0x0000000000003844
- (id)initWithUnderlyingBag:(id)arg1;	// IMP=0x00000000000037b1

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

