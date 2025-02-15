//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSURL;
@protocol OS_dispatch_source;

@interface GTUNIXDomainSocketTransport_capture
{
    int _mode;	// 260 = 0x104
    NSObject<OS_dispatch_source> *_connSource;	// 264 = 0x108
}

- (void)_invalidate;	// IMP=0x000000000000c94d
- (id)connect;	// IMP=0x000000000000c8de
- (void)_connectClient:(id)arg1 future:(id)arg2;	// IMP=0x000000000000c62c
- (void)_connectServer:(id)arg1 future:(id)arg2;	// IMP=0x000000000000c203
@property(retain, nonatomic) NSURL *url; // @dynamic url;
- (id)initWithMode:(int)arg1;	// IMP=0x000000000000bf89

@end

