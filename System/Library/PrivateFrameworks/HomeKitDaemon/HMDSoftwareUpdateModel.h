//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFSoftwareVersion, HMSoftwareUpdateDocumentationMetadata, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDSoftwareUpdateModel
{
    NSDate *_releaseDate;	// 8 = 0x8
}

+ (id)properties;	// IMP=0x00100000007fdf69
+ (Class)cd_entityClass;	// IMP=0x0010000000a588d8
+ (id)cd_parentReferenceName;	// IMP=0x0010000000a588cb
- (void).cxx_destruct;	// IMP=0x00000000007fdf56
@property(copy, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
- (id)cd_fetchManagedObjectInContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000a584a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *displayableSoftwareVersion; // @dynamic displayableSoftwareVersion;
@property(copy, nonatomic) HMSoftwareUpdateDocumentationMetadata *documentationMetadata; // @dynamic documentationMetadata;
@property(copy, nonatomic) NSNumber *downloadSize; // @dynamic downloadSize;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSNumber *installDuration; // @dynamic installDuration;
@property(copy, nonatomic) HMFSoftwareVersion *softwareVersion; // @dynamic softwareVersion;
@property(copy, nonatomic) NSNumber *state; // @dynamic state;
@property(readonly) Class superclass;

@end

