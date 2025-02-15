//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSBAASigner, NSString;
@protocol OS_dispatch_queue;

@interface IDSDXPCBAASigner : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSString *_topic;	// 16 = 0x10
    IDSBAASigner *_baaSigner;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000ac59
@property(retain, nonatomic) IDSBAASigner *baaSigner; // @synthesize baaSigner=_baaSigner;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)purgeBAACertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ab7e
- (void)baaHeadersBySigningData:(id)arg1 serverTimestamp:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000aa5a
- (id)initWithTopic:(id)arg1 queue:(id)arg2 connection:(id)arg3;	// IMP=0x001000000000a4a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

