//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x0060000000e69f05
- (void).cxx_destruct;	// IMP=0x0000000000e6a51e
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)handleError:(id)arg1 forRequest:(id)arg2;	// IMP=0x0000000000e6a375
- (void)handleRequest:(id)arg1;	// IMP=0x0000000000e6a1c0
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000e6a102
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000e6a07d
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000e6a009
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000e69fae
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000e69f5b
- (id)initWithImplProxy:(id)arg1;	// IMP=0x0000000000e69d4e
- (void)dealloc;	// IMP=0x0000000000e69d0c

@end

