//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GTCaptureObjects : NSObject
{
    NSArray *_devices;	// 8 = 0x8
    NSArray *_commandQueues;	// 16 = 0x10
    NSArray *_captureScopes;	// 24 = 0x18
    NSArray *_metalLayers;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000f784
- (void).cxx_destruct;	// IMP=0x000000000000f9c7
@property(copy, nonatomic) NSArray *metalLayers; // @synthesize metalLayers=_metalLayers;
@property(copy, nonatomic) NSArray *captureScopes; // @synthesize captureScopes=_captureScopes;
@property(copy, nonatomic) NSArray *commandQueues; // @synthesize commandQueues=_commandQueues;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000f8ce
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000f78c

@end

