//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccountHandle, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _HMDDeviceHandle : HMFObject
{
    NSUUID *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000004019ef
+ (id)identifierNamespace;	// IMP=0x00100000004019bf
+ (_Bool)isValidDestination:(id)arg1;	// IMP=0x001000000040190b
- (void).cxx_destruct;	// IMP=0x00000000004018f8
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000401877
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004017ea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004017df
@property(readonly, copy, nonatomic) HMDAccountHandle *accountHandle;
@property(readonly, nonatomic, getter=isGlobal) _Bool global;
@property(readonly, nonatomic, getter=isLocal) _Bool local;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000401659
- (id)initWithDestination:(id)arg1;	// IMP=0x0000000000401626
@property(readonly, copy, nonatomic) NSString *destination;
- (id)init;	// IMP=0x00000000004014d6

@end

