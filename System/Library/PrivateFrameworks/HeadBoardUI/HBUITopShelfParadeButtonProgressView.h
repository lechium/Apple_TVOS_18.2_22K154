//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadeButtonProgressView : UIView
{
    float _progress;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x0060000000009fca
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)tintColorDidChange;	// IMP=0x000000000000a209
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000000a13b
- (void)_updateParadeLayerColor;	// IMP=0x000000000000a0b6
- (void)_updateLayerContentsScale;	// IMP=0x000000000000a03c
- (id)_progressLayer;	// IMP=0x000000000000a02a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000009f37

@end

