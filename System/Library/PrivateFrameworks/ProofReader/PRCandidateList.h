//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PRErrorModel;

__attribute__((visibility("hidden")))
@interface PRCandidateList : NSObject
{
    NSMutableArray *_candidates;	// 8 = 0x8
    unsigned long long _maxCount;	// 16 = 0x10
    struct _NSRange _defaultReplacementRange;	// 24 = 0x18
    PRErrorModel *_errorModel;	// 40 = 0x28
    NSArray *_capitalizationDictionaryArray;	// 48 = 0x30
}

- (id)candidateWithString:(id)arg1;	// IMP=0x000000000004bc2f
- (struct _NSRange)defaultReplacementRange;	// IMP=0x000000000004bc21
- (_Bool)isFull;	// IMP=0x000000000004bbe2
- (unsigned long long)maxCount;	// IMP=0x000000000004bbd8
- (unsigned long long)count;	// IMP=0x000000000004bbc2
- (id)candidateStrings;	// IMP=0x000000000004ba64
- (id)candidates;	// IMP=0x000000000004ba5a
- (void)addOmissionCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 intendedPrecedingCharacter:(unsigned short)arg4 omittedCharacter:(unsigned short)arg5 intendedFollowingCharacter:(unsigned short)arg6;	// IMP=0x000000000004b9f7
- (void)addInsertionCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 intendedPrecedingCharacter:(unsigned short)arg4 insertedCharacter:(unsigned short)arg5 intendedFollowingCharacter:(unsigned short)arg6;	// IMP=0x000000000004b994
- (void)addTranspositionCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 intendedFirstCharacter:(unsigned short)arg4 intendedSecondCharacter:(unsigned short)arg5;	// IMP=0x000000000004b93b
- (void)addReplacementCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 intendedCharacter:(unsigned short)arg4 actualCharacter:(unsigned short)arg5;	// IMP=0x000000000004b8e2
- (void)addCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 errorType:(unsigned long long)arg4;	// IMP=0x000000000004b891
- (void)addCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 errorType:(unsigned long long)arg3;	// IMP=0x000000000004b83a
- (void)addCandidateWithString:(id)arg1 errorType:(unsigned long long)arg2;	// IMP=0x000000000004b7e7
- (void)addCandidateWithString:(id)arg1 replacementRange:(struct _NSRange)arg2 errorType:(unsigned long long)arg3;	// IMP=0x000000000004b79f
- (void)addCandidateWithWords:(id)arg1 replacementRange:(struct _NSRange)arg2 errorType:(unsigned long long)arg3;	// IMP=0x000000000004b757
- (void)addCandidate:(id)arg1;	// IMP=0x000000000004b4f9
- (void)dealloc;	// IMP=0x000000000004b4a8
- (id)description;	// IMP=0x000000000004b48b
- (id)initWithMaxCount:(unsigned long long)arg1 defaultReplacementRange:(struct _NSRange)arg2 customErrorModel:(id)arg3 capitalizationDictionaryArray:(id)arg4;	// IMP=0x000000000004b3de

@end

