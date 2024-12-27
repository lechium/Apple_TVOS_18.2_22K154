//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol UIKeyboardImplGeometryDelegate
@property(nonatomic, getter=isMinimized) _Bool minimized;
- (_Bool)isAutomatic;
- (_Bool)isActive;
- (_Bool)canDismiss;
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;
- (_Bool)shouldSaveMinimizationState;
- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(_Bool)arg2;
- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(_Bool)arg2;
@end

