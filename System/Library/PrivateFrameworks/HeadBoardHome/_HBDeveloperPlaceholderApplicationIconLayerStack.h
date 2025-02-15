//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUINamedLayerStack, NSArray, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _HBDeveloperPlaceholderApplicationIconLayerStack : NSObject
{
    UIImage *_layeredImage;	// 8 = 0x8
    CUINamedLayerStack *_layerStack;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004e02b
@property(readonly, nonatomic, getter=_layerStack) CUINamedLayerStack *layerStack; // @synthesize layerStack=_layerStack;
@property(readonly, nonatomic, getter=_layeredImage) UIImage *layeredImage; // @synthesize layeredImage=_layeredImage;
@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
- (id)imageConfigurationForConfiguration:(id)arg1;	// IMP=0x000000000004deb6
- (id)init;	// IMP=0x000000000004dd7d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id radiosityImage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@,?,R,N

@property(readonly, nonatomic) struct CGSize radiosityImageScale;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGSize=dd},?,R,N

@property(readonly) Class superclass;

@end

