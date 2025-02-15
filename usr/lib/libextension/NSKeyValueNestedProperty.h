//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueUnnestedProperty, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueNestedProperty
{
    NSString *_relationshipKey;	// 24 = 0x18
    NSString *_keyPathFromRelatedObject;	// 32 = 0x20
    NSKeyValueUnnestedProperty *_relationshipProperty;	// 40 = 0x28
    NSString *_keyPathWithoutOperatorComponents;	// 48 = 0x30
    _Bool _isAllowedToResultInForwarding;	// 56 = 0x38
    id _dependentValueKeyOrKeys;	// 64 = 0x40
    _Bool _dependentValueKeyOrKeysIsASet;	// 72 = 0x48
}

- (_Bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;	// IMP=0x00000000007dfa1f
- (id)dependentValueKeyOrKeysIsASet:(_Bool *)arg1;	// IMP=0x00000000007dfa02
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672)arg5;	// IMP=0x00000000007df650
- (_Bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;	// IMP=0x00000000007df54e
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x00000000007df28a
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x00000000007df0d2
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;	// IMP=0x00000000007df09d
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;	// IMP=0x00000000007df05d
- (Class)_isaForAutonotifying;	// IMP=0x00000000007df040
- (void)_addDependentValueKey:(id)arg1;	// IMP=0x00000000007def78
- (void)_givenPropertiesBeingInitialized:(struct __CFSet *)arg1 getAffectingProperties:(id)arg2;	// IMP=0x00000000007def5b
- (id)description;	// IMP=0x00000000007deefa
- (void)dealloc;	// IMP=0x00000000007dee55
- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 firstDotIndex:(unsigned long long)arg3 propertiesBeingInitialized:(struct __CFSet *)arg4;	// IMP=0x00000000007dec15

@end

