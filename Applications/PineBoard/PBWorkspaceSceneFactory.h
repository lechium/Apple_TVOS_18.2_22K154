//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayIdentity, FBScene, FBSceneManager, NSDictionary, NSString, PBSystemAppearanceManager, PBWorkspaceHostingWindow, UIWindowScene;
@protocol PBDisplayConfigurationProviding, PBLocalSynchronousWindowSceneProviding, PBWorkspaceGeometry;

@interface PBWorkspaceSceneFactory : NSObject
{
    FBScene *_rootScene;	// 8 = 0x8
    UIWindowScene *_rootWindowScene;	// 16 = 0x10
    PBWorkspaceHostingWindow *_rootSceneHostingWindow;	// 24 = 0x18
    _Bool _active;	// 32 = 0x20
    _Bool _invalidated;	// 33 = 0x21
    PBSystemAppearanceManager *_systemAppearanceManager;	// 40 = 0x28
    id <PBDisplayConfigurationProviding> _displayConfigurationProvider;	// 48 = 0x30
    FBSDisplayIdentity *_displayIdentity;	// 56 = 0x38
    FBSceneManager *_sceneManager;	// 64 = 0x40
    id <PBLocalSynchronousWindowSceneProviding> _windowSceneProvider;	// 72 = 0x48
    id <PBWorkspaceGeometry> _workspaceGeometry;	// 80 = 0x50
    NSDictionary *_descriptors;	// 88 = 0x58
    NSDictionary *_scenes;	// 96 = 0x60
    NSDictionary *_windowScenes;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000215afe
@property(nonatomic) __weak PBSystemAppearanceManager *systemAppearanceManager; // @synthesize systemAppearanceManager=_systemAppearanceManager;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (id)_createSceneUsingDescriptor:(id)arg1 geometry:(id)arg2;	// IMP=0x00100000002156bc
- (id)_createRootScene;	// IMP=0x001000000021557c
- (id)_displayConfiguration;	// IMP=0x001000000021554e
- (id)stateDumpBuilder;	// IMP=0x0010000000215458
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000214fb1
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000214f60
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000214edf
- (id)succinctDescription;	// IMP=0x0010000000214e8e
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (void)_handleDisplayBoundsDidChangeNotification:(id)arg1;	// IMP=0x0010000000214db8
- (void)invalidate;	// IMP=0x0010000000214bcc
- (void)enumerateScenesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000214aff
- (id)windowSceneForKey:(id)arg1;	// IMP=0x0010000000214924
- (id)sceneForKey:(id)arg1;	// IMP=0x0010000000214749
- (_Bool)activate;	// IMP=0x00100000002143ec
@property(readonly, nonatomic) PBWorkspaceHostingWindow *rootSceneHostingWindow;
@property(readonly, nonatomic) UIWindowScene *rootWindowScene;
@property(readonly, nonatomic) FBScene *rootScene;
- (void)dealloc;	// IMP=0x0010000000213fb5
- (id)initWithDisplayConfigurationProvider:(id)arg1 displayIdentity:(id)arg2 sceneManager:(id)arg3 windowSceneProvider:(id)arg4 workspaceGeometry:(id)arg5 descriptors:(id)arg6;	// IMP=0x0010000000213906

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

