//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VCRateControlServerBag : NSObject
{
    NSNumber *_experimentGroupIndex;	// 8 = 0x8
    NSDictionary *_serverBagDict;	// 16 = 0x10
    int _operatingMode;	// 24 = 0x18
    _Bool _experimentEnabled;	// 28 = 0x1c
    NSString *_defaultExperimentConfigString;	// 32 = 0x20
}

+ (id)prefixForMode:(int)arg1;	// IMP=0x00600000003e7b54
+ (id)groupKeysWithMode:(int)arg1 primaryKey:(id)arg2;	// IMP=0x00600000003e770b
+ (id)profileNumberKeyWithMode:(int)arg1;	// IMP=0x00600000003e76be
+ (id)keysWithMode:(int)arg1;	// IMP=0x00600000003e747b
@property(readonly) NSDictionary *serverBagDictionary; // @synthesize serverBagDictionary=_serverBagDict;
- (id)getExperimentValueForKey:(id)arg1;	// IMP=0x00000000003e8913
@property(readonly, retain) NSNumber *experimentGroupIndex;
@property(readonly) int experimentVersion;
- (id)getExperimentConfig:(unsigned char)arg1 defaultValue:(id)arg2;	// IMP=0x00000000003e83af
- (id)valueForSecondaryKeyWithPrimaryKey:(id)arg1 secondaryKey:(id)arg2 type:(int)arg3;	// IMP=0x00000000003e8239
- (id)valueForType:(int)arg1 value:(id)arg2;	// IMP=0x00000000003e8161
- (_Bool)containsAllSecondaryKeysWithPrimaryKey:(id)arg1;	// IMP=0x00000000003e8078
- (void)dealloc;	// IMP=0x00000000003e8004
- (id)initWithMode:(int)arg1 serverBagDict:(id)arg2;	// IMP=0x00000000003e7cf0

@end

