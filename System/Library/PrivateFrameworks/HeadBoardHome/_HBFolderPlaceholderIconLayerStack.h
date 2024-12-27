//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage, _HBNamedLayerImage;

__attribute__((visibility("hidden")))
@interface _HBFolderPlaceholderIconLayerStack : NSObject
{
    _HBNamedLayerImage *_backgroundImageLayer;	// 8 = 0x8
    UIImage *_radiosityUIImage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006c8dc
@property(readonly, nonatomic, getter=_radiosityUIImage) UIImage *radiosityUIImage; // @synthesize radiosityUIImage=_radiosityUIImage;
@property(readonly, nonatomic, getter=_backgroundImageLayer) _HBNamedLayerImage *backgroundImageLayer; // @synthesize backgroundImageLayer=_backgroundImageLayer;
@property(readonly, nonatomic) id radiosityImage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@,?,R,N

@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSArray *layers;
- (id)init;	// IMP=0x000000000006c5a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize radiosityImageScale;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGSize=dd},?,R,N

@property(readonly) Class superclass;

@end

