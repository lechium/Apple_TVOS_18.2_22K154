//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMBLocalZoneQueryResult.h"

@class NSData, NSMutableSet;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultRecordIDSequence : HMBLocalZoneQueryResult
{
    NSData *_currentSequenceAsData;	// 8 = 0x8
    NSData *_lastReturnedSequence;	// 16 = 0x10
    NSMutableSet *_returnedIDs;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006ace1
@property(retain, nonatomic) NSMutableSet *returnedIDs; // @synthesize returnedIDs=_returnedIDs;
@property(retain, nonatomic) NSData *lastReturnedSequence; // @synthesize lastReturnedSequence=_lastReturnedSequence;
@property(retain, nonatomic) NSData *currentSequenceAsData; // @synthesize currentSequenceAsData=_currentSequenceAsData;
- (id)fetchRow:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006abd5
- (id)initWithLocalZone:(id)arg1 statement:(id)arg2 initialSequence:(id)arg3 sequenceBindOffset:(unsigned long long)arg4 arguments:(id)arg5 maximumRowsPerSelect:(unsigned long long)arg6;	// IMP=0x000000000006ab2c
- (_Bool)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 currentSequence:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006aa34
- (id)fetchRowFromStatement:(struct sqlite3_stmt *)arg1 skip:(_Bool *)arg2 updatedSequenceColumn:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000006a81d
- (id)nextObject;	// IMP=0x0000000000069eef

@end

