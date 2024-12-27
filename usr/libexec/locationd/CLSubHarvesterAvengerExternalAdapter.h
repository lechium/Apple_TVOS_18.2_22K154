//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLSubHarvesterAvengerExternalAdapter : NSObject
{
    void *_subHarvesterExternal;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (id)clientIdentifier;	// IMP=0x00100000008af302
- (void)onAdvertisementBufferEmptied;	// IMP=0x00100000008af2fc
- (void)onAggressiveScanEnded;	// IMP=0x00100000008af2ea
- (void)onAggressiveScanStarted;	// IMP=0x00100000008af2d8
- (void)onAvengerAdvertisement:(id)arg1 reconciledInformation:(id)arg2;	// IMP=0x00100000008af2bd
- (id)initWithHarvesterExternal:(void *)arg1;	// IMP=0x00100000008af27c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

