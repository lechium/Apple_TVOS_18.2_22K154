//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHFace.h>

@class NSString;

@interface PHFace (PhotosUICore)
+ (id)px_fetchKeyFaceForPerson:(id)arg1 options:(id)arg2;	// IMP=0x0010000000a0ba2c
- (_Bool)px_isHuman;	// IMP=0x0010000000a0b9f7
@property(readonly, nonatomic) struct CGRect normalizedCropRect;
- (struct CGPoint)px_normalizedCenterEyeLine;	// IMP=0x0010000000a0b8ba
- (struct CGSize)px_faceTileSizeAdjustingForImageAspectRatio:(struct CGSize)arg1;	// IMP=0x0010000000a0b841
- (struct CGRect)px_cropRectWithCropFactor:(double)arg1 bounded:(_Bool)arg2;	// IMP=0x0010000000a0b55f
- (struct CGRect)px_cropRectWithCropFactor:(double)arg1;	// IMP=0x0010000000a0b53b
- (_Bool)px_cropRectForPortraitImage:(struct CGRect *)arg1;	// IMP=0x0010000000a0b3f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

