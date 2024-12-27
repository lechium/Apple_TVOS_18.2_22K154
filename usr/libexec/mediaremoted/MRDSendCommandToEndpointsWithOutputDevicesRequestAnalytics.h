//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MRDTimingEvent, MRDeviceInfo, MRRequestDetails, NSString;

@interface MRDSendCommandToEndpointsWithOutputDevicesRequestAnalytics : NSObject
{
    MISSING_TYPE *details;	// 8 = 0x8
    MISSING_TYPE *deviceInfo;	// 16 = 0x10
    MISSING_TYPE *command;	// 24 = 0x18
    MISSING_TYPE *commandString;	// 32 = 0x20
    MISSING_TYPE *requestContainsLocalDeviceUID;	// 48 = 0x30
    MISSING_TYPE *requestForCurrentConfiguration;	// 49 = 0x31
    MISSING_TYPE *requestForLocalOrigin;	// 50 = 0x32
    MISSING_TYPE *requestForCompanionOrigin;	// 51 = 0x33
    MISSING_TYPE *numberOfRequestedOutputDeviceUIDs;	// 56 = 0x38
    MISSING_TYPE *numberOfDiscoveredOutputDeviceUIDs;	// 64 = 0x40
    MISSING_TYPE *numberOfMissingOutputDeviceUIDs;	// 72 = 0x48
    MISSING_TYPE *numberOfEndpoints;	// 80 = 0x50
    MISSING_TYPE *numberOfPendingAtTimeout;	// 88 = 0x58
    MISSING_TYPE *numberOfErrorsAtTimeout;	// 96 = 0x60
    MISSING_TYPE *numberOfErrorsAtCompletion;	// 104 = 0x68
    MISSING_TYPE *numberOfSuccessAtTimeout;	// 112 = 0x70
    MISSING_TYPE *numberOfSuccessAtCompletion;	// 120 = 0x78
    MISSING_TYPE *timeout;	// 128 = 0x80
    MISSING_TYPE *eventName;	// 136 = 0x88
    MISSING_TYPE *$__lazy_storage_$_discoverOutputDevices;	// 152 = 0x98
    MISSING_TYPE *$__lazy_storage_$_sendCommands;	// 160 = 0xa0
    MISSING_TYPE *tracked;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0040000000233380
- (id)init;	// IMP=0x0010000000233320
- (void)track;	// IMP=0x0010000000233300
- (void)trackWithError:(id)arg1;	// IMP=0x00100000002332e0
- (MISSING_TYPE *)initWithDetails:deviceInfo:numberOfRequestedOutputDeviceUIDs:timeout: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000233280
@property(nonatomic) _Bool tracked; // @synthesize tracked;
@property(nonatomic, retain) MRDTimingEvent *sendCommands;
@property(nonatomic, retain) MRDTimingEvent *discoverOutputDevices;
@property(nonatomic) double timeout; // @synthesize timeout;
@property(nonatomic) long long numberOfSuccessAtCompletion; // @synthesize numberOfSuccessAtCompletion;
@property(nonatomic) long long numberOfSuccessAtTimeout; // @synthesize numberOfSuccessAtTimeout;
@property(nonatomic) long long numberOfErrorsAtCompletion; // @synthesize numberOfErrorsAtCompletion;
@property(nonatomic) long long numberOfErrorsAtTimeout; // @synthesize numberOfErrorsAtTimeout;
@property(nonatomic) long long numberOfPendingAtTimeout; // @synthesize numberOfPendingAtTimeout;
@property(nonatomic) long long numberOfEndpoints; // @synthesize numberOfEndpoints;
@property(nonatomic) long long numberOfMissingOutputDeviceUIDs; // @synthesize numberOfMissingOutputDeviceUIDs;
@property(nonatomic) long long numberOfDiscoveredOutputDeviceUIDs; // @synthesize numberOfDiscoveredOutputDeviceUIDs;
@property(nonatomic) long long numberOfRequestedOutputDeviceUIDs; // @synthesize numberOfRequestedOutputDeviceUIDs;
@property(nonatomic) _Bool requestForCompanionOrigin; // @synthesize requestForCompanionOrigin;
@property(nonatomic) _Bool requestForLocalOrigin; // @synthesize requestForLocalOrigin;
@property(nonatomic) _Bool requestForCurrentConfiguration; // @synthesize requestForCurrentConfiguration;
@property(nonatomic) _Bool requestContainsLocalDeviceUID; // @synthesize requestContainsLocalDeviceUID;
@property(nonatomic, copy) NSString *commandString;
@property(nonatomic) long long command; // @synthesize command;
@property(nonatomic, retain) MRDeviceInfo *deviceInfo; // @synthesize deviceInfo;
@property(nonatomic, retain) MRRequestDetails *details; // @synthesize details;

@end

