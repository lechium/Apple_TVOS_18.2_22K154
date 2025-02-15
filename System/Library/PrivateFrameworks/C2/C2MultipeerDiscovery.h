//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class C2Multipeer, NSUUID;
@protocol OS_dispatch_source, OS_nw_browser, OS_nw_listener;

__attribute__((visibility("hidden")))
@interface C2MultipeerDiscovery : NSObject
{
    C2Multipeer *_parent;	// 8 = 0x8
    NSUUID *_myPeerID;	// 16 = 0x10
    NSObject<OS_nw_listener> *_listener;	// 24 = 0x18
    NSObject<OS_nw_browser> *_browser;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_browserTimer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001c00f
@property(retain, nonatomic) NSObject<OS_dispatch_source> *browserTimer; // @synthesize browserTimer=_browserTimer;
@property(retain, nonatomic) NSObject<OS_nw_browser> *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) NSObject<OS_nw_listener> *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSUUID *myPeerID; // @synthesize myPeerID=_myPeerID;
@property(nonatomic) __weak C2Multipeer *parent; // @synthesize parent=_parent;
- (id)_listener;	// IMP=0x000000000001b9cb
- (id)_browser;	// IMP=0x000000000001ad74
- (id)_peerToPeerParameters;	// IMP=0x000000000001abaa
- (void)resetTimer;	// IMP=0x000000000001ab1c
- (void)startTimer;	// IMP=0x000000000001a782
- (void)touch;	// IMP=0x000000000001a6bf
- (id)initWithParent:(id)arg1;	// IMP=0x000000000001a498

@end

