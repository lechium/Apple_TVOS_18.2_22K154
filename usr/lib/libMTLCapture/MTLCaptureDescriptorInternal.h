//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/MTLCaptureDescriptor.h>

@interface MTLCaptureDescriptorInternal : MTLCaptureDescriptor
{
    _Bool _apiTriggeredCapture;	// 8 = 0x8
    _Bool toolTriggeredCapture;	// 9 = 0x9
    _Bool ignoreUnusedResources;	// 10 = 0xa
    _Bool suspendAfterCapture;	// 11 = 0xb
    _Bool includeBacktrace;	// 12 = 0xc
    unsigned long long sessionID;	// 16 = 0x10
    unsigned long long captureMode;	// 24 = 0x18
    unsigned long long triggerHitsToStart;	// 32 = 0x20
    unsigned long long triggerHitsToEnd;	// 40 = 0x28
    CDUnknownBlockType completionHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000c63d9
@property(nonatomic) _Bool includeBacktrace; // @synthesize includeBacktrace;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
@property(nonatomic) _Bool suspendAfterCapture; // @synthesize suspendAfterCapture;
@property(nonatomic) _Bool ignoreUnusedResources; // @synthesize ignoreUnusedResources;
@property(nonatomic) _Bool toolTriggeredCapture; // @synthesize toolTriggeredCapture;
@property(nonatomic) _Bool apiTriggeredCapture; // @synthesize apiTriggeredCapture=_apiTriggeredCapture;
@property(nonatomic) unsigned long long triggerHitsToEnd; // @synthesize triggerHitsToEnd;
@property(nonatomic) unsigned long long triggerHitsToStart; // @synthesize triggerHitsToStart;
@property(nonatomic) unsigned long long captureMode; // @synthesize captureMode;
@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID;
- (id)init;	// IMP=0x00000000000c6236

@end

