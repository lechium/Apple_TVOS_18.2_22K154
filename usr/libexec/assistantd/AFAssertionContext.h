//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface AFAssertionContext : NSObject
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
    NSDate *_effectiveDate;	// 24 = 0x18
    double _expirationDuration;	// 32 = 0x20
    NSDictionary *_userInfo;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000023d59f
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000023d552
- (void).cxx_destruct;	// IMP=0x002000000023d269
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) double expirationDuration; // @synthesize expirationDuration=_expirationDuration;
@property(readonly, copy, nonatomic) NSDate *effectiveDate; // @synthesize effectiveDate=_effectiveDate;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (id)buildDictionaryRepresentation;	// IMP=0x001000000023d108
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x001000000023ce76
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000023cd75
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000023cab9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000023caae
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000023c911
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x001000000023c79d
@property(readonly, copy) NSString *description;
- (id)initWithTimestamp:(unsigned long long)arg1 reason:(id)arg2 effectiveDate:(id)arg3 expirationDuration:(double)arg4 userInfo:(id)arg5;	// IMP=0x001000000023c683
- (id)init;	// IMP=0x001000000023c66f
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000023c4d1
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x001000000023d5a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

