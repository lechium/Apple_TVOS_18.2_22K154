//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessoryReachabilityElectionParameter : HMFObject
{
    _Bool _reachable;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000ae2563
@property(readonly, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)attributeDescriptions;	// IMP=0x0000000000ae2411
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ae2303
- (unsigned long long)hash;	// IMP=0x0000000000ae22bf
@property(readonly, copy) NSDictionary *dictionaryRepresentation;
- (id)initWithIdentifier:(id)arg1 isReachable:(_Bool)arg2;	// IMP=0x0000000000ae213a
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000ae1bee

@end

