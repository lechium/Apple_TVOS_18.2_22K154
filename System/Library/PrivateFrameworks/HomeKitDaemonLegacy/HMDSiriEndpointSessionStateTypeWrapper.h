//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointSessionStateTypeWrapper : NSObject
{
    long long _value;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000049fa7a
@property(nonatomic) long long value; // @synthesize value=_value;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000049f92d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000049f8dc
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000049f8c2
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000049f79e
- (id)initWithValue:(long long)arg1;	// IMP=0x000000000049f761
- (id)init;	// IMP=0x000000000049f725

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

