//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBTopShelfFetchContentOperation, HBTopShelfFetchTimer, HBTopShelfStaticImageModel, NSMutableDictionary, NSString, PBSAppInfo, TVTopShelfContentExtensionAttributes;
@protocol HBTopShelfExtensionControllerDelegate, OS_dispatch_queue_serial, TVTopShelfContentExtensionControlling, TVTopShelfContentPrivate;

__attribute__((visibility("hidden")))
@interface HBTopShelfExtensionController : NSObject
{
    _Bool _started;	// 8 = 0x8
    _Bool _staticModelActive;	// 9 = 0x9
    _Bool _contentExtensionTrusted;	// 10 = 0xa
    _Bool _internetBecameAvailable;	// 11 = 0xb
    NSString *_containingApplicationBundleIdentifier;	// 16 = 0x10
    PBSAppInfo *_appInfo;	// 24 = 0x18
    id <HBTopShelfExtensionControllerDelegate> _delegate;	// 32 = 0x20
    unsigned long long _pauseFetchCount;	// 40 = 0x28
    NSMutableDictionary *_modelControllerContextByIdentifier;	// 48 = 0x30
    NSObject<OS_dispatch_queue_serial> *_processingQueue;	// 56 = 0x38
    HBTopShelfStaticImageModel *_staticModel;	// 64 = 0x40
    id <TVTopShelfContentExtensionControlling> _contentExtensionController;	// 72 = 0x48
    TVTopShelfContentExtensionAttributes *_contentExtensionAttributes;	// 80 = 0x50
    id <TVTopShelfContentPrivate> _content;	// 88 = 0x58
    HBTopShelfFetchContentOperation *_fetchOperation;	// 96 = 0x60
    HBTopShelfFetchTimer *_fetchTimer;	// 104 = 0x68
    unsigned long long _consecutiveFetchTimeoutCount;	// 112 = 0x70
}

