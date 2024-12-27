//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, _NIRangingPeer;

@interface _NIRangingPeerDistance : NSObject
{
    id _internal;	// 8 = 0x8
    _Bool _initiator;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000014a913
- (void).cxx_destruct;	// IMP=0x002000000014ad66
@property(readonly, nonatomic, getter=isInitiator) _Bool initiator; // @synthesize initiator=_initiator;
- (id)description;	// IMP=0x001000000014ac3d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000014aaff
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000014a976
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000014a91b
- (_Bool)initiator;	// IMP=0x001000000014a906
@property(readonly, nonatomic) _Bool shouldUnlock;
@property(readonly, copy, nonatomic) NSNumber *distanceMeters;
@property(readonly, copy, nonatomic) _NIRangingPeer *peer;
- (id)initWithPeer:(id)arg1 distanceMeters:(id)arg2 initiator:(_Bool)arg3 shouldUnlock:(_Bool)arg4;	// IMP=0x001000000014a80b
- (id)init;	// IMP=0x001000000014a7fd

@end

