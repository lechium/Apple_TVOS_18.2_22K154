//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCameraSignificantEventFaceClassification : HMFObject
{
    NSUUID *_UUID;	// 8 = 0x8
    NSUUID *_personManagerUUID;	// 16 = 0x10
    NSUUID *_personUUID;	// 24 = 0x18
    NSString *_personName;	// 32 = 0x20
    NSUUID *_unassociatedFaceCropUUID;	// 40 = 0x28
}

+ (id)faceClassificationWithHMIFaceClassification:(id)arg1 person:(id)arg2;	// IMP=0x00100000003c0523
- (void).cxx_destruct;	// IMP=0x00000000003c0394
@property(copy) NSUUID *unassociatedFaceCropUUID; // @synthesize unassociatedFaceCropUUID=_unassociatedFaceCropUUID;
@property(copy) NSString *personName; // @synthesize personName=_personName;
@property(copy) NSUUID *personUUID; // @synthesize personUUID=_personUUID;
@property(readonly, copy) NSUUID *personManagerUUID; // @synthesize personManagerUUID=_personManagerUUID;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)attributeDescriptions;	// IMP=0x00000000003bffda
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003bfeaf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003bfea4
- (unsigned long long)hash;	// IMP=0x00000000003bfe60
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003bfc04
- (id)initWithUUID:(id)arg1 personManagerUUID:(id)arg2;	// IMP=0x00000000003bfb51

@end

