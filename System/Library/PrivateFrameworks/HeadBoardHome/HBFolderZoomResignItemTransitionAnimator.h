//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBApp, HBFolderCell, NSString, UIView;

__attribute__((visibility("hidden")))
@interface HBFolderZoomResignItemTransitionAnimator : NSObject
{
    _Bool _resignTransitionToLeft;	// 8 = 0x8
    HBFolderCell *_folderCell;	// 16 = 0x10
    HBApp *_transitioningApp;	// 24 = 0x18
    UIView *_transitioningView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000085498
@property(nonatomic) _Bool resignTransitionToLeft; // @synthesize resignTransitionToLeft=_resignTransitionToLeft;
@property(retain, nonatomic) UIView *transitioningView; // @synthesize transitioningView=_transitioningView;
@property(retain, nonatomic) HBApp *transitioningApp; // @synthesize transitioningApp=_transitioningApp;
@property(retain, nonatomic) HBFolderCell *folderCell; // @synthesize folderCell=_folderCell;
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000084f16
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000000084f08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

