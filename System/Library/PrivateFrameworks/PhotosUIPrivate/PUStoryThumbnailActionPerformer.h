//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface PUStoryThumbnailActionPerformer : NSObject
{
    MISSING_TYPE *model;	// 8 = 0x8
    MISSING_TYPE *currentAssetCollection;	// 16 = 0x10
    MISSING_TYPE *presentPlayerAction;	// 24 = 0x18
    MISSING_TYPE *presentDetailsViewAction;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005475e
- (id)init;	// IMP=0x000000000005472b
- (void)showVisualDiagnostics;	// IMP=0x000000000005401d
- (void)fileRadar;	// IMP=0x0000000000053ab7
- (void)featureLess:(id)arg1;	// IMP=0x00000000000537d5
- (void)deleteMemory;	// IMP=0x0000000000053750
- (void)presentTitleEditor;	// IMP=0x00000000000536ec
- (void)presentShareSheet;	// IMP=0x00000000000536b8
- (void)setFavorite:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000535ce
@property(nonatomic, copy) CDUnknownBlockType presentDetailsViewAction;
@property(nonatomic, copy) CDUnknownBlockType presentPlayerAction;
- (id)initWithModel:(id)arg1;	// IMP=0x0000000000052f7d

@end

