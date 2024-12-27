//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HMDXPCRequest : HMFObject
{
    NSString *_name;	// 8 = 0x8
    long long _qualityOfService;	// 16 = 0x10
    NSDate *_timeoutDate;	// 24 = 0x18
    CDUnknownBlockType _responseHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000009f56d2
@property(readonly, copy) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, copy) NSDate *timeoutDate; // @synthesize timeoutDate=_timeoutDate;
@property(readonly) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 timeoutDate:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000009f5525

@end

