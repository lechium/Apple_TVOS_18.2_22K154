//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSceneWorkspace, NSString;

__attribute__((visibility("hidden")))
@interface _UISceneHostingWorkspaceController : NSObject
{
    FBSceneWorkspace *_sceneWorkspace;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002ec4d1
@property(readonly, nonatomic) FBSceneWorkspace *sceneWorkspace; // @synthesize sceneWorkspace=_sceneWorkspace;
- (void)workspace:(id)arg1 willRemoveScene:(id)arg2;	// IMP=0x00000000002ec3d0
- (void)workspace:(id)arg1 didAddScene:(id)arg2;	// IMP=0x00000000002ec2d9
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000002ec17f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

