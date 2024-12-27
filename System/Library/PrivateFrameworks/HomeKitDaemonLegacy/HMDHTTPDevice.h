//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHTTPDevice : HMFObject
{
    NSUUID *_identifier;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00100000003ac777
+ (id)shortDescription;	// IMP=0x00100000003ac765
- (void).cxx_destruct;	// IMP=0x00000000003ac752
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)logIdentifier;	// IMP=0x00000000003ac6f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003ac633
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x00000000003ac4a0
- (id)shortDescription;	// IMP=0x00000000003ac3de
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000003ac243
- (id)init;	// IMP=0x00000000003ac1e9

// Remaining properties
@property(readonly) Class superclass;

@end

