//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDCancelTokenGroup, CKDMMCSItem, CKDMMCSRequestOptions, CKDProgressTracker, CKPackage, NSArray, NSError, NSString;
@protocol OS_dispatch_group;

@interface CKDPackageUploadTask : NSObject
{
    NSError *_error;	// 8 = 0x8
    CKPackage *_package;	// 16 = 0x10
    CKDMMCSItem *_MMCSManifestItem;	// 24 = 0x18
    NSArray *_MMCSSectionItems;	// 32 = 0x20
    CKDProgressTracker *_progressTracker;	// 40 = 0x28
    CKDMMCSRequestOptions *_MMCSRequestOptions;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_group;	// 56 = 0x38
    CKDCancelTokenGroup *_cancelTokens;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000036ee5d
@property(retain, nonatomic) CKDCancelTokenGroup *cancelTokens; // @synthesize cancelTokens=_cancelTokens;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain, nonatomic) CKDMMCSRequestOptions *MMCSRequestOptions; // @synthesize MMCSRequestOptions=_MMCSRequestOptions;
@property(retain, nonatomic) CKDProgressTracker *progressTracker; // @synthesize progressTracker=_progressTracker;
@property(retain, nonatomic) NSArray *MMCSSectionItems; // @synthesize MMCSSectionItems=_MMCSSectionItems;
@property(retain, nonatomic) CKDMMCSItem *MMCSManifestItem; // @synthesize MMCSManifestItem=_MMCSManifestItem;
@property(readonly, nonatomic) CKPackage *package; // @synthesize package=_package;
@property(retain) NSError *error; // @synthesize error=_error;
- (void)cancel;	// IMP=0x000000000036ed73
@property(readonly, nonatomic) NSString *recordKey;
@property(readonly, nonatomic) long long uploadRank;
@property(readonly, nonatomic) long long storageGroupingPolicy;
- (id)activityCreate;	// IMP=0x000000000036eb07
- (id)initWithPackage:(id)arg1 trackProgress:(_Bool)arg2;	// IMP=0x000000000036e961

@end

