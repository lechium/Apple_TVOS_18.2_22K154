//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHSocialGroup.h>

@class NSString, NSURL;

@interface PHSocialGroup (PhotosUICore)
- (id)px_fetchEmptyContentString;	// IMP=0x00200000003e1530
- (id)px_titleFor:(id)arg1;	// IMP=0x00200000003e0fb0
@property(nonatomic, readonly) NSString *px_defaultTitle;
@property(nonatomic, readonly) NSString *px_title;
@property(readonly, nonatomic) NSURL *px_navigationURL;
- (id)px_exportFolderName;	// IMP=0x00200000007669da
@property(readonly, nonatomic) _Bool px_canPerformFavoriteAction;
@property(readonly, nonatomic) _Bool px_isFavorite;
@property(readonly, nonatomic) _Bool px_isEmpty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

