//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface AUMessageChannel_XPC : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    CDUnknownBlockType _callHostBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000117ffa
@property(copy, nonatomic) CDUnknownBlockType callHostBlock; // @synthesize callHostBlock=_callHostBlock;
- (void)dealloc;	// IMP=0x0000000000117c23
- (id)callAudioUnit:(id)arg1;	// IMP=0x0000000000117ac5
- (id)initWithListenerEndpoint:(id)arg1;	// IMP=0x00000000001178ca

@end

