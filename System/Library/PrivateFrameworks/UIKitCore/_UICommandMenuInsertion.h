//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UICommandMenuInsertion
{
    NSArray *_fallbacks;	// 16 = 0x10
    NSArray *_insertsAtStart;	// 24 = 0x18
    NSArray *_insertsAtEnd;	// 32 = 0x20
    NSArray *_insertsBefore;	// 40 = 0x28
    NSArray *_insertsAfter;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000001451e3c
+ (id)insertionWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsAtStart:(id)arg3 insertsAtEnd:(id)arg4 insertsBefore:(id)arg5 insertsAfter:(id)arg6;	// IMP=0x0060000001451d4e
- (void).cxx_destruct;	// IMP=0x0000000001452484
@property(readonly, nonatomic) NSArray *insertsAfter; // @synthesize insertsAfter=_insertsAfter;
@property(readonly, nonatomic) NSArray *insertsBefore; // @synthesize insertsBefore=_insertsBefore;
@property(readonly, nonatomic) NSArray *insertsAtEnd; // @synthesize insertsAtEnd=_insertsAtEnd;
@property(readonly, nonatomic) NSArray *insertsAtStart; // @synthesize insertsAtStart=_insertsAtStart;
@property(readonly, nonatomic) NSArray *fallbacks; // @synthesize fallbacks=_fallbacks;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000145233f
- (_Bool)acceptBoolItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;	// IMP=0x0000000001452326
- (void)acceptItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;	// IMP=0x000000000145230f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001451fad
- (id)initWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsAtStart:(id)arg3 insertsAtEnd:(id)arg4 insertsBefore:(id)arg5 insertsAfter:(id)arg6;	// IMP=0x0000000001451e44

// Remaining properties
@property(readonly, nonatomic) NSString *anchor; // @dynamic anchor;

@end

