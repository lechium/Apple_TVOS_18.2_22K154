//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSSceneComponent.h>

@class NSString;
@protocol _UISceneHostingContentSizePreferenceHostReceiving;

__attribute__((visibility("hidden")))
@interface _UISceneHostingContentSizePreferenceHostComponent : FBSSceneComponent
{
    id <_UISceneHostingContentSizePreferenceHostReceiving> _contentSizePreferenceReceiver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000094501d
@property(nonatomic, setter=setContentSizePreferenceReceiver:) __weak id <_UISceneHostingContentSizePreferenceHostReceiving> contentSizePreferenceReceiver; // @synthesize contentSizePreferenceReceiver=_contentSizePreferenceReceiver;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x0000000000944e38
- (struct CGSize)preferredContentSize;	// IMP=0x0000000000944db8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

