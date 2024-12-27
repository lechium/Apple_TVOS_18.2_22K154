//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAHACommand.h>

@class HMDAssistantCommandHelper, HMDAssistantGather, HMDHome, HMDHomeManager, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAssistantCommand : SAHACommand
{
    _Bool _completionHandlerCalled;	// 8 = 0x8
    HMDHomeManager *_homeManager;	// 16 = 0x10
    HMDAssistantGather *_gather;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSArray *_homeKitObjects;	// 40 = 0x28
    long long _numberOfHomes;	// 48 = 0x30
    NSString *_primaryHomeName;	// 56 = 0x38
    NSString *_primaryHomeAssistantIdentifier;	// 64 = 0x40
    NSString *_currentHomeName;	// 72 = 0x48
    NSString *_currentHomeAssistantIdentifier;	// 80 = 0x50
    HMDAssistantCommandHelper *_assistantCommandHelper;	// 88 = 0x58
    HMDHome *_home;	// 96 = 0x60
    unsigned long long _startTime;	// 104 = 0x68
}

+ (void)initialize;	// IMP=0x00100000001f145e
+ (id)logCategory;	// IMP=0x00100000001f142e
- (void).cxx_destruct;	// IMP=0x000000000020c122
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) HMDHome *home; // @synthesize home=_home;
@property(nonatomic) _Bool completionHandlerCalled; // @synthesize completionHandlerCalled=_completionHandlerCalled;
@property(retain, nonatomic) HMDAssistantCommandHelper *assistantCommandHelper; // @synthesize assistantCommandHelper=_assistantCommandHelper;
@property(retain, nonatomic) NSString *currentHomeAssistantIdentifier; // @synthesize currentHomeAssistantIdentifier=_currentHomeAssistantIdentifier;
@property(retain, nonatomic) NSString *currentHomeName; // @synthesize currentHomeName=_currentHomeName;
@property(retain, nonatomic) NSString *primaryHomeAssistantIdentifier; // @synthesize primaryHomeAssistantIdentifier=_primaryHomeAssistantIdentifier;
@property(retain, nonatomic) NSString *primaryHomeName; // @synthesize primaryHomeName=_primaryHomeName;
@property(nonatomic) long long numberOfHomes; // @synthesize numberOfHomes=_numberOfHomes;
@property(retain, nonatomic) NSArray *homeKitObjects; // @synthesize homeKitObjects=_homeKitObjects;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HMDAssistantGather *gather; // @synthesize gather=_gather;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)timeoutAndReportResults;	// IMP=0x000000000020bf07
- (void)performWithGather:(id)arg1 queue:(id)arg2 msgDispatcher:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000020b612
- (void)handleGetColor:(id)arg1 forObjects:(id)arg2 serviceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000020a644
- (void)handleSetColor:(id)arg1 forObjects:(id)arg2 service:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002096ef
- (id)readRequestsForCharacteristic:(id)arg1;	// IMP=0x00000000002093ed
- (id)addStatusCharacteristicsIfNeeded:(id)arg1;	// IMP=0x0000000000208e02
- (void)addLinkedServiceCharacteristicsFor:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3;	// IMP=0x00000000002089b4
- (void)addBridgedAccessoryCharacteristicsFor:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3;	// IMP=0x000000000020841d
- (id)addCharacteristicsFromRelatedServicesFor:(id)arg1 assistantObjects:(id)arg2;	// IMP=0x000000000020820c
- (void)addCharacteristicWithType:(id)arg1 fromService:(id)arg2 toCollection:(id)arg3 assistantObjects:(id)arg4;	// IMP=0x00000000002080fb
- (void)addActivationCharacteristicsIfNeeded:(id)arg1 forCharacteristic:(id)arg2;	// IMP=0x0000000000207dd2
- (void)addIfNeededActivationCharacteristic:(id)arg1 fromService:(id)arg2 toCollection:(id)arg3;	// IMP=0x0000000000207b89
- (void)handleMediaReadWriteResponse:(id)arg1 forAction:(id)arg2 inServiceType:(id)arg3 inHome:(id)arg4 requestProperty:(id)arg5 results:(id)arg6 forObjects:(id)arg7;	// IMP=0x0000000000207472
- (id)handleReadWriteResponses:(id)arg1 error:(id)arg2 forAction:(id)arg3 inServiceType:(id)arg4 results:(id)arg5 forObjects:(id)arg6;	// IMP=0x00000000002067ad
- (_Bool)populateColorResult:(id)arg1 serviceType:(id)arg2 service:(id)arg3 action:(id)arg4 responses:(id)arg5 forObjects:(id)arg6;	// IMP=0x0000000000205d68
- (id)parseColorEncoding:(id)arg1;	// IMP=0x0000000000204979
- (void)handleCommandWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000020349a
- (void)_handleCommandForHAPAction:(id)arg1 serviceType:(id)arg2 objects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000202f9d
- (void)_handleCommandForMediaAccessoryAction:(id)arg1 objects:(id)arg2 serviceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000202c14
- (void)handleUpdateActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000201296
- (id)updateValue:(id)arg1 forAction:(id)arg2;	// IMP=0x0000000000200bf5
- (id)updateValueToBoundary:(id)arg1 valueType:(id)arg2 fudgeMinimum:(_Bool)arg3 metadata:(id)arg4;	// IMP=0x00000000002008e0
- (void)handleSetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001fec69
- (void)handleSetNaturalLightingAction:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001fe10c
- (void)handleGetNaturalLightingAction:(id)arg1 forObjects:(id)arg2 serviceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001fda0e
- (id)compareForBoundary:(id)arg1 withMetadata:(id)arg2;	// IMP=0x00000000001fd884
- (id)compareCurrentValue:(id)arg1 newValue:(id)arg2 withMetadata:(id)arg3;	// IMP=0x00000000001fd67c
- (void)handleGetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001fc661
- (void)handleMediaAccessorySetActionType:(id)arg1 forObjects:(id)arg2 withServiceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001fbb2a
- (_Bool)populateResult:(id)arg1 fromResponse:(id)arg2 responses:(id)arg3 forAction:(id)arg4 serviceType:(id)arg5 forObjects:(id)arg6;	// IMP=0x00000000001fb15b
- (void)handleGetMetadataActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001fa7cc
- (void)executeActionSet:(id)arg1 action:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001fa272
- (id)actionOutcomeFromError:(id)arg1;	// IMP=0x00000000001fa0ac
- (void)returnResults:(id)arg1 serviceType:(id)arg2 forAction:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001f9e0d
- (void)reportUnlockRequired:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f9d85
- (void)reportResults:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f9cb4
- (void)reportOutcome:(id)arg1 results:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f96fb
- (void)_logEvent:(id)arg1;	// IMP=0x00000000001f90fc
- (id)filterObjects:(id)arg1 forCharacteristics:(id)arg2;	// IMP=0x00000000001f8bef
- (id)filterObjects:(id)arg1 forCharacteristicTypes:(id)arg2;	// IMP=0x00000000001f8617
- (id)objectsWithSearchFilter:(id)arg1 inHome:(id)arg2 serviceTypeIsATV:(_Bool)arg3 overrideServiceTypeIfNeeded:(id *)arg4;	// IMP=0x00000000001f6d5b
- (id)_homeWithSearchFilter:(id)arg1;	// IMP=0x00000000001f6619
- (id)_evaluateHomeOptionallyMatchingHomeName:(id)arg1;	// IMP=0x00000000001f6182
- (id)filteredObjectsFromObjects:(id)arg1 byCharacteristicType:(id)arg2;	// IMP=0x00000000001f5ef6
- (id)filteredObjectsFromObjects:(id)arg1 byAttribute:(id)arg2 forActionType:(id)arg3;	// IMP=0x00000000001f5620
- (id)filteredObjectsFromObjects:(id)arg1 forGroup:(id)arg2;	// IMP=0x00000000001f5412
- (id)filteredObjectsFromObjects:(id)arg1 forHomeName:(id)arg2 roomName:(id)arg3 zoneName:(id)arg4;	// IMP=0x00000000001f4d7a
- (id)objectsWithIdentifierList:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f4a55
- (id)adjustGetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4;	// IMP=0x00000000001f47fd
- (id)adjustSetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4;	// IMP=0x00000000001f45a3
- (_Bool)isAttributeValue:(id)arg1 equalTo:(id)arg2;	// IMP=0x00000000001f435e
- (id)getValueOfType:(id)arg1 action:(id)arg2;	// IMP=0x00000000001f4166
- (id)getLocaleUnits:(id)arg1;	// IMP=0x00000000001f40c1
- (id)actionResultForCharacteristic:(id)arg1 actionSet:(id)arg2 action:(id)arg3 objects:(id)arg4 error:(id)arg5;	// IMP=0x00000000001f3a72
- (id)actionResultForMediaProfile:(id)arg1 action:(id)arg2 objects:(id)arg3 error:(id)arg4;	// IMP=0x00000000001f36fe
- (id)failedActionResultsFromResponse:(id)arg1 inActionSet:(id)arg2 withAction:(id)arg3;	// IMP=0x00000000001f2cb4
- (id)entityFromActionSet:(id)arg1;	// IMP=0x00000000001f2b76
- (_Bool)populateMediaProfileWriteResult:(id)arg1 withValue:(id)arg2 serviceType:(id)arg3 action:(id)arg4;	// IMP=0x00000000001f298f
- (_Bool)populateResultWithEntity:(id)arg1 action:(id)arg2 entity:(id)arg3;	// IMP=0x00000000001f28f6
- (_Bool)populateResult:(id)arg1 withObject:(id)arg2 serviceType:(id)arg3 action:(id)arg4;	// IMP=0x00000000001f2717
- (_Bool)populateResult:(id)arg1 withService:(id)arg2 serviceType:(id)arg3 characteristic:(id)arg4 resultAttribute:(id)arg5 action:(id)arg6;	// IMP=0x00000000001f183f
- (id)mediaProfileFromObject:(id)arg1;	// IMP=0x00000000001f174a
- (id)serviceFromObject:(id)arg1;	// IMP=0x00000000001f1678

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

