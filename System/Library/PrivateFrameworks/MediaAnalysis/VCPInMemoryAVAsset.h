//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVURLAsset.h>

@class NSData, NSString;

@interface VCPInMemoryAVAsset : AVURLAsset
{
    NSData *_data;	// 24 = 0x18
}

+ (id)assetWithData:(id)arg1;	// IMP=0x00100000002cb98b
- (void).cxx_destruct;	// IMP=0x00000000002cbe3e
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;	// IMP=0x00000000002cb9dc
- (id)initWithData:(id)arg1;	// IMP=0x00000000002cb88b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

