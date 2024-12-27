//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDataStreamFragment, NSMutableData, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDDataStreamFragmentAssembler : HMFObject
{
    NSNumber *_sequenceNumber;	// 8 = 0x8
    HMDDataStreamFragment *_assembledFragment;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    NSMutableData *_data;	// 32 = 0x20
    NSNumber *_currentChunkSequenceNumber;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000386de6
@property(copy) NSNumber *currentChunkSequenceNumber; // @synthesize currentChunkSequenceNumber=_currentChunkSequenceNumber;
@property(readonly, copy) NSMutableData *data; // @synthesize data=_data;
@property(readonly, copy) NSString *type; // @synthesize type=_type;
@property(copy) HMDDataStreamFragment *assembledFragment; // @synthesize assembledFragment=_assembledFragment;
@property(readonly, copy) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (_Bool)addFragmentChunk:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000386759
- (id)attributeDescriptions;	// IMP=0x00000000003864e4
- (id)initWithSequenceNumber:(id)arg1 type:(id)arg2;	// IMP=0x00000000003862d4

@end

