//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface TrustedPeersHelperTLKRecoveryResult : NSObject
{
    NSSet *_successfulKeysRecovered;	// 8 = 0x8
    long long _totalTLKSharesRecovered;	// 16 = 0x10
    NSDictionary *_tlkRecoveryErrors;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001d28eb
- (void).cxx_destruct;	// IMP=0x00200000001d28c3
@property(retain) NSDictionary *tlkRecoveryErrors; // @synthesize tlkRecoveryErrors=_tlkRecoveryErrors;
@property long long totalTLKSharesRecovered; // @synthesize totalTLKSharesRecovered=_totalTLKSharesRecovered;
@property(retain) NSSet *successfulKeysRecovered; // @synthesize successfulKeysRecovered=_successfulKeysRecovered;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001d2797
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001d25f3
- (id)description;	// IMP=0x00100000001d2575
- (id)initWithSuccessfulKeyUUIDs:(id)arg1 totalTLKSharesRecovered:(long long)arg2 tlkRecoveryErrors:(id)arg3;	// IMP=0x00100000001d24d0

@end

