//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSLock, NSMutableArray, NSNumber;

@interface MicroPaymentQueueResponse : NSObject
{
    NSData *_appReceipt;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    NSMutableArray *_payments;	// 24 = 0x18
    NSMutableArray *_rangesToLoad;	// 32 = 0x20
    long long _requestType;	// 40 = 0x28
    long long _serverPaymentCount;	// 48 = 0x30
    _Bool _shouldTriggerQueueCheck;	// 56 = 0x38
    NSNumber *_userIdentifier;	// 64 = 0x40
}

- (_Bool)_ntsLoadFromPropertyList:(id)arg1;	// IMP=0x00200000000458db
- (id)_dsidFromDictionary:(id)arg1;	// IMP=0x0010000000045836
- (id)_copyPaymentsFromDictionary:(id)arg1;	// IMP=0x00100000000455c6
- (id)_copyAppReceiptFromDictionary:(id)arg1;	// IMP=0x0010000000045574
@property(copy) NSNumber *userIdentifier;
@property _Bool shouldTriggerQueueCheck;
- (void)setRangesToLoad:(id)arg1;	// IMP=0x00100000000453f1
@property(copy) NSArray *payments;
@property long long serverPaymentCount;
@property(readonly) long long requestType;
@property(readonly) NSArray *rangesToLoad;
@property(readonly) NSData *appReceipt;
- (_Bool)loadFromPropertyList:(id)arg1;	// IMP=0x0010000000045188
- (void)appendResponse:(id)arg1;	// IMP=0x0010000000044e72
- (void)dealloc;	// IMP=0x0010000000044e13
- (id)initWithRequestType:(long long)arg1;	// IMP=0x0010000000044dd6

@end

