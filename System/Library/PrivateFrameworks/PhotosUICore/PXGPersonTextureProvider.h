//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PXGTextureProvider.h"

@class MISSING_TYPE;

@interface PXGPersonTextureProvider : PXGTextureProvider
{
    MISSING_TYPE *$__lazy_storage_$_requestIDController;	// 8 = 0x8
    MISSING_TYPE *lightLoadingImage;	// 16 = 0x10
    MISSING_TYPE *darkLoadingImage;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003ee40
- (id)init;	// IMP=0x000000000003edf0
- (void)viewEnvironmentDidChange:(id)arg1;	// IMP=0x000000000003ea60
- (void)cancelTextureRequests:(id)arg1;	// IMP=0x000000000003e620
- (struct _NSRange)requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 geometries:(CDStruct_4f725fed *)arg2 styles:(CDStruct_a79e78a9 *)arg3 infos:(CDStruct_12471299 *)arg4 inLayout:(id)arg5;	// IMP=0x000000000003c5e0

@end

