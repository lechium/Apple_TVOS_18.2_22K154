//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GDLazyGraphTripleRowCursor, NSNumber, NSString;

@interface GDLazyGraphTripleRow : NSObject
{
    NSString *_subjectOverride;	// 8 = 0x8
    NSString *_subject;	// 16 = 0x10
    NSString *_predicate;	// 24 = 0x18
    NSString *_relationshipId;	// 32 = 0x20
    NSString *_relationshipPredicate;	// 40 = 0x28
    NSString *_object;	// 48 = 0x30
    NSString *_sources;	// 56 = 0x38
    NSNumber *_confidence;	// 64 = 0x40
    NSString *_sourceDuplicates;	// 72 = 0x48
    NSNumber *_timestamp;	// 80 = 0x50
    GDLazyGraphTripleRowCursor *_cursor;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000378f11
@property(readonly, nonatomic) double timestamp;
@property(readonly, nonatomic) NSString *sourceDuplicates;
@property(readonly, nonatomic) double confidence;
@property(readonly, nonatomic) NSString *sources;
@property(readonly, nonatomic) NSString *object;
@property(readonly, nonatomic) NSString *relationshipPredicate;
@property(readonly, nonatomic) NSString *relationshipId;
@property(readonly, nonatomic) NSString *predicate;
@property(readonly, nonatomic) NSString *subject;

@end

