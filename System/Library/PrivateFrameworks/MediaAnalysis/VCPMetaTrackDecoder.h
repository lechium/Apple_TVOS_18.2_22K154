//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetReader, AVAssetReaderOutputMetadataAdaptor, AVAssetReaderTrackOutput;

@interface VCPMetaTrackDecoder : NSObject
{
    AVAssetReader *_reader;	// 8 = 0x8
    AVAssetReaderTrackOutput *_readerOutput;	// 16 = 0x10
    AVAssetReaderOutputMetadataAdaptor *_readerOutputAdaptor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d3d64
- (id)copyNextMetadataGroup;	// IMP=0x00000000000d3d45
- (long long)status;	// IMP=0x00000000000d3d2f
- (void)dealloc;	// IMP=0x00000000000d3cb3
- (id)initWithTrack:(id)arg1;	// IMP=0x00000000000d3add

@end

