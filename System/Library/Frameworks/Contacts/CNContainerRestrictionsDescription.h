//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CNContainerRestrictionsDescription
{
}

- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000f734
- (void)setCNValue:(id)arg1 onContainer:(id)arg2;	// IMP=0x000000000000f6e2
- (id)CNValueForContainer:(id)arg1;	// IMP=0x000000000000f6aa
- (Class)valueClass;	// IMP=0x000000000000f699
- (_Bool)isWritable;	// IMP=0x000000000000f691
- (id)key;	// IMP=0x000000000000f67d
- (_Bool)setABValue:(void *)arg1 onABSource:(void *)arg2 error:(struct __CFError **)arg3;	// IMP=0x000000000004ddb7
- (id)CNValueFromABValue:(void *)arg1;	// IMP=0x000000000004dd7f
- (void *)ABValueFromCNValue:(id)arg1;	// IMP=0x000000000004dd28
- (_Bool)isConvertibleABValue:(void *)arg1;	// IMP=0x000000000004dcf4
- (int)abPropertyID;	// IMP=0x000000000004dce5

@end

