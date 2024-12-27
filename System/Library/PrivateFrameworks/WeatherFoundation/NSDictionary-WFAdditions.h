//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (WFAdditions)
+ (double)timeIntervalValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(double)arg3;	// IMP=0x006000000004702e
+ (id)stringValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(id)arg3;	// IMP=0x0060000000046ea6
+ (long long)integerValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(long long)arg3;	// IMP=0x0060000000046d30
+ (double)doubleValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(double)arg3;	// IMP=0x0060000000046bb7
+ (float)floatValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(float)arg3;	// IMP=0x0060000000046a3e
- (id)wf_filter:(CDUnknownBlockType)arg1;	// IMP=0x001000000002a6a4
- (double)wf_doubleForKeyPath:(id)arg1;	// IMP=0x001000000002a5fa
- (float)wf_floatForKeyPath:(id)arg1;	// IMP=0x001000000002a550
- (long long)wf_integerForKeyPath:(id)arg1;	// IMP=0x001000000002a4b2
- (id)wf_temperatureWithCelsiusKeyPath:(id)arg1 fahrenheitKeyPath:(id)arg2;	// IMP=0x001000000002a396
- (id)wf_numberForKeyPath:(id)arg1;	// IMP=0x001000000002a332
- (id)wf_URLForKeyPath:(id)arg1;	// IMP=0x001000000002a2ce
- (id)wf_stringForKeyPath:(id)arg1;	// IMP=0x001000000002a26a
- (id)wf_arrayForKeyPath:(id)arg1;	// IMP=0x001000000002a206
- (id)wf_dictionaryForKeyPath:(id)arg1;	// IMP=0x001000000002a1a2
- (id)wf_objectForKeyPath:(id)arg1;	// IMP=0x001000000002a18b
- (id)wf_objectOfKind:(Class)arg1 forKeyPath:(id)arg2;	// IMP=0x0010000000029efc
- (_Bool)boolForKey:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x00100000000471c7
- (id)stringForKey:(id)arg1;	// IMP=0x0010000000047167
- (id)numberForKey:(id)arg1;	// IMP=0x0010000000047107
- (id)arrayForKey:(id)arg1;	// IMP=0x00100000000470a7
- (id)dictionaryForKey:(id)arg1;	// IMP=0x0010000000047047
@end

