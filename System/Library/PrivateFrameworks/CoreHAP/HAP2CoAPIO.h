//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HAP2CoAPIO : NSObject
{
}

+ (id)new;	// IMP=0x00400000001618e8
+ (_Bool)setCoapAddressFromString:(id)arg1 port:(unsigned short)arg2 coapAddress:(struct coap_address_t *)arg3;	// IMP=0x00400000001617b8
+ (void)queueSessionCompletionForConsumer:(id)arg1;	// IMP=0x004000000016166b
+ (void)queueSessionBlockForConsumer:(id)arg1 sessionBlock:(CDUnknownBlockType)arg2 withTimeout:(double)arg3 requiresCompletion:(_Bool)arg4;	// IMP=0x00400000001614f2
+ (void)unregisterConsumer:(id)arg1;	// IMP=0x00400000001612ec
+ (void)registerConsumer:(id)arg1;	// IMP=0x00400000001610f0
+ (_Bool)isRunning;	// IMP=0x0040000000161022
+ (void)setThread:(id)arg1;	// IMP=0x0040000000160fb3
+ (id)thread;	// IMP=0x0040000000160f6a
+ (void)setConsumers:(id)arg1;	// IMP=0x0040000000160efb
+ (id)consumers;	// IMP=0x0040000000160eb2
+ (id)lock;	// IMP=0x0040000000160e82
- (id)init;	// IMP=0x0000000000162219

@end