+ (_Bool)_isApplicationRestricted:(id)arg1 restrictionsEnabled:(_Bool)arg2;	// IMP=0x001000000002f974
+ (_Bool)_isApplicationRestricted:(id)arg1;	// IMP=0x001000000002f8e8
+ (_Bool)_contentIsDisplayable:(id)arg1;	// IMP=0x001000000002f893
- (void).cxx_destruct;	// IMP=0x0000000000030ad6
@property(nonatomic) unsigned long long consecutiveFetchTimeoutCount; // @synthesize consecutiveFetchTimeoutCount=_consecutiveFetchTimeoutCount;
@property(nonatomic) _Bool internetBecameAvailable; // @synthesize internetBecameAvailable=_internetBecameAvailable;
@property(retain, nonatomic) HBTopShelfFetchTimer *fetchTimer; // @synthesize fetchTimer=_fetchTimer;
@property(retain, nonatomic) HBTopShelfFetchContentOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(retain, nonatomic) id <TVTopShelfContentPrivate> content; // @synthesize content=_content;
@property(nonatomic, getter=isContentExtensionTrusted) _Bool contentExtensionTrusted; // @synthesize contentExtensionTrusted=_contentExtensionTrusted;
@property(retain, nonatomic) TVTopShelfContentExtensionAttributes *contentExtensionAttributes; // @synthesize contentExtensionAttributes=_contentExtensionAttributes;
@property(retain, nonatomic) id <TVTopShelfContentExtensionControlling> contentExtensionController; // @synthesize contentExtensionController=_contentExtensionController;
@property(nonatomic, getter=isStaticModelActive) _Bool staticModelActive; // @synthesize staticModelActive=_staticModelActive;
@property(retain, nonatomic) HBTopShelfStaticImageModel *staticModel; // @synthesize staticModel=_staticModel;
@property(retain, nonatomic) NSObject<OS_dispatch_queue_serial> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSMutableDictionary *modelControllerContextByIdentifier; // @synthesize modelControllerContextByIdentifier=_modelControllerContextByIdentifier;
@property(nonatomic) unsigned long long pauseFetchCount; // @synthesize pauseFetchCount=_pauseFetchCount;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) __weak id <HBTopShelfExtensionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PBSAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(readonly, copy, nonatomic) NSString *containingApplicationBundleIdentifier; // @synthesize containingApplicationBundleIdentifier=_containingApplicationBundleIdentifier;
- (void)_performExtensionRequestForItem:(id)arg1 requestLogName:(id)arg2 checkDelegateFlagsBlock:(CDUnknownBlockType)arg3 checkEntitledBlock:(CDUnknownBlockType)arg4 performRequestBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000030355
- (id)_newTopShelfContentExtensionController;	// IMP=0x000000000002ff55
- (void)_enumerateModelControllerWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002fd9a
- (id)_modelForContent:(id)arg1;	// IMP=0x000000000002f656
- (id)_model;	// IMP=0x000000000002f591
- (long long)_fetchPriority;	// IMP=0x000000000002f4c4
- (void)_handleReceivedContent:(id)arg1 allowStaticModel:(_Bool)arg2;	// IMP=0x000000000002ef96
- (_Bool)_isModelBeingUsed;	// IMP=0x000000000002ef19
- (void)_removeModelControllerForIdentifier:(id)arg1;	// IMP=0x000000000002ed15
- (void)_addModelController:(id)arg1;	// IMP=0x000000000002ea88
- (void)_fetchOperationDidComplete:(id)arg1;	// IMP=0x000000000002e57d
- (void)_updateWithAppInfo:(id)arg1;	// IMP=0x000000000002e257
- (void)_resumeFetchTimer;	// IMP=0x000000000002e1f1
- (void)_pauseFetchTimer;	// IMP=0x000000000002e1b4
- (void)_resumeFetching;	// IMP=0x000000000002e114
- (void)_pauseFetching;	// IMP=0x000000000002e050
- (void)_handleExtensionActionResult:(id)arg1 forAction:(id)arg2 forItem:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002dc7d
- (void)_prepareForExtensionAction;	// IMP=0x000000000002dc6b
- (void)_invalidateIfNeeded;	// IMP=0x000000000002dc22
- (void)_invalidate;	// IMP=0x000000000002da6f
- (void)_start;	// IMP=0x000000000002d838
- (void)_verifyContentExtensionTrust;	// IMP=0x000000000002d706
- (_Bool)_hasReachedConsecutiveFetchTimeoutLimit;	// IMP=0x000000000002d6ad
- (void)_handlePurgeTopShelfContentNotification:(id)arg1;	// IMP=0x000000000002d0bb
- (void)_handleInternetAvailabilityChangedNotification:(id)arg1;	// IMP=0x000000000002cdae
- (void)_handleApplicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x000000000002cc65
- (void)_handleApplicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x000000000002ca2e
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;	// IMP=0x000000000002c8f5
- (void)connectionInterruptedForTopShelfContentExtensionController:(id)arg1;	// IMP=0x000000000002c815
- (void)contentDidChangeForTopShelfContentExtensionController:(id)arg1;	// IMP=0x000000000002c61d
- (_Bool)topShelfFetchTimer:(id)arg1 startTopShelfFetchWithIdentifier:(id)arg2;	// IMP=0x000000000002bed6
- (void)topShelfContentExtensionManagerDidUpdate:(id)arg1;	// IMP=0x000000000002bccd
- (void)_restrictionsSettingsDidChangeWithRestrictionsEnabled:(_Bool)arg1;	// IMP=0x000000000002b97e
- (void)_didInvalidateModelControllerWithIdentfier:(id)arg1;	// IMP=0x000000000002b760
- (void)_performViewServicePresentationAction:(id)arg1 forItem:(id)arg2 viewServiceBundleIdentifier:(id)arg3 viewControllerClassName:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000002aed9
- (void)_performCustomAction:(id)arg1 forItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a8de
- (void)_didSelectAction:(id)arg1 forItem:(id)arg2;	// IMP=0x000000000002a6f6
- (void)_didPlayVideoForItem:(id)arg1 isFullScreen:(_Bool)arg2 detailsVisible:(_Bool)arg3;	// IMP=0x000000000002a55b
- (void)_didStopShowingItem:(id)arg1;	// IMP=0x000000000002a3ec
- (void)_didUpdateShownItem:(id)arg1 isFullScreen:(_Bool)arg2 detailsVisible:(_Bool)arg3;	// IMP=0x000000000002a251
- (void)_didShowItem:(id)arg1 isFullScreen:(_Bool)arg2 detailsVisible:(_Bool)arg3;	// IMP=0x000000000002a0b6
- (void)_didShowItem:(id)arg1;	// IMP=0x0000000000029f47
- (id)modelController;	// IMP=0x0000000000029c96
- (void)appWasRemoved:(id)arg1;	// IMP=0x0000000000029ad4
- (void)appWasUpdated:(id)arg1;	// IMP=0x00000000000298d3
- (void)invalidate;	// IMP=0x00000000000297ea
- (void)start;	// IMP=0x00000000000296d3
@property(readonly, nonatomic) _Bool extensionCanPerformPrivateActions;
- (void)dealloc;	// IMP=0x0000000000029572
- (id)initWithAppInfo:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000000293ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

