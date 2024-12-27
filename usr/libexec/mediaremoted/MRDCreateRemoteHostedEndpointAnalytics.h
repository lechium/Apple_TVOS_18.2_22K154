//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MRDTimingEvent, NSString;

@interface MRDCreateRemoteHostedEndpointAnalytics : NSObject
{
    MISSING_TYPE *requestID;	// 8 = 0x8
    MISSING_TYPE *eventName;	// 24 = 0x18
    MISSING_TYPE *tracked;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_createTransientExternalDevice;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_connectToTransientExternalDevice;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_createHostedEndpoint;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_searchForGroupUID;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x004000000022dd50
- (id)init;	// IMP=0x001000000022dd10
- (void)track;	// IMP=0x001000000022dcf0
- (void)trackWithError:(id)arg1;	// IMP=0x001000000022dcd0
- (id)initWithRequestID:(id)arg1;	// IMP=0x001000000022dc00
@property(nonatomic, retain) MRDTimingEvent *searchForGroupUID;
@property(nonatomic, retain) MRDTimingEvent *createHostedEndpoint;
@property(nonatomic, retain) MRDTimingEvent *connectToTransientExternalDevice;
@property(nonatomic, retain) MRDTimingEvent *createTransientExternalDevice;
@property(nonatomic, copy) NSString *requestID;

@end

