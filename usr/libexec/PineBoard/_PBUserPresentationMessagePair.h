//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface _PBUserPresentationMessagePair : NSObject
{
    NSDictionary *_message;	// 8 = 0x8
    CDUnknownBlockType _reply;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000017be67
@property(readonly, copy, nonatomic) CDUnknownBlockType reply; // @synthesize reply=_reply;
@property(readonly, copy, nonatomic) NSDictionary *message; // @synthesize message=_message;
- (id)initWithMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000017bd9a

@end

