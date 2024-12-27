//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSHTTPURLResponse, NSString, NSURLRequest, NWURLSessionResponseConsumerResumeInfo;

__attribute__((visibility("hidden")))
@interface NWURLSessionDownloadResumeInfo : NSObject
{
    _Bool _prefersIncrementalDelivery;	// 8 = 0x8
    _Bool __keepDownloadTaskFile;	// 9 = 0x9
    float _priority;	// 12 = 0xc
    NSURLRequest *_originalRequest;	// 16 = 0x10
    NSURLRequest *_currentRequest;	// 24 = 0x18
    NSHTTPURLResponse *_response;	// 32 = 0x20
    NSDate *_earliestBeginDate;	// 40 = 0x28
    long long _countOfBytesClientExpectsToSend;	// 48 = 0x30
    long long _countOfBytesClientExpectsToReceive;	// 56 = 0x38
    NSString *_taskDescription;	// 64 = 0x40
    NWURLSessionResponseConsumerResumeInfo *_responseConsumerResumeInfo;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000620ba0
- (void).cxx_destruct;	// IMP=0x0000000000620b40
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006207b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000620590

@end

