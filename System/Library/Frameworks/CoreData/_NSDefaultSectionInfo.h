//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSFetchedResultsController, NSString;

__attribute__((visibility("hidden")))
@interface _NSDefaultSectionInfo : NSObject
{
    NSFetchedResultsController *_controller;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_indexTitle;	// 24 = 0x18
    unsigned long long _sectionOffset;	// 32 = 0x20
    unsigned long long _numberOfObjects;	// 40 = 0x28
    unsigned long long _oldSectionNumber;	// 48 = 0x30
    NSArray *_sectionObjects;	// 56 = 0x38
    id _sectionId;	// 64 = 0x40
}

@property(readonly, nonatomic) unsigned long long numberOfObjects; // @synthesize numberOfObjects=_numberOfObjects;
@property(readonly, nonatomic) NSString *indexTitle; // @synthesize indexTitle=_indexTitle;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *objects;
@property(readonly, nonatomic) id sectionId; // @synthesize sectionId=_sectionId;
- (void)dealloc;	// IMP=0x000000000021d60b

@end

