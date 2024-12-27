//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKMergeableRecordValue, CKMergeableValueID, CKRecord, NSString;

@interface CKMergeableValueDownloadTask : NSObject
{
    CKRecord *_record;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    CKMergeableValueID *_mergeableValueID;	// 24 = 0x18
    CKMergeableRecordValue *_recordValue;	// 32 = 0x20
    CDUnknownBlockType _completionBlock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002f7151
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) CKMergeableRecordValue *recordValue; // @synthesize recordValue=_recordValue;
@property(retain, nonatomic) CKMergeableValueID *mergeableValueID; // @synthesize mergeableValueID=_mergeableValueID;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;

@end

