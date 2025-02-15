//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface CRFormContentTypeModelInput : NSObject
{
    MLMultiArray *_fields;	// 8 = 0x8
    MLMultiArray *_labels;	// 16 = 0x10
    MLMultiArray *_length;	// 24 = 0x18
    MLMultiArray *_num_labels;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000012efbe
@property(retain, nonatomic) MLMultiArray *num_labels; // @synthesize num_labels=_num_labels;
@property(retain, nonatomic) MLMultiArray *length; // @synthesize length=_length;
@property(retain, nonatomic) MLMultiArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) MLMultiArray *fields; // @synthesize fields=_fields;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000012ee3d
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithFieldArray:(id)arg1 labelArray:(id)arg2 fieldCount:(unsigned long long)arg3 labelCount:(unsigned long long)arg4 useFloatOnly:(_Bool)arg5;	// IMP=0x000000000012eb37

@end

