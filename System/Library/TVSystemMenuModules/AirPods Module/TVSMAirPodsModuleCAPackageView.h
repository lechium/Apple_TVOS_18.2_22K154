//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, CAPackage, CAStateController, NSString;

@interface TVSMAirPodsModuleCAPackageView : UIView
{
    CAStateController *_stateController;	// 8 = 0x8
    UIView *_packageContentView;	// 16 = 0x10
    CALayer *_packageLayer;	// 24 = 0x18
    CAPackage *_package;	// 32 = 0x20
    NSString *_packageName;	// 40 = 0x28
    double _scale;	// 48 = 0x30
    double _preferredRasterizationScale;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000024b0
@property(nonatomic) double preferredRasterizationScale; // @synthesize preferredRasterizationScale=_preferredRasterizationScale;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(retain, nonatomic) CAPackage *package; // @synthesize package=_package;
- (void)_calculateAndSetRasterizationScaleForLayer:(id)arg1;	// IMP=0x0000000000001f70
- (void)_updateRasterizationScale;	// IMP=0x0000000000001ef0
- (void)_setPackage:(id)arg1;	// IMP=0x0000000000001d00
- (void)setStateName:(id)arg1;	// IMP=0x0000000000001c50
- (void)layoutSubviews;	// IMP=0x0000000000001880
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000001760

@end

