//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _UITextInputSessionEfficacyAccumulator : NSObject
{
    NSMutableDictionary *_entries;	// 8 = 0x8
    NSString *_language;	// 16 = 0x10
    NSString *_region;	// 24 = 0x18
    NSString *_keyboardVariant;	// 32 = 0x20
    NSString *_keyboardLayout;	// 40 = 0x28
    NSString *_keyboardType;	// 48 = 0x30
    _Bool _sessionIsModeless;	// 56 = 0x38
    NSMutableSet *_sessionErrors;	// 64 = 0x40
    unsigned long long _largestSessionInsertionLength;	// 72 = 0x48
    unsigned long long _largestSessionDeletionLength;	// 80 = 0x50
    long long _sessionNetCharacters;	// 88 = 0x58
    _Bool _insertionObservedInSession;	// 96 = 0x60
    unsigned long long _charsRemovedBeforeFirstInsertionCount;	// 104 = 0x68
    unsigned long long _emojisRemovedBeforeFirstInsertionCount;	// 112 = 0x70
    NSString *_name;	// 120 = 0x78
    NSDictionary *_keyboardTrialParameters;	// 128 = 0x80
}

+ (id)getOrInitializeDictionaryFrom:(id)arg1 forKey:(unsigned long long)arg2 initCapacity:(long long)arg3;	// IMP=0x00600000014f2b43
+ (id)getOrInitializeArrayFromArray:(id)arg1 forKey:(unsigned long long)arg2 initCapacity:(unsigned long long)arg3;	// IMP=0x00600000014f288f
+ (id)getOrInitializeArrayFromDictionary:(id)arg1 forKey:(id)arg2 initCapacity:(unsigned long long)arg3;	// IMP=0x00600000014f26e9
+ (id)accumulatorWithName:(id)arg1;	// IMP=0x00600000014f25d0
- (void).cxx_destruct;	// IMP=0x00000000014f53ec
@property(copy, nonatomic) NSDictionary *keyboardTrialParameters; // @synthesize keyboardTrialParameters=_keyboardTrialParameters;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)enumerateTextInputActionsAnalytics:(CDUnknownBlockType)arg1;	// IMP=0x00000000014f4333
- (id)cleanIdForPublishing:(id)arg1;	// IMP=0x00000000014f429b
- (id)generateSessionErrorStringFromSet:(id)arg1;	// IMP=0x00000000014f416e
- (id)computeSessionActionsStringOnSession:(id)arg1;	// IMP=0x00000000014f3a3c
- (_Bool)isPrimaryInput:(long long)arg1;	// IMP=0x00000000014f3a24
- (void)reset;	// IMP=0x00000000014f3984
- (void)increaseWithAction:(id)arg1;	// IMP=0x00000000014f3135
- (void)increaseCountForAppBundleId:(id)arg1 forSource:(long long)arg2 forActionType:(long long)arg3 forFlagOptions:(long long)arg4 forInputModeKey:(id)arg5 byAccumulatorEntry:(id)arg6;	// IMP=0x00000000014f2cba
- (void)logErrorCodeIfNotNil:(id)arg1;	// IMP=0x00000000014f2652
- (id)init;	// IMP=0x00000000014f24ef

@end

