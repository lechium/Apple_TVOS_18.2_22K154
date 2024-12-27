//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CXAbstractProviderSource, NSNotificationCenter, NSString;
@protocol TUFeatureFlags;

@interface CSDProviderCallConfiguration : NSObject
{
    _Bool _endpointOnCurrentDevice;	// 8 = 0x8
    _Bool _held;	// 9 = 0x9
    _Bool _outgoing;	// 10 = 0xa
    _Bool _accessoryButtonEventsEnabled;	// 11 = 0xb
    id <TUFeatureFlags> _featureFlags;	// 16 = 0x10
    NSString *_providerIdentifier;	// 24 = 0x18
    CXAbstractProviderSource *_providerSource;	// 32 = 0x20
    long long _transmissionMode;	// 40 = 0x28
    NSNotificationCenter *_defaultNotificationCenter;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000c5128
@property(retain, nonatomic) NSNotificationCenter *defaultNotificationCenter; // @synthesize defaultNotificationCenter=_defaultNotificationCenter;
@property(nonatomic) _Bool accessoryButtonEventsEnabled; // @synthesize accessoryButtonEventsEnabled=_accessoryButtonEventsEnabled;
@property(nonatomic) long long transmissionMode; // @synthesize transmissionMode=_transmissionMode;
@property(retain, nonatomic) CXAbstractProviderSource *providerSource; // @synthesize providerSource=_providerSource;
@property(readonly, copy, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(nonatomic, getter=isOutgoing) _Bool outgoing; // @synthesize outgoing=_outgoing;
@property(nonatomic, getter=isHeld) _Bool held; // @synthesize held=_held;
@property(retain, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(nonatomic, getter=isEndpointOnCurrentDevice) _Bool endpointOnCurrentDevice; // @synthesize endpointOnCurrentDevice=_endpointOnCurrentDevice;
- (id)initWithProviderIdentifier:(id)arg1;	// IMP=0x00000000000c4fbf

@end

