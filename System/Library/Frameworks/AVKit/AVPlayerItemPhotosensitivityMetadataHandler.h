//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerItem, AVPlayerItemMediaDataCollector, AVPlayerItemMetadataCollector, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVPlayerItemPhotosensitivityMetadataHandler : NSObject
{
    AVPlayerItemMetadataCollector *_metadataCollector;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    AVPlayerItem *_item;	// 24 = 0x18
    NSArray *_photosensitivityRegions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000011d9fb
@property(readonly, nonatomic) AVPlayerItemMediaDataCollector *metadataCollector; // @synthesize metadataCollector=_metadataCollector;
@property(retain, nonatomic) NSArray *photosensitivityRegions; // @synthesize photosensitivityRegions=_photosensitivityRegions;
- (void)metadataCollector:(id)arg1 didCollectDateRangeMetadataGroups:(id)arg2 indexesOfNewGroups:(id)arg3 indexesOfModifiedGroups:(id)arg4;	// IMP=0x000000000011d92a
- (void)dealloc;	// IMP=0x000000000011d8cc
- (id)initWithPlayerItem:(id)arg1;	// IMP=0x000000000011d781

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

