//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class HMBModelReference, NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDFaceprintModel : HMBModel
{
}

+ (_Bool)hmbExcludeFromCloudStorage;	// IMP=0x0060000000b284b9
+ (id)hmbProperties;	// IMP=0x0060000000b28489
- (id)createFaceprint;	// IMP=0x0000000000b28287
- (id)initWithFaceprint:(id)arg1;	// IMP=0x0000000000b28111

// Remaining properties
@property(copy) NSData *data; // @dynamic data;
@property(retain) HMBModelReference *faceCrop; // @dynamic faceCrop;
@property(copy) NSUUID *modelUUID; // @dynamic modelUUID;

@end

