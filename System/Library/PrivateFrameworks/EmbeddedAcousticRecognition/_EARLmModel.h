//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARLmModel : NSObject
{
    shared_ptr_ae20c496 _model;	// 8 = 0x8
    shared_ptr_6d392393 _buildConfig;	// 24 = 0x18
}

+ (void)removeWithDirectory:(id)arg1;	// IMP=0x00600000005e1700
+ (void)initialize;	// IMP=0x00600000005e08bb
- (id).cxx_construct;	// IMP=0x00000000005e1ec0
- (void).cxx_destruct;	// IMP=0x00000000005e1e9c
@property(readonly, nonatomic) shared_ptr_6d392393 buildConfig; // @synthesize buildConfig=_buildConfig;
@property(readonly, nonatomic) shared_ptr_ae20c496 model; // @synthesize model=_model;
- (id)deserializeModelData:(id)arg1;	// IMP=0x00000000005e1da4
- (id)serializedModelWithLanguage:(id)arg1 modelData:(id)arg2 oovs:(id)arg3;	// IMP=0x00000000005e1a2b
- (double)age;	// IMP=0x00000000005e1a13
- (float)weight;	// IMP=0x00000000005e19fb
- (id)metrics;	// IMP=0x00000000005e1896
- (_Bool)writeToDirectory:(id)arg1;	// IMP=0x00000000005e154d
- (void)setWeight:(float)arg1;	// IMP=0x00000000005e14d4
- (_Bool)trainWithData:(id)arg1 shouldStop:(CDUnknownBlockType)arg2;	// IMP=0x00000000005e14c2
- (_Bool)trainWithData:(id)arg1;	// IMP=0x00000000005e1279
- (id)handle;	// IMP=0x00000000005e10be
- (id)initFromDirectory:(id)arg1;	// IMP=0x00000000005e0cc5
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000005e0cac
- (id)initWithConfiguration:(id)arg1 root:(id)arg2;	// IMP=0x00000000005e0936
- (id)_initWithModel:(shared_ptr_ae20c496)arg1;	// IMP=0x00000000005e08e3

@end

