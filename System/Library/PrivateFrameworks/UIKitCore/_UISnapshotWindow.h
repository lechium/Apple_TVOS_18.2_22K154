//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIWindow.h"

__attribute__((visibility("hidden")))
@interface _UISnapshotWindow : UIWindow
{
    _Bool __extendsScreenSceneLifetime;	// 312 = 0x138
}

+ (_Bool)_isSystemWindow;	// IMP=0x00600000011291f9
@property _Bool _extendsScreenSceneLifetime; // @synthesize _extendsScreenSceneLifetime=__extendsScreenSceneLifetime;
- (_Bool)_shouldAdjustSizeClassesAndResizeWindow;	// IMP=0x0000000001129243
- (_Bool)_alwaysGetsContexts;	// IMP=0x000000000112923b
- (_Bool)_shouldZoom;	// IMP=0x0000000001129233
- (void)_updateTransformLayerForClassicPresentation;	// IMP=0x000000000112922d
- (double)_adjustedWindowLevelFromLevel:(double)arg1;	// IMP=0x0000000001129227
- (_Bool)_canDisableMirroring;	// IMP=0x000000000112921f
- (_Bool)_canActAsKeyWindowForScreen:(id)arg1;	// IMP=0x0000000001129217
- (_Bool)canBecomeKeyWindow;	// IMP=0x000000000112920f
- (void)_setFirstResponder:(id)arg1;	// IMP=0x0000000001129209
- (_Bool)_isSettingFirstResponder;	// IMP=0x0000000001129201

@end

