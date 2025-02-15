//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NEConfigurationManager, NSArray, NSMutableDictionary, TVSObserverSet, TVSSVPNConfiguration;
@protocol OS_dispatch_queue;

@interface TVSSVPNController : NSObject
{
    NSArray *_configurations;	// 8 = 0x8
    TVSSVPNConfiguration *_activeConfiguration;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NEConfigurationManager *_configurationManager;	// 32 = 0x20
    NSMutableDictionary *_tvSSConfigurationsByIdentifier;	// 40 = 0x28
    TVSObserverSet *_observers;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000000d540
@property(readonly, nonatomic) TVSObserverSet *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableDictionary *tvSSConfigurationsByIdentifier; // @synthesize tvSSConfigurationsByIdentifier=_tvSSConfigurationsByIdentifier;
@property(retain, nonatomic) NEConfigurationManager *configurationManager; // @synthesize configurationManager=_configurationManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) TVSSVPNConfiguration *activeConfiguration; // @synthesize activeConfiguration=_activeConfiguration;
@property(retain, nonatomic) NSArray *configurations; // @synthesize configurations=_configurations;
- (void)_notifyObserversConfigurationsChanged:(id)arg1;	// IMP=0x001000000000d120
- (void)_updateConfigurationsWithNEConfigurations:(id)arg1;	// IMP=0x001000000000cbb0
- (_Bool)includesRelays;	// IMP=0x001000000000c960
- (void)removeObserver:(id)arg1;	// IMP=0x001000000000c8f0
- (void)addObserver:(id)arg1;	// IMP=0x001000000000c880
- (void)saveConfiguration:(id)arg1;	// IMP=0x001000000000c1f0
- (void)loadConfigurations;	// IMP=0x001000000000bf80
- (void)dealloc;	// IMP=0x001000000000bf20
- (id)init;	// IMP=0x001000000000bca0

@end

