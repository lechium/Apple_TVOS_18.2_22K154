//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSMutableArray, NSMutableDictionary, RMPersistentActiveIdentifiers;
@protocol RMConfigurationPublisherDelegate;

@interface RMConfigurationPublisher : NSObject
{
    NSObject *_startLock;	// 8 = 0x8
    NSObject *_notificationLock;	// 16 = 0x10
    NSObject *_pluginsLock;	// 24 = 0x18
    _Bool _started;	// 32 = 0x20
    NSManagedObjectContext *_context;	// 40 = 0x28
    RMPersistentActiveIdentifiers *_persistentActiveIdentifiers;	// 48 = 0x30
    NSMutableArray *_plugins;	// 56 = 0x38
    NSMutableDictionary *_eventStreamSubscriptionByToken;	// 64 = 0x40
    id <RMConfigurationPublisherDelegate> _delegate;	// 72 = 0x48
}

+ (id)reportDetails;	// IMP=0x0040000000028c51
+ (void)fetchVisibleConfigurationUIs;	// IMP=0x00100000000286f5
+ (void)reprocessActiveConfigurations;	// IMP=0x0010000000028630
+ (id)_start;	// IMP=0x0010000000027295
+ (void)start;	// IMP=0x0010000000027273
+ (id)sharedConfigurationPublisher;	// IMP=0x001000000002720e
- (void).cxx_destruct;	// IMP=0x002000000002ad5b
@property(nonatomic) __weak id <RMConfigurationPublisherDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *eventStreamSubscriptionByToken; // @synthesize eventStreamSubscriptionByToken=_eventStreamSubscriptionByToken;
@property(retain, nonatomic) NSMutableArray *plugins; // @synthesize plugins=_plugins;
@property(retain, nonatomic) RMPersistentActiveIdentifiers *persistentActiveIdentifiers; // @synthesize persistentActiveIdentifiers=_persistentActiveIdentifiers;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void)_notifySubscribersWithMissingConfigurationUITypes:(id)arg1;	// IMP=0x001000000002a96c
- (void)_notifyMissingConfigurationUIsForTypes:(id)arg1;	// IMP=0x001000000002a7b3
- (void)_notifySubscribersWithConfigurationTypes:(id)arg1;	// IMP=0x001000000002a454
- (void)_notifyChangedConfigurationsForTypes:(id)arg1;	// IMP=0x001000000002a29b
- (void)_notifyChangedConfigurationsIfNeededWithStatusUpdate:(_Bool)arg1;	// IMP=0x00100000000298ef
- (void)_notifyChangedConfigurationsIfNeeded;	// IMP=0x00100000000298d8
- (void)_managedObjectContextDidSave:(id)arg1;	// IMP=0x0010000000028e1b
- (void)_fetchVisibleConfigurationUIs;	// IMP=0x0010000000028739
- (void)_reprocessActiveConfigurations;	// IMP=0x0010000000028674
- (id);	// IMP=0x00100000000285af
- (void)_loadPlugins;	// IMP=0x0010000000028461
- (void)_loadAllConfigurationSubscribersAllowingThemToCheckForChanges;	// IMP=0x0010000000028052
- (void)_removeEventStreamSubscriberForToken:(unsigned long long)arg1;	// IMP=0x0010000000027dbf
- (void)_addEventStreamSubscriberWithSubscription:(id)arg1;	// IMP=0x0010000000027b06
- (void)_start;	// IMP=0x001000000002789d
- (id)initWithPersistentActiveIdentifiers:(id)arg1 context:(id)arg2;	// IMP=0x0010000000027786

@end

