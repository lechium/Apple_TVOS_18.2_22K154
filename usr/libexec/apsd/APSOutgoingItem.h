//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface APSOutgoingItem : NSObject
{
    CDUnknownBlockType _sendBlock;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
    double _timeout;	// 24 = 0x18
    NSDate *_timestamp;	// 32 = 0x20
    NSString *_sendInterface;	// 40 = 0x28
    _Bool _sent;	// 48 = 0x30
    _Bool _hasTimedOut;	// 49 = 0x31
}

- (void).cxx_destruct;	// IMP=0x002000000009e27f
@property(readonly, copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool hasTimedOut; // @synthesize hasTimedOut=_hasTimedOut;
@property(retain, nonatomic) NSString *sendInterface; // @synthesize sendInterface=_sendInterface;
@property(nonatomic) _Bool sent; // @synthesize sent=_sent;
- (id)initWithSendBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 timeout:(double)arg3;	// IMP=0x001000000009e13d

@end

