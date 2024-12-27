//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol VCControlChannelMessageProtocol;

__attribute__((visibility("hidden")))
@interface VCSessionMessageBufferElement : NSObject
{
    id <VCControlChannelMessageProtocol> _message;	// 8 = 0x8
    long long _sequenceNumber;	// 16 = 0x10
    long long _retryNumber;	// 24 = 0x18
}

@property(readonly, nonatomic) long long retryNumber; // @synthesize retryNumber=_retryNumber;
@property(readonly, nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) id <VCControlChannelMessageProtocol> message; // @synthesize message=_message;
- (void)dealloc;	// IMP=0x00000000001502f2
- (id)initWithMessage:(id)arg1 sequenceNumber:(unsigned long long)arg2 retryNumber:(unsigned long long)arg3;	// IMP=0x0000000000150266

@end

