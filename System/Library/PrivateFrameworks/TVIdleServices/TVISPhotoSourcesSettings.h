//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSString, TVISAccountProvider, TVISOperationQueue;
@protocol TVISPhotoSourcesSettingsDelegate;

__attribute__((visibility("hidden")))
@interface TVISPhotoSourcesSettings : NSObject
{
    CDStruct_6356424b _enabledState;	// 8 = 0x8
    TVISOperationQueue *_operationQueue;	// 16 = 0x10
    TVISAccountProvider *_accountProvider;	// 24 = 0x18
    id <TVISPhotoSourcesSettingsDelegate> _delegate;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
    NSArray *_allSourceOptions;	// 48 = 0x30
}

+ (void)_queryTVPhotoCollectionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000091270
+ (CDStruct_6356424b)_enabledStateFromAccount:(id)arg1;	// IMP=0x00100000000911d0
- (void).cxx_destruct;	// IMP=0x00000000000915b0
@property(copy, nonatomic) NSArray *allSourceOptions; // @synthesize allSourceOptions=_allSourceOptions;
@property(nonatomic) CDStruct_6356424b enabledState; // @synthesize enabledState=_enabledState;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) __weak id <TVISPhotoSourcesSettingsDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TVISAccountProvider *accountProvider; // @synthesize accountProvider=_accountProvider;
@property(readonly, nonatomic) TVISOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (id)_orderedOptions;	// IMP=0x0000000000090e50
- (void)_applyObservers:(CDUnknownBlockType)arg1;	// IMP=0x0000000000090750
- (void)_updateEnabledStateWithAccount:(id)arg1;	// IMP=0x0000000000090530
- (void)_initializeAllSourceOptions;	// IMP=0x000000000008f380
- (void)_initializeEnabledState;	// IMP=0x000000000008ee90
- (void)accountProvider:(id)arg1 didUpdateCurrentAccount:(id)arg2;	// IMP=0x000000000008ec40
- (void)accountProvider:(id)arg1 didChangeCurrentAccount:(id)arg2;	// IMP=0x000000000008e9f0
- (void)onStart;	// IMP=0x000000000008e8c0
- (void)removeSettingsStateObserver:(id)arg1;	// IMP=0x000000000008e7e0
- (void)addSettingsStateObserver:(id)arg1;	// IMP=0x000000000008e700
- (void)setSelectedPhotoSourceWithSourceID:(id)arg1 collectionID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008e4b0
- (void)queryOrderedPhotoSourceOptionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008e0e0
- (id)initWithOperationQueue:(id)arg1 accountProvider:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000008df80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

