//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _EARNgramLmModel2
{
    shared_ptr_33ae5576 _ngramModel;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x00600000005e3504
- (id).cxx_construct;	// IMP=0x00000000005e3a7f
- (void).cxx_destruct;	// IMP=0x00000000005e3a6e
@property(readonly, nonatomic) shared_ptr_33ae5576 ngramModel; // @synthesize ngramModel=_ngramModel;
@property(readonly, nonatomic) NSString *arpaFileName;
- (void)setProtectionClass:(id)arg1;	// IMP=0x00000000005e3734
- (_Bool)writeToDirectory:(id)arg1;	// IMP=0x00000000005e3581
- (id)_initWithModel:(shared_ptr_33ae5576)arg1;	// IMP=0x00000000005e352c

@end

