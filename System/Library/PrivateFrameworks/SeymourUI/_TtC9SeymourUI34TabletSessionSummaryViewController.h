//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI34TabletSessionSummaryViewController : UIViewController
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *eventHub;	// 16 = 0x10
    MISSING_TYPE *storefrontLocalizer;	// 32 = 0x20
    MISSING_TYPE *contentSummaryView;	// 72 = 0x48
    MISSING_TYPE *stringBuilder;	// 80 = 0x50
    MISSING_TYPE *backgroundView;	// 152 = 0x98
    MISSING_TYPE *scrollView;	// 160 = 0xa0
    MISSING_TYPE *gridView;	// 168 = 0xa8
    MISSING_TYPE *upNextSummaryView;	// 176 = 0xb0
    MISSING_TYPE *queueCompleteView;	// 184 = 0xb8
    MISSING_TYPE *buttonStackView;	// 192 = 0xc0
    MISSING_TYPE *doneButton;	// 200 = 0xc8
    MISSING_TYPE *cooldownButton;	// 208 = 0xd0
    MISSING_TYPE *stateOfMindLoggingButton;	// 216 = 0xd8
    MISSING_TYPE *ttrBarButtonItem;	// 224 = 0xe0
    MISSING_TYPE *shareBarButtonItem;	// 232 = 0xe8
    MISSING_TYPE *activityRingsView;	// 240 = 0xf0
    MISSING_TYPE *activityRingsBottomPinningConstraint;	// 248 = 0xf8
    MISSING_TYPE *burnBarView;	// 256 = 0x100
    MISSING_TYPE *burnBarToContentSummaryLeadingConstraint;	// 264 = 0x108
    MISSING_TYPE *burnBarToActivityRingsTopConstraint;	// 272 = 0x110
    MISSING_TYPE *burnBarLeadingConstraint;	// 280 = 0x118
    MISSING_TYPE *burnBarToGridViewTopConstraint;	// 288 = 0x120
    MISSING_TYPE *burnBarBottomPinningConstraint;	// 296 = 0x128
    MISSING_TYPE *burnBarConstraints;	// 304 = 0x130
    MISSING_TYPE *contentSummaryTrailingAnchor;	// 312 = 0x138
    MISSING_TYPE *gridViewHeight;	// 320 = 0x140
    MISSING_TYPE *gridViewWidth;	// 328 = 0x148
    MISSING_TYPE *gridViewTopSpacing;	// 336 = 0x150
    MISSING_TYPE *summary;	// 0 = 0x0
    MISSING_TYPE *additionalMetadata;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000001ab950
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001ab8f0
- (void)updateViewConstraints;	// IMP=0x00000000001aa850
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001aa7a0
- (void)ttrButtonTapped;	// IMP=0x00000000001a8240
- (void)shareButtonTapped;	// IMP=0x00000000001a8210
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000001a81e0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001a80b0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a7ea0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000001ad340

@end

