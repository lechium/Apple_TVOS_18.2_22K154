//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserActivity/UAUserActivityInfo.h>

@class NSData, NSDate, NSMutableSet, NSSet, SFActivityScanner, SharingBTLEAdvertisementPayload, UACornerActionManager, UASharingReceiver;

@interface SharingBTLESuggestedItem : UAUserActivityInfo
{
    unsigned int _optionBits;	// 8 = 0x8
    NSDate *_currentUntilDate;	// 16 = 0x10
    SFActivityScanner *_scanner;	// 24 = 0x18
    SharingBTLEAdvertisementPayload *_advertisementPayload;	// 32 = 0x20
    double _payloadAvailabilityDelay;	// 40 = 0x28
    NSMutableSet *_payloadRequestedCompletions;	// 48 = 0x30
    UASharingReceiver *_receiver;	// 56 = 0x38
    UACornerActionManager *_manager;	// 64 = 0x40
    NSSet *_teamIDs;	// 72 = 0x48
    NSDate *_dontPrefetchBefore;	// 80 = 0x50
    NSDate *_removeAfter;	// 88 = 0x58
}

+ (id)statusString;	// IMP=0x00400000000689a4
+ (id)cornerActionBTLEItemWithPayload:(id)arg1 device:(id)arg2 options:(id)arg3 optionBits:(unsigned int)arg4 scanner:(id)arg5 receiver:(id)arg6;	// IMP=0x0010000000062f89
+ (id)cornerActionBTLEItemWithSFAdvertisement:(id)arg1 optionBits:(unsigned int)arg2 scanner:(id)arg3 receiver:(id)arg4;	// IMP=0x0010000000062e5c
- (void).cxx_destruct;	// IMP=0x0020000000068b9a
@property(copy) NSDate *removeAfter; // @synthesize removeAfter=_removeAfter;
@property(copy) NSDate *dontPrefetchBefore; // @synthesize dontPrefetchBefore=_dontPrefetchBefore;
@property(copy) NSSet *teamIDs; // @synthesize teamIDs=_teamIDs;
@property unsigned int optionBits; // @synthesize optionBits=_optionBits;
@property(readonly, retain) UACornerActionManager *manager; // @synthesize manager=_manager;
@property(readonly, retain) UASharingReceiver *receiver; // @synthesize receiver=_receiver;
@property(retain) NSMutableSet *payloadRequestedCompletions; // @synthesize payloadRequestedCompletions=_payloadRequestedCompletions;
@property double payloadAvailabilityDelay; // @synthesize payloadAvailabilityDelay=_payloadAvailabilityDelay;
@property(copy) SharingBTLEAdvertisementPayload *advertisementPayload; // @synthesize advertisementPayload=_advertisementPayload;
@property(readonly, retain) SFActivityScanner *scanner; // @synthesize scanner=_scanner;
@property(copy) NSDate *currentUntilDate; // @synthesize currentUntilDate=_currentUntilDate;
- (id)description;	// IMP=0x0010000000068862
- (void)setWhen:(id)arg1;	// IMP=0x001000000006875c
- (id)when;	// IMP=0x0010000000068685
- (id)statusString;	// IMP=0x00100000000680e9
- (void)clearPayload;	// IMP=0x0010000000067ec7
- (void)resignCurrent;	// IMP=0x0010000000067e57
- (_Bool)requestPayloadWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000065b4e
- (_Bool)updateFromSFAdvertisement:(id)arg1;	// IMP=0x00100000000655b5
- (id)initWithPayload:(id)arg1 device:(id)arg2 options:(id)arg3 optionBits:(unsigned int)arg4 type:(unsigned long long)arg5 activityType:(id)arg6 bundleIdentifier:(id)arg7 teamIDs:(id)arg8 advertisingOptions:(id)arg9 scanner:(id)arg10 receiver:(id)arg11;	// IMP=0x001000000006497f
- (id)initWithPayload:(id)arg1 device:(id)arg2 options:(id)arg3 optionBits:(unsigned int)arg4 type:(unsigned long long)arg5 activityType:(id)arg6 bundleIdentifier:(id)arg7 teamIDs:(id)arg8 advertisingOptions:(id)arg9 scanner:(id)arg10 receiver:(id)arg11 dynamicIdentifier:(id)arg12;	// IMP=0x00100000000648db

// Remaining properties
@property(readonly, copy) NSData *BTLEPayloadData; // @dynamic BTLEPayloadData;

@end

