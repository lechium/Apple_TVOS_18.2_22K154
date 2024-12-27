//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPerson.h>

@class NSDate, NSPersonNameComponents, NSString, NSURL;

@interface PHPerson (PhotosUICore)
+ (id)px_localizedNameFromContact:(id)arg1;	// IMP=0x001000000071e685
+ (void)px_loadRepresentativeFacesForPersons:(id)arg1;	// IMP=0x001000000086069d
- (_Bool)px_isSameDetectionTypeAsPerson:(id)arg1;	// IMP=0x001000000071e619
@property(readonly, nonatomic) NSURL *px_navigationURL;
@property(readonly, nonatomic) NSPersonNameComponents *px_nameComponents;
- (id)_px_localizedNameWithStyle:(long long)arg1;	// IMP=0x001000000071e42c
- (id)px_exportFolderName;	// IMP=0x001000000071e41a
@property(readonly) NSString *px_longStyleLocalizedName;
@property(readonly) NSString *px_localizedName;
@property(readonly) _Bool px_isPet;
@property(readonly) _Bool px_isHuman;
@property(readonly) NSDate *px_keyPhotoDate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDate",?,R

@property(readonly) _Bool isPersonModel;
@property(readonly) NSString *px_localIdentifier;
@property(readonly) long long numberOfAssets;
- (int)requestFaceCropImageWithTargetSize:(struct CGSize)arg1 displayScale:(double)arg2 cropFactor:(long long)arg3 style:(long long)arg4 cacheResult:(_Bool)arg5 synchronous:(_Bool)arg6 resultHandler:(CDUnknownBlockType)arg7;	// IMP=0x00100000008601c3
@property(readonly, nonatomic) _Bool px_canPerformFavoriteAction;
@property(readonly, nonatomic) _Bool px_isFavorite;
@property(readonly, nonatomic) _Bool px_isEmpty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) short detectionType;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isVerified;
@property(readonly, nonatomic) NSString *name;
@property(readonly) Class superclass;
@end

