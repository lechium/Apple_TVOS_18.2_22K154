//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIView;
@protocol AFUISiriContent;

@protocol AFUISiriContentDelegate
- (_Bool)siriView:(UIView<AFUISiriContent> *)arg1 attemptUnlockWithPassword:(NSString *)arg2;
- (void)siriContentDidReceiveReportBugLongPress:(id <AFUISiriContent>)arg1;
- (void)siriContentDidReceiveReportBugAction:(id <AFUISiriContent>)arg1;
- (void)siriContentDidReceiveOrbHoldDidEndAction:(id <AFUISiriContent>)arg1;
- (void)siriContentDidReceiveOrbHoldDidBeginAction:(id <AFUISiriContent>)arg1;
- (void)siriContentDidReceiveOrbTappedAction:(id <AFUISiriContent>)arg1;
@end

