//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol HMDAccessoryBrowserDelegate;

__attribute__((visibility("hidden")))
@interface HMDPairedAccessoryInformation : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSData *_setupHash;	// 16 = 0x10
    unsigned long long _transports;	// 24 = 0x18
    id <HMDAccessoryBrowserDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000008de744
@property(readonly) __weak id <HMDAccessoryBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) unsigned long long transports; // @synthesize transports=_transports;
@property(readonly) NSData *setupHash; // @synthesize setupHash=_setupHash;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x00000000008de669
- (unsigned long long)hash;	// IMP=0x00000000008de625
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008de549
- (id)initWithIdentifier:(id)arg1 transports:(unsigned long long)arg2 setupHash:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000008de45f
- (id)init;	// IMP=0x00000000008de3b7

@end

