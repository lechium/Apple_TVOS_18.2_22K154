//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFWatchdogTimer, NSMutableDictionary, NSString;

@interface ADCloudResponseHandler : NSObject
{
    unsigned short _responseType;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    long long _outstandingResponses;	// 24 = 0x18
    NSMutableDictionary *_responses;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
    AFWatchdogTimer *_timeoutTimer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001a018e
@property(retain, nonatomic) AFWatchdogTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSMutableDictionary *responses; // @synthesize responses=_responses;
@property(nonatomic) unsigned short responseType; // @synthesize responseType=_responseType;
@property(nonatomic) long long outstandingResponses; // @synthesize outstandingResponses=_outstandingResponses;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end

