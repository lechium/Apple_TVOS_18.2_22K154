//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKAsset, CKDCancelTokenGroup, CKDMMCSRequestOptions, CKDProgressTracker, CKPackage, NSArray, NSError, NSIndexSet;
@protocol OS_dispatch_group;

@interface CKPackageDownloadTask : NSObject
{
    NSError *_error;	// 8 = 0x8
    CKPackage *_package;	// 16 = 0x10
    CKAsset *_manifestAsset;	// 24 = 0x18
    NSArray *_sectionAssets;	// 32 = 0x20
    NSIndexSet *_sectionIndices;	// 40 = 0x28
    CKDProgressTracker *_progressTracker;	// 48 = 0x30
    CKDMMCSRequestOptions *_MMCSRequestOptions;	// 56 = 0x38
    NSObject<OS_dispatch_group> *_group;	// 64 = 0x40
    CKDCancelTokenGroup *_cancelTokens;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000011f928
@property(retain, nonatomic) CKDCancelTokenGroup *cancelTokens; // @synthesize cancelTokens=_cancelTokens;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain, nonatomic) CKDMMCSRequestOptions *MMCSRequestOptions; // @synthesize MMCSRequestOptions=_MMCSRequestOptions;
@property(retain, nonatomic) CKDProgressTracker *progressTracker; // @synthesize progressTracker=_progressTracker;
@property(retain, nonatomic) NSIndexSet *sectionIndices; // @synthesize sectionIndices=_sectionIndices;
@property(retain, nonatomic) NSArray *sectionAssets; // @synthesize sectionAssets=_sectionAssets;
@property(retain, nonatomic) CKAsset *manifestAsset; // @synthesize manifestAsset=_manifestAsset;
@property(readonly, nonatomic) CKPackage *package; // @synthesize package=_package;
@property(retain) NSError *error; // @synthesize error=_error;
- (void)cancel;	// IMP=0x000000000011f823
- (id)initWithPackage:(id)arg1 trackProgress:(_Bool)arg2;	// IMP=0x000000000011f512

@end

